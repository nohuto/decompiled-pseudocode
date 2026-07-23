/*
 * XREFs of TtmpScheduledEvaluationDpc @ 0x140580F80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall TtmpScheduledEvaluationDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchange((volatile __int32 *)DeferredContext + 62, 1) )
    ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 216), DelayedWorkQueue);
}
