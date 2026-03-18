/*
 * XREFs of ZwAlpcQueryInformation @ 0x14041C880
 * Callers:
 *     DifZwAlpcQueryInformationWrapper @ 0x14061D6E0 (DifZwAlpcQueryInformationWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcQueryInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
