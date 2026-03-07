struct _LIST_ENTRY *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
  {
    Blink = *(struct _LIST_ENTRY **)&CurrentThread->Process[2].Header.Lock;
  }
  else if ( Blink )
  {
    while ( !(unsigned __int8)PsIsServerSilo() )
      ;
  }
  if ( Blink )
    return Blink[93].Flink;
  else
    return (struct _LIST_ENTRY *)&PspHostSiloGlobals;
}
