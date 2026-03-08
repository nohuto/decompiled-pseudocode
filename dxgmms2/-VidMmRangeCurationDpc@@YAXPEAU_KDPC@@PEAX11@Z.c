/*
 * XREFs of ?VidMmRangeCurationDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00170F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmRangeCurationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange((volatile __int32 *)DeferredContext + 385, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)DeferredContext + 47, DelayedWorkQueue);
}
