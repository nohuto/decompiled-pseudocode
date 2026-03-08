/*
 * XREFs of WheaSelLogSetNtSchedulerAvailability @ 0x14060DDEC
 * Callers:
 *     WheaSelLogInitialize @ 0x140B482FC (WheaSelLogInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14060DF50 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 */

char WheaSelLogSetNtSchedulerAvailability()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rsi
  __int64 v2; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int SessionId; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = v1->AbEntrySummary;
  if ( v1->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&WheaIpmiContextLock, (__int64)v1)) != 0 )
  {
    _BitScanForward(&v4, AbEntrySummary);
    v12 = v4;
    v1->AbEntrySummary = AbEntrySummary & ~(1 << v4);
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&v1[1].Process + 12 * v12);
    if ( (unsigned __int64)&WheaIpmiContextLock - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)&WheaIpmiContextLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v2, (__int64)&WheaIpmiContextLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  WheapSelLogSetNtSchedulerAvailabilityNoLock();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
