/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1403CFE90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall CcTelemetryPeriodicTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _InterlockedExchange(&dword_140C5F614, 0);
  if ( !_InterlockedCompareExchange(&dword_140C5F618, 1, 0) )
    ExQueueWorkItem(&stru_140C5F6A0, NormalWorkQueue);
}
