# diadocsdk-cpp

diadocsdk-cpp является официальной C++-реализацией клиента, использующего [публичный API Диадока](http://api-docs.diadoc.ru/).
На данный момент поддерживается только ОС семейства Windows, компиляция с помощью компиляторов Visual Studio С++.

## Сборка проектов

Для сборки проекта используется утилита [cmake](cmake.org). Инсталлятор можно скачать [на официальном сайте](https://cmake.org/download/). В качестве альтернативы, можно установить утилиту cmake с помощью [Chocolatey](https://chocolatey.org/packages/cmake.install). В итоге утилита cmake дложна находиться в переменной среды PATH, чтобы ее можно было вызвать из командной строки.

Стандартный способ сборки проекта утилитой cmake (старт из корня репозитория):

```
mkdir tmp
cd tmp
cmake ..
cmake --build .
```

Видно, что утилита cmake работает в две фазы:
- `cmake ..` генерирует файлы solution и проектов для Visual Studio.
- `cmake --build .` - запуск сборки проекта из командной строки. Технически, для сборки проекта cmake вызывает msbuild для сгенерированных проектов. Также возможно открыть сгененрированные проекты непосредственно в Visual Studio и компилировать проект из IDE.

## Окончательная сборка проекта (CI)

Для окончательной сборки проекта используется утилита [Cake](http://cakebuild.net/).

Запуск powershell-скрипта `build.ps1` скачает утилиту Cake, если ее у вас нет, и запустит сборку проекта.
Из командной строки этот скрипт можно запустить с помощью `generate.bat`.

Выполняется:

- генерация проектов Visual Studio с помощью утилиты cmake
- сборка компилятора protoc
- компиляция proto-файлов
- компиляция DiadocApi

## Сборка для различных платформ

`cmake` умеет генерировать solution и проекты для разных версий Visual Studio, для разных архитектур (x86, x64, ARM). Генератор и тулсет можно регулировать с помощью параметров командной строки `build.ps1`.

Пример генерации проектов Diadoc C++ SDK для Visual Studio 2013, для 64-битной платформы, с использованием компилятора, генерирующего исполняемые файлы с возможностью запуска в Windows XP:

```
PS> .\build.ps1 -Generator "Visual Studio 12 2013 Win64" -Toolset v120_xp
```