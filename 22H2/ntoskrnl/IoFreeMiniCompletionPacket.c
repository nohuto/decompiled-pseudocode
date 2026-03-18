/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14076CD50
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x1403054C0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140305588 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319B60 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x140728C70 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket(a1);
}
