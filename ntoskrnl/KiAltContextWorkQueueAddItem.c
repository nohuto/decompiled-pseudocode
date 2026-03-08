/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x14057DD74
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x1402B8DC0 (ExInterlockedInsertTailList.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057DE20 (WheaFlushETWEventsSelectProcessor.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &Lock) )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C40978, CriticalWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&Dpc, &ProcNumber);
      BYTE1(Dpc) = 2;
      KiInsertQueueDpc((ULONG_PTR)&Dpc, 0LL, 0LL, 0LL, 0);
    }
  }
}
