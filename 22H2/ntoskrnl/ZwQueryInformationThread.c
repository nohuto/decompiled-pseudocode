/*
 * XREFs of ZwQueryInformationThread @ 0x14041AB40
 * Callers:
 *     DifZwQueryInformationThreadWrapper @ 0x1405F4B20 (DifZwQueryInformationThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
