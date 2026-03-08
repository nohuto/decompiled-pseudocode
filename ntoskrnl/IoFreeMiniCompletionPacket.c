/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x1406F4D80
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140290DA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x1402918A0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140291968 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1407C40A0 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
