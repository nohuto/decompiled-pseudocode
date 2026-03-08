/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x140415990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetLowWaitHighEventPair(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
