/*
 * XREFs of WheaUnregisterErrorSourceOverride @ 0x140611410
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     WheaRemoveErrorSource @ 0x140A04C80 (WheaRemoveErrorSource.c)
 */

void __fastcall WheaUnregisterErrorSourceOverride(signed int a1, unsigned int a2)
{
  __int64 v2; // r15
  ULONG_PTR v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int SessionId; // eax
  unsigned int v15; // [rsp+50h] [rbp+8h]

  if ( (unsigned int)a1 <= 0x12 )
  {
    v2 = a1;
    v4 = (ULONG_PTR)&WheapSourceConfigOverride[8 * (__int64)a1];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeGetCurrentThread();
    v7 = 0LL;
    _disable();
    AbEntrySummary = v6->AbEntrySummary;
    if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v4, (__int64)v6)) != 0 )
    {
      _BitScanForward(&v9, AbEntrySummary);
      v15 = v9;
      v6->AbEntrySummary = AbEntrySummary & ~(1 << v9);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v7 = (__int64)(&v6[1].Process + 12 * v15);
      if ( v4 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v7 + 8) = SessionId;
      *(_QWORD *)v7 = v4 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v7, v4);
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
    if ( *(_BYTE *)(v4 + 8) )
    {
      WheapOverrideHandler[v2] = 0LL;
      WheaRemoveErrorSource(a2);
      *(_BYTE *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 16) = PdcCreateWatchdogAroundClientCall;
      *(_QWORD *)(v4 + 24) = xHalPciEarlyRestore;
      *(_QWORD *)(v4 + 32) = WheapDefaultErrSrcCreateRecord;
      *(_QWORD *)(v4 + 40) = PdcCreateWatchdogAroundClientCall;
      *(_QWORD *)(v4 + 48) = xHalTimerWatchdogStop;
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease(v4);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
