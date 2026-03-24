/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x1403296D0
 * Callers:
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReleaseByteRangeFromWrite @ 0x14027476C (CcReleaseByteRangeFromWrite.c)
 *     CcDecrementOpenCount @ 0x1402937BC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x1402B31A0 (MmGetControlAreaPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcIsFatalWriteError @ 0x14031B100 (CcIsFatalWriteError.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404EA230 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  NTSTATUS v7; // r12d
  char v9; // r15
  __int64 Partition; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = (unsigned int)a3;
  v7 = (int)a4;
  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = CcGetPartition((_QWORD *)v4, a2, a3, a4);
  if ( Partition != *(_QWORD *)(MmGetControlAreaPartition(a1, v11, v12, v13) + 8) )
    KeBugCheckEx(0x34u, 0x12F9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( v7 < 0 )
    v9 = !CcIsFatalWriteError(v4, v7);
  v14 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v14 )
  {
    if ( a2 > v14 )
      goto LABEL_7;
    LODWORD(v6) = v14 - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v21, v6, 0LL, v9);
LABEL_7:
  if ( *(_QWORD *)(Partition + 784) != Partition + 784 )
    CcPostDeferredWrites(Partition);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  --*(_DWORD *)(v4 + 516);
  CcDecrementOpenCount(v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
