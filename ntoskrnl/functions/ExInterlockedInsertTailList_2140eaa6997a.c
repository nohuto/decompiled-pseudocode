PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  volatile signed __int32 *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Blink; // rdi
  struct _KPRCB *v8; // rcx
  signed __int32 *v9; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int16 v17; // [rsp+40h] [rbp-8h]
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v17 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        _m_prefetchw(v14);
        v15 = *v14;
        do
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange(v14, v15 & 0xFFDFFFFF, v15);
        }
        while ( v16 != v15 );
        if ( (v15 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    do
      KeYieldProcessorEx(&v18);
    while ( *Lock );
    _disable();
  }
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v17 & 0x200) != 0 )
  {
    v8 = KeGetCurrentPrcb();
    v9 = (signed __int32 *)v8->SchedulerAssist;
    if ( v9 )
    {
      _m_prefetchw(v9);
      v11 = *v9;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(v9, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
    _enable();
  }
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
