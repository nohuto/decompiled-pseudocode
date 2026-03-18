/*
 * XREFs of ZwAddDriverEntry @ 0x14041B400
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x1405EC9D0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
