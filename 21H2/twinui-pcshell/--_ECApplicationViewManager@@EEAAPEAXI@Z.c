/*
 * XREFs of ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x1801FDC08
 * Callers:
 *     ??_ECApplicationViewManager@@GEI@EAAPEAXI@Z @ 0x180163040 (--_ECApplicationViewManager@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1801FD13C (--1CApplicationViewManager@@EEAA@XZ.c)
 */

CApplicationViewManager *__fastcall CApplicationViewManager::`vector deleting destructor'(
        CApplicationViewManager *this,
        char a2)
{
  CApplicationViewManager::~CApplicationViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x330);
  return this;
}
