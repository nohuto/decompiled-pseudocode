/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x140414BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAuxiliaryCounterFrequency(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
