/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x1402925F4
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x140689FD8 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406F77CC (AlpcpSignalPortAndUnlock.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1409765B4 (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     AlpcpQueueIoCompletion @ 0x1402927FC (AlpcpQueueIoCompletion.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int32 __fastcall AlpcpQueueIoCompletionPort(_QWORD *a1, char a2, char a3, char a4, int a5)
{
  __int64 v5; // rdi
  char v8; // r14
  unsigned int v10; // edx
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  signed __int32 result; // eax
  unsigned __int64 OldIrql; // r13
  char v21; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  unsigned __int64 v26; // rdi
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  __int64 v29; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v5 = a1[6];
  v29 = a1[4];
  v8 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
  v10 = *(_DWORD *)(v5 + 12);
  if ( v10 >= *(_DWORD *)(v5 + 8) )
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
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !a4 || (v21 = 1, a3) )
      v21 = 0;
    result = AlpcpQueueIoCompletion(v29, a1[5], -(a2 != 0), 0, v21, a5);
    if ( !result )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
      if ( a2 )
        ++*(_DWORD *)(v5 + 20);
      else
        ++*(_DWORD *)(v5 + 16);
      result = KxReleaseQueuedSpinLock(&LockHandle);
      v26 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (result & v28[5]) == 0;
          v28[5] &= result;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      __writecr8(v26);
    }
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      return KeAbPostRelease((ULONG_PTR)(a1 + 44));
    }
  }
  else
  {
    v11 = *(_QWORD **)(v5 + 32);
    if ( v11 )
      *(_QWORD *)(v5 + 32) = *v11;
    v12 = v11[1];
    *(_DWORD *)(v5 + 12) = v10 + 1;
    KxReleaseQueuedSpinLock(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v15);
        v8 = a4;
      }
    }
    __writecr8(v13);
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      KeAbPostRelease((ULONG_PTR)(a1 + 44));
    }
    return AlpcpQueueIoCompletion(v29, a1[5], -(a2 != 0), v12, v8, a5);
  }
  return result;
}
