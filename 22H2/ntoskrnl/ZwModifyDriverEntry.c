/*
 * XREFs of ZwModifyDriverEntry @ 0x14041CA60
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1405F12D0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
