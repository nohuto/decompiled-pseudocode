/*
 * XREFs of ZwAlpcQueryInformation @ 0x140413430
 * Callers:
 *     DifZwAlpcQueryInformationWrapper @ 0x1405EB290 (DifZwAlpcQueryInformationWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcQueryInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
