.PHONY: FORCE
all: FORCE
	$(MAKE) -C .. softnote_qt test_softnote_qt
clean: FORCE
	$(MAKE) -C .. softnote_qt_clean test_softnote_qt_clean
check: FORCE
	$(MAKE) -C .. test_softnote_qt_check
softnote-qt softnote-qt.exe: FORCE
	 $(MAKE) -C .. softnote_qt
apk: FORCE
	$(MAKE) -C .. softnote_qt_apk
