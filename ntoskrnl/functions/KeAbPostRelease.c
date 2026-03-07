signed __int32 __fastcall KeAbPostRelease(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // r8d
  __int64 p_Process; // rdi
  unsigned int i; // edx
  int v6; // ebx
  signed __int32 result; // eax
  struct _KPRCB *v8; // rcx
  signed __int32 *v9; // r8
  signed __int32 v10; // ett
  struct _KPRCB *v11; // rcx
  signed __int32 *v12; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  signed __int32 v17; // ett

  CurrentThread = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  for ( i = 0; i < 6; ++i )
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(p_Process + 18)
      && (*(_DWORD *)p_Process & 1) == 0
      && *(_DWORD *)(p_Process + 8) == SessionId )
    {
      *(_BYTE *)(p_Process + 18) = 0;
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v15 = *SchedulerAssist;
          do
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange(SchedulerAssist, v15 & 0xFFDFFFFF, v15);
          }
          while ( v16 != v15 );
          if ( (v15 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v6 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      result = CurrentThread->AbEntrySummary | (1 << *(_BYTE *)(p_Process + 16));
      CurrentThread->AbEntrySummary = result;
      v8 = KeGetCurrentPrcb();
      v9 = (signed __int32 *)v8->SchedulerAssist;
      if ( v9 )
      {
        _m_prefetchw(v9);
        result = *v9;
        do
        {
          v10 = result;
          result = _InterlockedCompareExchange(v9, result & 0xFFDFFFFF, result);
        }
        while ( v10 != result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick(v8);
      }
      _enable();
      if ( v6 )
        return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread);
      return result;
    }
    p_Process += 96LL;
  }
  result = *(&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = (signed __int32 *)v11->SchedulerAssist;
  if ( v12 )
  {
    _m_prefetchw(v12);
    result = *v12;
    do
    {
      v17 = result;
      result = _InterlockedCompareExchange(v12, result & 0xFFDFFFFF, result);
    }
    while ( v17 != result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(v11);
  }
  _enable();
  return result;
}
