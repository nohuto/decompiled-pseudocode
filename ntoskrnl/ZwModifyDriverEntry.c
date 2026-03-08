/*
 * XREFs of ZwModifyDriverEntry @ 0x1404146D0
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1405EEE20 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
