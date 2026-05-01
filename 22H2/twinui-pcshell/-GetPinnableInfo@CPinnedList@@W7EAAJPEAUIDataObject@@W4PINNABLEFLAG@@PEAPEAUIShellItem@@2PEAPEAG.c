/*
 * XREFs of ?GetPinnableInfo@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x180171DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::GetPinnableInfo(
        __int64 a1,
        struct IDataObject *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  return CPinnedList::GetPinnableInfo(a1 - 8, a2, a3, a4, a5, a6, a7);
}
