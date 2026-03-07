__int64 __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  bool v5; // r15
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 v10; // r14
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 600);
  v10 = *(_QWORD *)(v4 + 536);
  v11 = (_QWORD *)(v8 + 1104);
  if ( !CcEnablePerVolumeLazyWriter )
    v11 = (_QWORD *)(v10 + 1168);
  if ( v10 != *(_QWORD *)(MmGetControlAreaPartition(a1) + 8) )
    KeBugCheckEx(0x34u, 0x14B8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 < 0 )
    v5 = (unsigned __int8)CcIsFatalWriteError(v4) == 0;
  v12 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v12 )
  {
    if ( a2 > v12 )
      goto LABEL_9;
    LODWORD(v6) = v12 - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v22, (unsigned int)v6, 0LL, v5);
LABEL_9:
  if ( (_QWORD *)*v11 != v11 )
    CcPostDeferredWrites(v10, v8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 768), &LockHandle);
  --*(_DWORD *)(v4 + 524);
  CcDecrementOpenCount(v4, v13, v14, v15);
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v20 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
