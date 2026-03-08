/*
 * XREFs of AlpcpQueueIoCompletion @ 0x1402927FC
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140290C60 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402925F4 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x1402928A0 (IoSetIoCompletionEx3.c)
 */

_BOOL8 __fastcall AlpcpQueueIoCompletion(int a1, int a2, int a3, __int64 a4, char a5, int a6)
{
  return (int)IoSetIoCompletionEx3(a1, a2, a3, 0, 0LL, 0, a4, a5, a6 != 0) >= 0;
}
