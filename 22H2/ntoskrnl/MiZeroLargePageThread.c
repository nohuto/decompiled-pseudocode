/*
 * XREFs of MiZeroLargePageThread @ 0x1403AEB30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D130 (ExpAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     MiWakeZeroingThreads @ 0x14027FA50 (MiWakeZeroingThreads.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     MiDecrementHugeContext @ 0x140397718 (MiDecrementHugeContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403AEE6C (MiSignalZeroingPassComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiDeleteZeroThreadContext @ 0x14054FB54 (MiDeleteZeroThreadContext.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroLargePageThread(_QWORD *P)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rbx
  unsigned __int8 v11; // r10
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  _QWORD *v14; // rdx
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  _QWORD *v22; // rbx
  _QWORD *v23; // r13
  unsigned __int8 v24; // r15
  volatile signed __int32 *v25; // rcx
  _DWORD *v26; // r9
  void *v27; // r8
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  KIRQL v45; // al
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  int v49; // eax
  _QWORD *v50; // rbx
  __int128 v52; // [rsp+30h] [rbp-38h] BYREF
  __int64 v53; // [rsp+40h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+40h]
  void *v56; // [rsp+B0h] [rbp+48h]
  __int64 v57; // [rsp+B8h] [rbp+50h]
  __int64 v58; // [rsp+C0h] [rbp+58h]
  __int64 v59; // [rsp+C8h] [rbp+60h]

  v1 = P[29];
  v53 = 0LL;
  v2 = *((unsigned int *)P + 66);
  v52 = 0LL;
  v4 = *(_QWORD *)(v1 + 72);
  v57 = v1;
  v59 = v4;
  v5 = 1;
  v6 = *(_QWORD *)(v1 + 144) + 40 * v2;
  v7 = *(_QWORD *)(v4 + 16) + 4544LL * *(unsigned int *)(v1 + 80);
  v58 = v7;
  KeWaitForSingleObject((PVOID)(v1 + 88), Executive, 0, 0, 0LL);
  while ( 1 )
  {
    MiZeroLargePages((unsigned __int64)P);
    if ( *(_BYTE *)(v4 + 6400) == 1 )
      return MiDeleteZeroThreadContext(P);
    if ( *((_BYTE *)P + 80) )
    {
      v10 = P[28];
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( v10 )
      {
        KeAcquireInStackQueuedSpinLock(
          (PKSPIN_LOCK)(qword_140C50D90 + 4544LL * *(unsigned int *)(v10 + 184) + 4304),
          &LockHandle);
        MiDecrementHugeContext((char *)v10, (__int64)P, v30, v31);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v15 = (v35 & SchedulerAssist[5]) == 0;
              v8 = (unsigned int)v35 & SchedulerAssist[5];
              SchedulerAssist[5] = v8;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        P[28] = 0LL;
      }
    }
    if ( v5 )
      MiSignalZeroingPassComplete(P);
    *(_QWORD *)&v52 = 0LL;
    *((_QWORD *)&v52 + 1) = v1 + 24;
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = (-1 << (v11 + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v8;
    }
    LOBYTE(v53) = v11;
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v36 = v13[6];
        v13[6] = v36 + 1;
        if ( v36 == -1 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v52, v1 + 24);
    }
    else
    {
      v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v1 + 24), (__int64)&v52);
      if ( v14 )
        KxWaitForLockOwnerShip((__int64)&v52, v14);
    }
    if ( v5 && !*(_BYTE *)(v1 + 132) )
    {
      *(_BYTE *)(v1 + 132) = 1;
      MiWakeZeroingThreads(v1, 5);
    }
    *(_BYTE *)(v6 + 4) &= ~2u;
    *(_BYTE *)(v6 + 4) |= 4u;
    if ( (*(_BYTE *)(v6 + 4) & 1) == 0 )
    {
      *(_BYTE *)(v6 + 4) |= 1u;
      v15 = (*(_DWORD *)(v1 + 164))-- == 1;
      if ( v15 )
        *(_BYTE *)(v7 + 4490) = 0;
    }
    v16 = P[30];
    P[30] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
      goto LABEL_19;
    }
    _m_prefetchw(&v52);
    v17 = v52;
    if ( (_QWORD)v52 )
      goto LABEL_40;
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v52 + 1), 0LL, (signed __int64)&v52) != &v52 )
    {
      v17 = KxWaitForLockChainValid((__int64 *)&v52, (__int64)v14, v8, (__int64)SchedulerAssist);
LABEL_40:
      *(_QWORD *)&v52 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
    }
LABEL_19:
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v37 = v19[6] - 1;
        v19[6] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    v20 = (unsigned __int8)v53;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          SchedulerAssist = v39->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
          v15 = (v40 & SchedulerAssist[5]) == 0;
          v8 = (unsigned int)v40 & SchedulerAssist[5];
          SchedulerAssist[5] = v8;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v20);
    if ( v16 )
    {
      v21 = *(_QWORD *)(v16 - 16);
      v22 = (_QWORD *)(v16 - 16);
      v23 = 0LL;
      v56 = 0LL;
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v8 = (-1 << (v24 + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v8;
      }
      v25 = (volatile signed __int32 *)(v21 + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, v24);
      else
        ExpAcquireSpinLockExclusive(v25, v24, v8, (__int64)SchedulerAssist);
      v15 = v22[1]-- == 1LL;
      if ( v15 )
      {
        v27 = v22;
        v56 = v22;
      }
      else
      {
        v27 = 0LL;
      }
      if ( (ULONG_PTR *)v21 != &MiSystemPartition )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v21 + 200));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && v24 <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << (v24 + 1));
              v15 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
        }
        __writecr8(v24);
        v45 = ExAcquireSpinLockExclusive(&dword_140C50E48);
        v27 = v56;
        v24 = v45;
      }
      if ( !--qword_140C50DA8 )
      {
        v23 = (_QWORD *)qword_140C50DD8;
        qword_140C50DD8 = 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C50E48, retaddr);
        v27 = v56;
      }
      else
      {
        dword_140C50E48 = 0;
      }
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v46 = v29[6] - 1;
          v29[6] = v46;
          if ( !v46 )
          {
            KiRemoveSystemWorkPriorityKick(v28);
            v27 = v56;
          }
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && v24 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v26 = v48->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << (v24 + 1));
            v15 = (v49 & v26[5]) == 0;
            v26[5] &= v49;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v48);
            v27 = v56;
          }
        }
      }
      __writecr8(v24);
      if ( v23 )
      {
        do
        {
          v50 = (_QWORD *)*v23;
          KeSignalGate((__int64)(v23 + 1), 1LL, (__int64)v27, v26);
          v23 = v50;
        }
        while ( v50 );
        v27 = v56;
      }
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      v7 = v58;
      v1 = v57;
    }
    v4 = v59;
    v5 = 0;
  }
}
