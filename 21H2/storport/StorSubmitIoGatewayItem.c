/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C000AF34
 * Callers:
 *     RaidRestartIoQueue @ 0x1C0007938 (RaidRestartIoQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A70 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000B000 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000B0F0 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0034BBC (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004DC58 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, _QWORD *a3)
{
  int *v3; // rsi
  __int64 IoResource; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  PKSPIN_LOCK *v11; // rcx
  PKSPIN_LOCK *v12; // rcx
  PKSPIN_LOCK *QosEntryForDeviceEntry; // rax
  PKSPIN_LOCK v14; // rbx
  PKSPIN_LOCK *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (int *)(SpinLock + 5);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *((int *)SpinLock + 11) > 0 || *v3 > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *v3 > 0 )
    {
      v12 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v12 != SpinLock + 1 )
        goto LABEL_20;
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v12;
      *v12 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
LABEL_16:
      ++*((_DWORD *)SpinLock + 6);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
      {
LABEL_19:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return 1;
      }
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2, v9, v10);
      v14 = SpinLock + 33;
      v15 = (PKSPIN_LOCK *)v14[1];
      if ( *v15 == v14 )
      {
        *QosEntryForDeviceEntry = v14;
        QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v15;
        *v15 = (PKSPIN_LOCK)QosEntryForDeviceEntry;
        v14[1] = (KSPIN_LOCK)QosEntryForDeviceEntry;
        goto LABEL_19;
      }
LABEL_20:
      __fastfail(3u);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36)
      || (RaAttemptHighWaterMarkIncrease(SpinLock), (IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4)) == 0) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      v11 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v11 != SpinLock + 1 )
        goto LABEL_20;
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v11;
      *v11 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      *v3 = 1;
      goto LABEL_16;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  a3[3] = IoResource + 832;
  a3[2] = IoResource + 32;
  a3[1] = IoResource + 1088;
  RaidZeroXrb(IoResource + 32, IoResource, *(unsigned int *)(IoResource + 776), *(_QWORD *)(IoResource + 792));
  return 0;
}
