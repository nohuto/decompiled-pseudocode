/*
 * XREFs of ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x1C003CB58
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1C003CB40 (NdisAcquireReadWriteLock.c)
 *     NdisDprAcquireReadWriteLock @ 0x1C00A52C0 (NdisDprAcquireReadWriteLock.c)
 * Callees:
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C003CC20 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C00A502C (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00A509C (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00A5158 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisAcquireReadWriteLockX(struct _NDIS_RW_LOCK *a1, char a2, struct _LOCK_STATE *a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int16 v9; // si
  unsigned int *p_RefCount; // rdx

  if ( !a2 )
  {
    a3->LockState = 0;
    v9 = 2;
    if ( !a4 )
      a3->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        if ( !(unsigned int)ndisAcquireReadLockSharedRefCnt(&a1->SpinLock) )
        {
LABEL_26:
          a3->LockState = v9;
          return;
        }
LABEL_25:
        v9 = 3;
        goto LABEL_26;
      }
      p_RefCount = (unsigned int *)&a1->16 + KeGetPcr()->Prcb.Number;
    }
    else
    {
      p_RefCount = &a1->RefCount[KeGetPcr()->Prcb.Number].RefCount;
    }
    ndisAcquireReadLockPerCpuRefCnt(&a1->SpinLock, p_RefCount);
    goto LABEL_25;
  }
  a3->LockState = 1;
  if ( a1->Context == KeGetCurrentThread() )
  {
    a3->LockState = 2;
    return;
  }
  if ( ndisMaxNumberOfProcessors > 0x100 )
  {
    if ( !a4 )
      a3->OldIrql = KfRaiseIrql(2u);
    if ( !(unsigned int)ndisAcquireWriteLockSharedRefCnt(a1) )
    {
      a3->LockState = 5;
      return;
    }
    v9 = 4;
    goto LABEL_26;
  }
  if ( a4 )
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
  else
    a3->OldIrql = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  if ( ndisMaxNumberOfProcessors > 0x40 )
  {
    v7 = 4LL;
    v8 = 4 * v6;
  }
  else
  {
    v7 = 16LL;
    v8 = 16 * v6;
  }
  ndisAcquireWriteLockPerCpuRefCnt(a1, (unsigned int *)((char *)&a1->16 + v8), v7);
  a3->LockState = 4;
  a1->Context = KeGetCurrentThread();
}
