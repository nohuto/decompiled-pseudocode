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
