__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v12; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int SessionId; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1 & 1;
  if ( (a1 & 1) != 0 )
    v5 = qword_140C695B8 - qword_140C695A8;
  else
    v5 = MiState[0] - qword_140C65108;
  v6 = v5 << 12;
  v7 = 0;
  if ( a3 == 16 )
    v8 = a2 + 0x80000;
  else
    v8 = a2 + 0x200000;
  if ( v8 <= v6 )
  {
    if ( v4 )
    {
      v10 = qword_140C6F0C8 - qword_140C6F568;
      if ( qword_140C6F568 > (unsigned __int64)qword_140C6F0C8 )
        v10 = 0LL;
      if ( (a2 >> 12) + ((a2 & 0xFFF) != 0) > v10 )
      {
        MiIssuePageExtendRequest(&MiSystemPartition, (a2 >> 12) + ((a2 & 0xFFF) != 0), 2LL);
        goto LABEL_15;
      }
    }
    if ( a2 + 10485760 < v6 || qword_140C6F350 < 0x40000 )
      return 1LL;
    v7 = 1;
  }
  if ( v4 )
  {
LABEL_15:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v12->AbEntrySummary;
    if ( v12->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&qword_140C69598, v12)) != 0 )
    {
      _BitScanForward(&v14, AbEntrySummary);
      v28 = v14;
      v12->AbEntrySummary = AbEntrySummary & ~(1 << v14);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v3 = (__int64)(&v12[1].Process + 12 * v28);
      if ( (unsigned __int64)&qword_140C69598 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v12->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v3 + 8) = SessionId;
      *(_QWORD *)v3 = (unsigned __int64)&qword_140C69598 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69598, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C69598, v3, (__int64)&qword_140C69598);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    if ( !qword_140C6B1D0->Header.SignalState )
      KePulseEvent(qword_140C6B1D0, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69598, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69598);
    KeAbPostRelease((ULONG_PTR)&qword_140C69598);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v26 )
    {
      v21 = (unsigned __int64)&CurrentThread->152;
      if ( *(_QWORD *)v21 != v21 )
        KiCheckForKernelApcDelivery();
    }
    goto LABEL_50;
  }
  KeAcquireInStackQueuedSpinLock(&qword_140C6EEC0, &LockHandle);
  if ( !qword_140C6B1E0->Header.SignalState )
    KePulseEvent(qword_140C6B1E0, 0, 0);
  KxReleaseQueuedSpinLock(&LockHandle);
  v21 = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v21 = (unsigned int)LockHandle.OldIrql + 1;
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v26 = ((unsigned int)v20 & v25[5]) == 0;
      v25[5] &= v20;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  __writecr8(OldIrql);
LABEL_50:
  MiFreeExcessSegments(v21, v20);
  return v7;
}
