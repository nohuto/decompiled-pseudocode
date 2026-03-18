/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x14041CA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCancelWaitCompletionPacket(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
