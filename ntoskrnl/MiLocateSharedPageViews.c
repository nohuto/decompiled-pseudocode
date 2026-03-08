/*
 * XREFs of MiLocateSharedPageViews @ 0x1406340C0
 * Callers:
 *     MmQueryBadAddresses @ 0x140A2D108 (MmQueryBadAddresses.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140212BE4 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiTrimSection @ 0x1402A0034 (MiTrimSection.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiPreventControlAreaDeletion @ 0x1403A10A8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x1403A118C (MiDecrementSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReferencePfBackedSection @ 0x140667510 (MiReferencePfBackedSection.c)
 *     MiDeleteTrimViewInfoList @ 0x14085BDD4 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLocateSharedPageViews(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  struct _KTHREAD *v7; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int SessionId; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r11
  _DWORD *v20; // r9
  int v21; // edx
  __int64 v22; // rcx
  bool v23; // zf
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  PVOID Pool; // rax
  void *v31; // rdi
  __int64 Process; // rcx
  int v34; // eax
  __int64 v35; // r12
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  __int64 v40; // r14
  __int64 v41; // r14
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  __int64 *v50; // rax
  int v51; // ebx
  _QWORD *v52; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  _QWORD v57[5]; // [rsp+28h] [rbp-40h] BYREF
  int v58; // [rsp+50h] [rbp-18h]
  int v59; // [rsp+54h] [rbp-14h]
  unsigned int v60; // [rsp+B0h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+50h] BYREF
  __int64 *v62; // [rsp+C8h] [rbp+60h] BYREF

  v59 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 48 * a1 - 0x220000000000LL;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v7->AbEntrySummary;
  if ( v7->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v7)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v60 = v9;
    v7->AbEntrySummary = AbEntrySummary & ~(1 << v9);
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
    v6 = (__int64)(&v7[1].Process + 12 * v60);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v6, (__int64)&qword_140C6B198);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  if ( a1 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) == 17;
    goto LABEL_113;
  }
  v15 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
  if ( MiIsPageOnBadList(48 * a1 - 0x220000000000LL)
    || (*(_BYTE *)(v5 + 35) & 0x40) == 0
    || (v16 = *(_QWORD *)(v5 + 40), v16 >= 0)
    || (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_32;
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_32;
    if ( CurrentIrql > 0xFu )
      goto LABEL_32;
    if ( (unsigned __int8)v15 > 0xFu )
      goto LABEL_32;
    if ( CurrentIrql < 2u )
      goto LABEL_32;
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
    v23 = (v56 & v55[5]) == 0;
    v55[5] &= v56;
    if ( !v23 )
      goto LABEL_32;
    v22 = (__int64)v54;
    goto LABEL_31;
  }
  v17 = *(_QWORD *)(v5 + 8);
  if ( (v16 & 0x10000000000LL) == 0 && v17 >= 0 && v17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_32;
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_32;
    if ( v18 > 0xFu )
      goto LABEL_32;
    if ( (unsigned __int8)v15 > 0xFu )
      goto LABEL_32;
    if ( v18 < 2u )
      goto LABEL_32;
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
    v23 = (v21 & v20[5]) == 0;
    v20[5] &= v21;
    if ( !v23 )
      goto LABEL_32;
    v22 = (__int64)v19;
LABEL_31:
    KiRemoveSystemWorkPriorityKick(v22);
LABEL_32:
    __writecr8(v15);
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) == 17;
LABEL_113:
    if ( !v23 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221226548LL;
  }
  v24 = v17 | 0x8000000000000000uLL;
  if ( v24 == qword_140C656A8 )
  {
    v25 = 2147352576LL;
LABEL_37:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v23 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)v27);
      }
    }
    __writecr8(v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    Pool = MiAllocatePool(64, 0x30uLL, 0x6156694Du);
    v31 = Pool;
    if ( !Pool )
      return 3221225626LL;
    *((_QWORD *)Pool + 2) = v25;
    *((_QWORD *)Pool + 3) = v25 + 4096;
    Process = (__int64)CurrentThread->ApcState.Process;
    *((_QWORD *)Pool + 1) = Process;
    *((_QWORD *)Pool + 4) = 0LL;
    *((_DWORD *)Pool + 10) = 0;
    *((_DWORD *)Pool + 11) = 1;
    if ( ObReferenceObjectSafeWithTag(Process) )
      return 0LL;
    ExFreePoolWithTag(v31, 0);
    return 3221225738LL;
  }
  if ( v24 == qword_140C656B0 )
  {
    v25 = qword_140C656B8;
    if ( qword_140C656B8 )
      goto LABEL_37;
  }
  v34 = *(_DWORD *)(v5 + 16);
  v62 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (v34 & 0x400) != 0 )
  {
    v35 = MiPreventControlAreaDeletion(v5, &BugCheckParameter2, &v62);
    if ( !v35 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v23 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
      __writecr8(v15);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
      KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
      v23 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v23
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225497LL;
    }
    v40 = *(_QWORD *)(v5 + 16);
    if ( qword_140C657C0 && (v40 & 0x10) == 0 )
      v40 &= ~qword_140C657C0;
    v41 = v40 >> 16;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v23 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)v43);
      }
    }
    __writecr8(v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v46 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v23 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
    }
    __writecr8(v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v50 = (__int64 *)MiReferencePfBackedSection(v24);
    v41 = (__int64)v50;
    if ( !v50 )
      return 3221225497LL;
    v35 = *v50;
  }
  v57[0] = v35;
  v57[1] = v24;
  v57[2] = v24;
  v57[3] = v41;
  v57[4] = v41;
  v58 = 0;
  v51 = MiTrimSection(v57, a2, 1, 0);
  if ( BugCheckParameter2 )
    MiDecrementSubsection((__int64 *)BugCheckParameter2);
  v52 = (_QWORD *)MiDecrementModifiedWriteCount(v35, 0);
  if ( v52 )
    MiReleaseControlAreaWaiters(v52);
  if ( v51 < 0 )
    MiDeleteTrimViewInfoList(*(PVOID *)(a2 + 8));
  return (unsigned int)v51;
}
