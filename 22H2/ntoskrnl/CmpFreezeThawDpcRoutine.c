/*
 * XREFs of CmpFreezeThawDpcRoutine @ 0x1406162D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall CmpFreezeThawDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&CmpFreezeThawPending, 1, 0) )
    ExQueueWorkItem(&CmpFreezeThawWorkItem, DelayedWorkQueue);
}
