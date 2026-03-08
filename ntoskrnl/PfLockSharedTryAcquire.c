/*
 * XREFs of PfLockSharedTryAcquire @ 0x14035B800
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1407E6FF0 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1403586D0 (ExfTryAcquirePushLockSharedEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  ULONG_PTR v4; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+38h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  if ( v3->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)v3)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v13 = v6;
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
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
    v4 = (ULONG_PTR)(&v3[1].Process + 12 * v13);
    if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || ExfTryAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    return 1LL;
  }
  else
  {
    if ( v4 )
      KeAbPostReleaseEx(BugCheckParameter2, v4);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
