/*
 * XREFs of MiGetHugePageToZero @ 0x1402E41D8
 * Callers:
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     MiUnlinkNodeLargePages @ 0x14034EB80 (MiUnlinkNodeLargePages.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1403BA8F4 (MiGetUltraHugeAlreadyActive.c)
 *     MiGetHugeRangeFromNode @ 0x1403BF1C4 (MiGetHugeRangeFromNode.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 *     MiDecrementHugeContext @ 0x1403D0A68 (MiDecrementHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 PoolMm; // rax
  __int64 v13; // r14
  unsigned __int64 HugeRangeFromNode; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // r15d
  unsigned __int64 v18; // r14
  int v19; // ecx
  _QWORD *i; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a2 + 364) >> byte_140C6570D;
  v4 = 0;
  v6 = 25408LL * v3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_BYTE *)(a2 + 70) = 0;
    v7 = *(_QWORD *)(a1 + 16);
    if ( !*(_QWORD *)(a2 + 344) )
    {
      v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 168LL) + 32LL);
      if ( (_QWORD *)*v10 == v10 && !*(_QWORD *)(v6 + v7 + 8) )
      {
        if ( !*(_QWORD *)(a1 + 16216) )
          return 0LL;
        v19 = 0;
        if ( !MmNumberOfChannels )
          return 0LL;
        for ( i = (_QWORD *)(v6 + v7 + 22896); !*i; ++i )
        {
          if ( ++v19 >= (unsigned int)MmNumberOfChannels )
            return 0LL;
        }
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + v7 + 23024), &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(a2) )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = 1LL;
LABEL_6:
      __writecr8(OldIrql);
      return result;
    }
    v11 = v3;
    LODWORD(v11) = v3 | 0x80000000;
    PoolMm = ExAllocatePoolMm(64LL, 336LL, 1967679821LL, v11);
    v13 = PoolMm;
    if ( !PoolMm )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v30 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      result = 0LL;
      goto LABEL_6;
    }
    HugeRangeFromNode = MiGetHugeRangeFromNode(a1, v3, 0LL, PoolMm);
    if ( (HugeRangeFromNode & 0x3FFFFF) == 0 )
      break;
LABEL_17:
    *(_QWORD *)(v13 + 176) = HugeRangeFromNode;
    *(_DWORD *)(v13 + 320) = v3;
    v17 = MiInitializeNewUltraHugeContext(a2, v13);
    if ( v17 )
      MiDecrementHugeContext((PVOID)v13);
    KxReleaseQueuedSpinLock(&LockHandle);
    v18 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    __writecr8(v18);
    if ( v17 != 1 )
    {
      LOBYTE(v4) = v17 != 2;
      return v4;
    }
    v6 = 25408LL * v3;
  }
  v15 = MiUnlinkNodeLargePages(a1, 0, 0, 1, v3, 4, 1, 512, v13);
  if ( v15 )
  {
    HugeRangeFromNode = 0xAAAAAAAAAAAAAAABuLL * ((v15 + 0x220000000000LL) >> 4);
    goto LABEL_17;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v25 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v16);
  ExFreePoolWithTag((PVOID)v13, 0);
  return 0LL;
}
