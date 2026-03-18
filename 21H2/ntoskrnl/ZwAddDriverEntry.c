/*
 * XREFs of ZwAddDriverEntry @ 0x14041C4C0
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x14061C910 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
