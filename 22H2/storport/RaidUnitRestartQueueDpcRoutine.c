/*
 * XREFs of RaidUnitRestartQueueDpcRoutine @ 0x1C004B9C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00078C8 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueueDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidRestartIoQueue(DeferredContext[8], 0);
}
