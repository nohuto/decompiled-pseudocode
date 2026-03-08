/*
 * XREFs of ExAcquireCacheAwarePushLockSharedEx @ 0x140262550
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int64 *__fastcall ExAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int64 *v11; // rdi
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int v15; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  v3 = BugCheckParameter1;
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
      _BitScanForward(&v7, AbEntrySummary);
      v15 = v7;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v13 = *SchedulerAssist;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v2 = (__int64)(&CurrentThread[1].Process + 12 * v15);
      if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  v11 = *(signed __int64 **)(BugCheckParameter2 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v3, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return v11;
}
