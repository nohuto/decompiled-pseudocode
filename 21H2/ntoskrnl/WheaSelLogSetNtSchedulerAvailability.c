/*
 * XREFs of WheaSelLogSetNtSchedulerAvailability @ 0x140643104
 * Callers:
 *     WheaSelLogInitialize @ 0x140B31348 (WheaSelLogInitialize.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064331C (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 */

char WheaSelLogSetNtSchedulerAvailability()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rsi
  __int64 v2; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v4; // ebp
  __int64 v5; // rdx
  int SessionId; // eax
  struct _KTHREAD *v8; // rdi
  __int64 p_Process; // rbx
  unsigned int v10; // ecx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = v1->AbEntrySummary;
  v4 = -1;
  if ( v1->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&WheaIpmiContextLock, (__int64)v1)) != 0 )
  {
    _BitScanForward((unsigned int *)&v5, AbEntrySummary);
    v1->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    _enable();
    v2 = (__int64)(&v1[1].Process + 12 * v5);
    if ( (unsigned __int64)&WheaIpmiContextLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)&WheaIpmiContextLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v2, (__int64)&WheaIpmiContextLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  WheapSelLogSetNtSchedulerAvailabilityNoLock();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&WheaIpmiContextLock);
  v8 = KeGetCurrentThread();
  if ( (unsigned __int64)&WheaIpmiContextLock - qword_140C50630 < 0x8000000000LL )
    v4 = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  _disable();
  p_Process = (__int64)&v8[1].Process;
  v10 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&WheaIpmiContextLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v4 )
  {
    ++v10;
    p_Process += 96LL;
    if ( v10 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_21:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, (ULONG_PTR)&WheaIpmiContextLock, v4, 0LL);
    _enable();
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v11 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v8->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v11 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v8, (__int64)&WheaIpmiContextLock, v11);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
