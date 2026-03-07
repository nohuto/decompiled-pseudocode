void MiSendParkedCoreUpdateToAllChildPartitions()
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v1; // rdi
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int SessionId; // eax
  bool v11; // zf
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8
  unsigned int v21; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v1 = KeGetCurrentThread();
    v2 = 0LL;
    _disable();
    AbEntrySummary = v1->AbEntrySummary;
    if ( v1->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C67008, (__int64)v1)) != 0 )
    {
      _BitScanForward(&v4, AbEntrySummary);
      v21 = v4;
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
      v2 = (__int64)(&v1[1].Process + 12 * v21);
      if ( (unsigned __int64)&qword_140C67008 - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = (unsigned __int64)&qword_140C67008 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C67008, v2, (__int64)&qword_140C67008);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiMoveBackgroundZeroThreads, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
    KeAbPostRelease((ULONG_PTR)&qword_140C67008);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v12 = ExAcquireSpinLockExclusive(&dword_140C66840);
    if ( stru_140C66950.Parameter == (void *)1 )
      break;
    stru_140C66950.Parameter = (void *)1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66840);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
    __writecr8(v12);
  }
  stru_140C66950.Parameter = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66840);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v20 = v18->SchedulerAssist;
      v11 = (v19 & v20[5]) == 0;
      v20[5] &= v19;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
  }
  __writecr8(v12);
}
