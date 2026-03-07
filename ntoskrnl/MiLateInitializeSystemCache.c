__int64 __fastcall MiLateInitializeSystemCache(__int64 a1)
{
  ULONG_PTR v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v4; // rbp
  __int64 v5; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int64 OldIrql; // rbp
  char v12; // bl
  bool v14; // zf
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+8h]

  v1 = a1 + 2080;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  AbEntrySummary = v4->AbEntrySummary;
  if ( v4->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v1, (__int64)v4)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v22 = v7;
    v4->AbEntrySummary = AbEntrySummary & ~(1 << v7);
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
    v5 = (__int64)(&v4[1].Process + 12 * v22);
    if ( v1 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v1 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v1, v5, v1);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  if ( *(_BYTE *)(a1 + 17052) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease(v1);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v14 )
      return 1LL;
    v14 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
    goto LABEL_18;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
    KeAcquireInStackQueuedSpinLock(qword_140C66D30, &LockHandle);
    *(_BYTE *)(a1 + 17052) = 1;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(OldIrql);
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease(v1);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v14 )
      return 1LL;
    v14 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
LABEL_18:
    if ( !v14 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease(v1);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
