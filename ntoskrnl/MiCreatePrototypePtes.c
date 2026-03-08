/*
 * XREFs of MiCreatePrototypePtes @ 0x14036862C
 * Callers:
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiGetCommittedPages @ 0x14034C3F0 (MiGetCommittedPages.c)
 *     MiControlAreaRequiresCharge @ 0x14034C4DC (MiControlAreaRequiresCharge.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x1407F3F04 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x140A30984 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r13
  ULONG_PTR v6; // r15
  void *v7; // r14
  char v8; // cl
  BOOL v9; // r12d
  unsigned int v10; // ebp
  __int64 CommittedPages; // r12
  int v12; // edi
  volatile LONG *v13; // r14
  unsigned __int64 v14; // rsi
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // r8
  int v18; // r13d
  int SubsectionCharges; // edi
  int v20; // r15d
  bool v21; // zf
  int v22; // ebp
  unsigned int v23; // esi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  struct _KTHREAD *v28; // rbp
  __int64 v29; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v31; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v35; // rbp
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int8 v55; // cl
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  int v63; // [rsp+30h] [rbp-78h]
  int v64; // [rsp+34h] [rbp-74h]
  int v65; // [rsp+38h] [rbp-70h]
  __int64 v66; // [rsp+40h] [rbp-68h]
  PVOID Pool; // [rsp+48h] [rbp-60h]
  unsigned int v68; // [rsp+50h] [rbp-58h]
  int v69; // [rsp+54h] [rbp-54h]
  __int16 v70; // [rsp+58h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-48h]
  unsigned int v74; // [rsp+C8h] [rbp+20h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = BugCheckParameter2;
  v63 = 0;
  v65 = 0;
  CurrentThread = KeGetCurrentThread();
  v66 = *(_QWORD *)BugCheckParameter2;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  v7 = Pool;
  if ( Pool )
  {
    v8 = *(_BYTE *)(v5 + 62);
    v9 = *(_QWORD *)(v5 + 64) != 0LL;
    v74 = v9;
    if ( (a2 & 0x400) != 0 && (v8 & 0xC) != 0 )
    {
      if ( (v8 & 0xC) == 8 )
      {
        SubsectionCharges = -1073741811;
LABEL_65:
        ExFreePoolWithTag(v7, 0);
        return (unsigned int)SubsectionCharges;
      }
      if ( !(unsigned int)MiChargeLargeProtoSubsection(v6, 1LL) )
      {
        SubsectionCharges = -1073741670;
        goto LABEL_65;
      }
      v63 = 1;
    }
    v10 = a2 | 4;
    if ( (*(_BYTE *)(v5 + 62) & 0xC) != 4 )
      v10 = a2;
    v70 = v10;
    MiInitializePrototypePtes((ULONG_PTR)Pool);
    if ( v9 )
      CommittedPages = a3;
    else
      CommittedPages = MiGetCommittedPages((_QWORD *)v5);
    if ( (v10 & 4) != 0 )
    {
      v12 = 1;
      v64 = 1;
    }
    else
    {
      if ( (v10 & 0x80u) != 0 )
        v25 = 3LL;
      else
        v25 = (v10 >> 7) & 2;
      v64 = MiControlAreaRequiresCharge(v5, v25);
      v12 = v64;
      if ( !v64 )
      {
        CommittedPages = 0LL;
        SubsectionCharges = -1073740277;
LABEL_64:
        v22 = v63;
LABEL_27:
        v23 = v74;
        if ( !v74 && v65 )
        {
          v26 = *(_QWORD *)v5;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v5 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v26 + 40));
          KeAbPostRelease(v26 + 40);
          v21 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v21
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v23 = 0;
        }
        if ( v22 )
          MiChargeLargeProtoSubsection(v6, 0LL);
        if ( CommittedPages )
          MiReturnCrossPartitionSectionCharges(
            *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
            v23,
            CommittedPages);
        if ( !v7 )
          return (unsigned int)SubsectionCharges;
        goto LABEL_65;
      }
    }
    v69 = v10 & 0x180;
    v65 = 0;
    if ( v12 == 2 )
      goto LABEL_81;
    CommittedPages = 0LL;
    v65 = 0;
    while ( 1 )
    {
      if ( !v74 )
      {
        v27 = 0LL;
        v65 = 1;
        --CurrentThread->SpecialApcDisable;
        v28 = KeGetCurrentThread();
        v29 = *(_QWORD *)v5 + 40LL;
        _disable();
        AbEntrySummary = v28->AbEntrySummary;
        if ( v28->AbEntrySummary
          || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(*(_QWORD *)v5 + 40LL, (__int64)v28)) != 0 )
        {
          _BitScanForward(&v31, AbEntrySummary);
          v68 = v31;
          v28->AbEntrySummary = AbEntrySummary & ~(1 << v31);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v36 = *SchedulerAssist;
            do
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange(SchedulerAssist, v36 & 0xFFDFFFFF, v36);
            }
            while ( v37 != v36 );
            if ( (v36 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
          v27 = (__int64)(&v28[1].Process + 12 * v68);
          if ( (unsigned __int64)(v29 - qword_140C65668) < 0x8000000000LL )
            SessionId = MmGetSessionIdEx((__int64)v28->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v27 + 8) = SessionId;
          *(_QWORD *)v27 = v29 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v29, v27, v29);
        if ( v27 )
          *(_BYTE *)(v27 + 18) = 1;
        v12 = v64;
      }
      v13 = (volatile LONG *)(v5 + 72);
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v12 != 2 )
        break;
      v38 = v74;
      v39 = v74 ? *(_DWORD *)(v6 + 44) - (*(_DWORD *)(v6 + 52) & 0x3FFFFFFFu) : MiGetCommittedPages((_QWORD *)v5);
      if ( CommittedPages == v39 )
        break;
      v40 = (unsigned int)CommittedPages;
      if ( v38 )
        CommittedPages = *(_DWORD *)(v6 + 44) - (*(_DWORD *)(v6 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v5);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v21 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(v14);
      v45 = v74;
      if ( !v74 )
      {
        v46 = *(_QWORD *)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v5 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 40));
        KeAbPostRelease(v46 + 40);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v21
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v12 = v64;
        v45 = 0LL;
        v65 = 0;
      }
      if ( (_DWORD)v40 )
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
          v45,
          v40);
LABEL_81:
      if ( CommittedPages )
      {
        SubsectionCharges = MiGetSubsectionCharges(v6, CommittedPages);
        if ( SubsectionCharges < 0 )
        {
          CommittedPages = 0LL;
          goto LABEL_63;
        }
        v12 = v64;
      }
    }
    v15 = v69 | 0x20;
    if ( v12 == 2 )
      v15 = v69 | 0x28;
    v16 = MiIncrementSubsectionViewCount((_QWORD *)v6, v15);
    v18 = v16;
    if ( v16 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v13);
      if ( KiIrqlFlags )
      {
        v47 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v21 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
      __writecr8(v14);
      SubsectionCharges = -1073741670;
      goto LABEL_62;
    }
    SubsectionCharges = 0;
    v20 = 0;
    if ( v16 == 3 )
      CommittedPages = 0LL;
    if ( (*(_BYTE *)(v66 + 62) & 0xC) != 0 )
    {
      v20 = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(v13);
      if ( KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v21 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
      __writecr8(v14);
      SubsectionCharges = MiAllocateFileExtents(BugCheckParameter2, (v70 & 0x400 | 0x50u) >> 4, -1);
      if ( SubsectionCharges < 0 )
      {
        v6 = BugCheckParameter2;
        goto LABEL_62;
      }
      if ( (*(_BYTE *)(v66 + 62) & 0xC) == 4 )
        return (unsigned int)SubsectionCharges;
      SubsectionCharges = 0;
      LOBYTE(v14) = ExAcquireSpinLockExclusive(v13);
    }
    if ( v74 )
      *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    v21 = v20 == 0;
    v6 = BugCheckParameter2;
    if ( !v21 || !*(_QWORD *)(BugCheckParameter2 + 8) )
    {
      v5 = v66;
      if ( (*(_BYTE *)(v66 + 62) & 0xC) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 8) = Pool;
        MiUpdateSystemProtoPtesTree(BugCheckParameter2 + ((unsigned __int64)v74 << 6) + 56, 1LL);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v13);
      if ( KiIrqlFlags )
      {
        v59 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v59 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v21 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
      __writecr8((unsigned __int8)v14);
      v7 = 0LL;
      v22 = 0;
      goto LABEL_27;
    }
    SubsectionCharges = -1073741302;
    if ( v64 == 2 )
      v15 |= 0x10u;
    v35 = MiDecrementSubsectionViewCount((_QWORD *)BugCheckParameter2, v15, v17);
    ExReleaseSpinLockExclusiveFromDpcLevel(v13);
    if ( KiIrqlFlags )
    {
      v55 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v21 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    __writecr8((unsigned __int8)v14);
    if ( v18 == 3 )
      CommittedPages = v35;
LABEL_62:
    v5 = v66;
LABEL_63:
    v7 = Pool;
    goto LABEL_64;
  }
  return 3221225626LL;
}
