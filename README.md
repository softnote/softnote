Softnote Core integration/staging tree
=====================================

https://softnote.org

Further information about Softnote Core is available in the [doc folder](/doc).

What is Softnote?
----------------

Softnote is an experimental digital currency that enables instant payments to
anyone, anywhere in the world. Softnote uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. Softnote Core is the name of the open source
software which enables the use of this currency.

License
-------

Softnote Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built (see `doc/build-*.md` for instructions) and tested, but it is not guaranteed to be
completely stable. [Tags](https://github.com/softnote/softnote/tags) are created
regularly from release branches to indicate new official, stable release versions of Softnote Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md)
and useful hints for developers can be found in [doc/developer-notes.md](doc/developer-notes.md).

### Automated Testing

Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`

The CI (Continuous Integration) systems make sure that every pull request is built for Windows, Linux, and macOS,
and that unit/sanity tests are run automatically.

