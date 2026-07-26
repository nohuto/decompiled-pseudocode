/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1C00B1650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&dword_1C00E7348, 1, 0) )
    ExQueueWorkItem(&stru_1C00E6F00, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
