/*
 * XREFs of ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140413790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
