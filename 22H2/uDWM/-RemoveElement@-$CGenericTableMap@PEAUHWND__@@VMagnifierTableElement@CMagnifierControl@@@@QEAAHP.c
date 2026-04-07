/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18008CFF8
 * Callers:
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x18008BF4C (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18008CBD0 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18008C030 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CMagnifierControl::MagnifierTableElement *this)
{
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(this);
  return RtlDeleteElementGenericTable(Table, this);
}
