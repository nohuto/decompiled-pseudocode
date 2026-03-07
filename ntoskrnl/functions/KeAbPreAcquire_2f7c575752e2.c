__int64 __fastcall KeAbPreAcquire(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+48h] [rbp+10h]
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v14 = 0LL;
  CurrentThread = KeGetCurrentThread();
  _disable();
  if ( a2 )
  {
    KiAbEntryFreeAndEnableInterrupts(a2, (ULONG_PTR)CurrentThread, a1, 0, &v14);
LABEL_5:
    if ( (unsigned __int64)(a1 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, CurrentThread)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v13 = v6;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    goto LABEL_5;
  }
LABEL_8:
  if ( (_DWORD)v14 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread);
  return v2;
}
