/*
 * XREFs of MiRemoveBadPages @ 0x140628020
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnBadPagesToBadList @ 0x14062878C (MiReturnBadPagesToBadList.c)
 *     MiSetPfnRemovalRequested @ 0x14064B908 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14064BA18 (MiUnlinkPageFromBadList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemoveBadPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v6; // r12
  unsigned int v7; // esi
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD *v11; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int SessionId; // eax
  const signed __int64 *v19; // r13
  PVOID Pool; // r14
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  int v35; // eax
  _DWORD *v36; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  _DWORD *v40; // r8
  struct _KTHREAD *v41; // [rsp+20h] [rbp-58h]
  unsigned int v44; // [rsp+98h] [rbp+20h]

  v3 = a2;
  if ( (MiFlags & 0x10000000) == 0 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v41 = CurrentThread;
  v7 = 0;
  v8 = 6 * a2;
  --CurrentThread->SpecialApcDisable;
  v9 = 48 * a2 - 0x220000000000LL;
  v10 = 0LL;
  v11 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v11->AbEntrySummary;
  if ( v11->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v11)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v44 = v13;
    v11->AbEntrySummary = AbEntrySummary & ~(1 << v13);
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v10 = (__int64)(&v11[1].Process + 12 * v44);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
    *(_DWORD *)(v10 + 8) = SessionId;
    *(_QWORD *)v10 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v10, (__int64)&qword_140C6B198);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  if ( a3 )
  {
    v19 = (const signed __int64 *)(8 * v8 - 0x21FFFFFFFFD8LL);
    while ( 1 )
    {
      if ( v3 > qword_140C65820 || !_bittest64(v19, 0x36u) )
        goto LABEL_63;
      Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
      v21 = MiLockPageInline(v9);
      v22 = *(_QWORD *)(v9 + 40);
      v23 = v21;
      if ( (v22 & 0x20000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
            v40 = v38->SchedulerAssist;
            v28 = (v39 & v40[5]) == 0;
            v40[5] &= v39;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v38);
          }
        }
        __writecr8(v23);
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
LABEL_63:
        v7 = -1073741585;
        goto LABEL_64;
      }
      if ( *(_QWORD *)(qword_140C67048 + 8 * ((v22 >> 43) & 0x3FF)) != a1 )
        break;
      if ( !MiIsPageOnBadList(v9) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
            v32 = v30->SchedulerAssist;
            v28 = (v31 & v32[5]) == 0;
            v32[5] &= v31;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v30);
          }
        }
        __writecr8(v23);
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
        v7 = -1073740682;
        goto LABEL_64;
      }
      MiUnlinkPageFromBadList(v9, 0LL);
      MiSetPfnRemovalRequested(v9, 1LL, 0LL);
      *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
          v28 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick((__int64)v25);
        }
      }
      __writecr8(v23);
      ++v6;
      ++v3;
      v19 += 6;
      v9 += 48LL;
      if ( v6 >= a3 )
      {
        CurrentThread = v41;
        goto LABEL_67;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
        v36 = v34->SchedulerAssist;
        v28 = (v35 & v36[5]) == 0;
        v36[5] &= v35;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick((__int64)v34);
      }
    }
    __writecr8(v23);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    v7 = -1073740277;
LABEL_64:
    if ( v6 )
      MiReturnBadPagesToBadList(v3 - v6, v6);
    CurrentThread = v41;
  }
LABEL_67:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
  KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
  v28 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v7;
}
