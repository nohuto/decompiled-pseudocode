/*
 * XREFs of RaidAdapterRestartDpcRoutine @ 0x1C002E680
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C0013F04 (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidAdapterRestartDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidAdapterRestartQueues(DeferredContext[8], 0);
}
