/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14065CB10
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DB910 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x1402DD850 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1402DD8F4 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1405E4380 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((_SLIST_ENTRY *)a1);
}
