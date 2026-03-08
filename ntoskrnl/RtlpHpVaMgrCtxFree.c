/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x14030BD10
 * Callers:
 *     RtlpHpFreeVA @ 0x14020DC8C (RtlpHpFreeVA.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14020DD14 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVaMgrFree @ 0x1402F12D4 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1402F95FC (RtlpHpVaMgrRangeSplit.c)
 *     RtlSparseArrayElementAllocated @ 0x14030967C (RtlSparseArrayElementAllocated.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpVaMgrRangeFree @ 0x14030C074 (RtlpHpVaMgrRangeFree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405B4B40 (RtlSparseArrayElementFindCapped.c)
 */

char __fastcall RtlpHpVaMgrCtxFree(__int64 a1, ULONG_PTR *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rsi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v10; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // rax
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  bool v17; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (unsigned __int64)v7;
  if ( v7 )
  {
    v9 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
    if ( (*v7 & 4) != 0 )
    {
      *v7 &= ~1u;
LABEL_4:
      LOBYTE(v10) = RtlpHpVaMgrRangeFree(v9, v8);
      return (char)v10;
    }
    v11 = *(_BYTE *)(v9 + 46);
    if ( (v11 & 0xEu) < 4 || (v11 & 0xEu) >= 0xA )
    {
      MmFreePoolMemory(a2, a3);
      v11 = *(_BYTE *)(v9 + 46);
    }
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v14 = v8;
      do
        v8 -= 32LL;
      while ( (*(_BYTE *)v8 & 2) != 0 );
      v11 = *(_BYTE *)(v9 + 46);
    }
    else
    {
      if ( ((v11 >> 5) & (unsigned __int8)~(*(_BYTE *)v8 >> 2) & 1) == 0 )
      {
        v12 = (*(_BYTE *)v8 & 4) != 0 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
        if ( v6 != v12 )
          __int2c();
      }
      if ( (*(_BYTE *)v8 & 4) != 0 )
        v13 = *(_QWORD *)(v8 + 24);
      else
        v13 = *(unsigned __int16 *)(v8 + 24);
      if ( v6 < v13 )
        v14 = v8 + 32 * v6;
      else
        v14 = 0LL;
    }
    v15 = RtlpHpAcquireLockExclusive((volatile LONG *)v9, v11 & 1);
    if ( v14 )
      RtlpHpVaMgrRangeSplit(v9, v8, (__int64)(v14 - v8) >> 5);
    v8 = RtlpHpVaMgrFree(v9);
    if ( (*(_BYTE *)(v9 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9);
      LOBYTE(v10) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v17 = ((unsigned int)v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)v10;
          if ( v17 )
            LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v15);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
      LOBYTE(v10) = KeAbPostRelease(v9);
      CurrentThread = KeGetCurrentThread();
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17 )
      {
        v10 = &CurrentThread->152;
        if ( ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != v10 )
          LOBYTE(v10) = KiCheckForKernelApcDelivery();
      }
    }
    if ( v8 )
      goto LABEL_4;
  }
  else
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    LOBYTE(v10) = RtlpHpEnvFreeVA(a2, a3, 0x8000);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
  }
  return (char)v10;
}
