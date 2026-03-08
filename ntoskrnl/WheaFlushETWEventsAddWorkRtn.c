/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x140610BC4
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140610D50 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057DE20 (WheaFlushETWEventsSelectProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140C2B5E0, 1u);
  if ( dword_140C2B5E0 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C2B5C0, DelayedWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)&WheaFlushETWEventsDpcWorker, 0LL, 0LL, 0LL, 0);
    }
  }
}
