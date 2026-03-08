/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x140295994
 * Callers:
 *     ExpSaAllocatorFree @ 0x140295774 (ExpSaAllocatorFree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  bool v14; // bl
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int v18; // [rsp+50h] [rbp+8h]

  v3 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a3;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v3, CurrentThread)) != 0 )
  {
    _BitScanForward(&v10, AbEntrySummary);
    v18 = v10;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&CurrentThread[1].Process + 12 * v18);
    if ( v3 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v5, v3);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v6);
  *(_DWORD *)(a1 + 36) += v6;
  v14 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease(v3);
  return v14;
}
