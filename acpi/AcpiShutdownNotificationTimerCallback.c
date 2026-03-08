/*
 * XREFs of AcpiShutdownNotificationTimerCallback @ 0x1C003D9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiShutdownNotificationTimerCallback(
        struct _KDPC *Dpc,
        struct _WORK_QUEUE_ITEM *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(DeferredContext + 5, DelayedWorkQueue);
}
