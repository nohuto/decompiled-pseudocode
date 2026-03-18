/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x140645DC0
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140645F50 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057C2F0 (WheaFlushETWEventsSelectProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140C0FAC0, 1u);
  if ( dword_140C0FAC0 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C0FAA0, DelayedWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)&WheaFlushETWEventsDpcWorker, 0LL, 0LL, 0LL, 0);
    }
  }
}
