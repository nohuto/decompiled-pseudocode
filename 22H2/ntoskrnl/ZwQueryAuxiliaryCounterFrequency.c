/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x1403FC200
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
