__int64 WheapReportDeferredLiveDumps()
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // rax
  bool v2; // di
  unsigned int v3; // esi
  struct _LIST_ENTRY *v4; // rax

  Blink = 0LL;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  if ( (struct _LIST_ENTRY **)WheapDispatchPtr.Queue.ListEntry.Blink != &WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink )
  {
    Blink = WheapDispatchPtr.Queue.ListEntry.Blink;
    Flink = WheapDispatchPtr.Queue.ListEntry.Blink->Flink;
    if ( (struct _LIST_ENTRY **)WheapDispatchPtr.Queue.ListEntry.Blink->Blink != &WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink
      || Flink->Blink != WheapDispatchPtr.Queue.ListEntry.Blink )
    {
LABEL_18:
      __fastfail(3u);
    }
    WheapDispatchPtr.Queue.ListEntry.Blink = WheapDispatchPtr.Queue.ListEntry.Blink->Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  v2 = 0;
  v3 = 0;
  while ( Blink )
  {
    if ( !v2 )
      v3 = WheapReportLiveDump(Blink);
    ExFreePoolWithTag(Blink, 0x61656857u);
    if ( !v2 )
      v2 = v3 != 0;
    ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
    Blink = WheapDispatchPtr.Queue.ListEntry.Blink;
    if ( (struct _LIST_ENTRY **)WheapDispatchPtr.Queue.ListEntry.Blink == &WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink )
    {
      Blink = 0LL;
    }
    else
    {
      if ( (struct _LIST_ENTRY **)WheapDispatchPtr.Queue.ListEntry.Blink->Blink != &WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink )
        goto LABEL_18;
      v4 = WheapDispatchPtr.Queue.ListEntry.Blink->Flink;
      if ( WheapDispatchPtr.Queue.ListEntry.Blink->Flink->Blink != WheapDispatchPtr.Queue.ListEntry.Blink )
        goto LABEL_18;
      WheapDispatchPtr.Queue.ListEntry.Blink = WheapDispatchPtr.Queue.ListEntry.Blink->Flink;
      v4->Blink = (struct _LIST_ENTRY *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink;
    }
    ExReleaseFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  }
  return v3;
}
