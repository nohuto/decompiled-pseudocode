void __fastcall ExpReleaseFastResourceExclusive2(signed __int64 *BugCheckParameter2)
{
  signed __int64 *v2; // rcx
  ULONG_PTR v4; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  v2 = BugCheckParameter2 + 8;
  if ( (*((_DWORD *)BugCheckParameter2 + 24))-- == 1 )
  {
    v4 = *((unsigned __int8 *)BugCheckParameter2 + 100);
    _disable();
    ExpRemoveEntryListAndClear2(v2);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    BugCheckParameter2[10] = 0LL;
    *((_BYTE *)BugCheckParameter2 + 100) = 0;
    _m_prefetchw(BugCheckParameter2);
    v9 = *BugCheckParameter2;
    do
    {
      if ( (v9 & 2) != 0 )
      {
        ExpReleaseFastResourceExclusiveSlow((ULONG_PTR)BugCheckParameter2);
        return;
      }
      v10 = v9;
      v9 = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, v9);
    }
    while ( v10 != v9 );
    if ( (_BYTE)v4 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v4);
  }
}
