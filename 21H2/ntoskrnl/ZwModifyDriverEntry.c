/*
 * XREFs of ZwModifyDriverEntry @ 0x14041DB00
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1406213B0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
