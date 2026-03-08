/*
 * XREFs of ZwSetHighWaitLowEventPair @ 0x140415710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetHighWaitLowEventPair(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
