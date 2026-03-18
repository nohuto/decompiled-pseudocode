/*
 * XREFs of ZwQueryInformationThread @ 0x14041BC00
 * Callers:
 *     DifZwQueryInformationThreadWrapper @ 0x140624D40 (DifZwQueryInformationThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
