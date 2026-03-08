/*
 * XREFs of KdpTimeSlipDpcRoutine @ 0x140AAD0C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall KdpTimeSlipDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchangeAdd(&KdpTimeSlipPending, 0xFFFFFFFF) > 1 )
    ExQueueWorkItem(&KdpTimeSlipWorkItem, DelayedWorkQueue);
}
