/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x1403584B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+48h] [rbp+10h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, CurrentThread)) != 0 )
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
      v2 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * v13);
      if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    return 1;
  }
}
