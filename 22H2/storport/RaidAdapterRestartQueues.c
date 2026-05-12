/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C0013F04
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00127AC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002B740 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C002E680 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F96C (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C00308B0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0032770 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DC8 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortAdapterActiveCondition @ 0x1C00402B0 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C00078C8 (RaidRestartIoQueue.c)
 *     RaidZeroXrb @ 0x1C000AF90 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000B080 (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0034B9C (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004DC38 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C004DF34 (RaFreeIoResource.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 *v5; // rdi
  char v6; // r14
  __int64 v7; // rdx
  PSLIST_ENTRY IoResource; // rsi
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  __int128 v22; // [rsp+70h] [rbp-10h]

  v2 = a1 + 832;
  memset(&v20, 0, sizeof(v20));
  v21 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    v5 = 0LL;
    v6 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(int *)(v2 + 280) > 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
      v6 = 1;
    }
    if ( *(_DWORD *)(v2 + 24) )
    {
      if ( *(_DWORD *)(v2 + 40) != 1 && *(int *)(v2 + 44) <= 0 )
      {
        IoResource = RaAllocateIoResource((PSLIST_HEADER)(v2 + 64));
        if ( IoResource )
          break;
        if ( *(_DWORD *)(v2 + 136) < *(_DWORD *)(v2 + 144) )
        {
          RaAttemptHighWaterMarkIncrease(v2);
          IoResource = RaAllocateIoResource((PSLIST_HEADER)(v2 + 64));
          if ( IoResource )
            break;
        }
      }
    }
    if ( !v6 )
      goto LABEL_31;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_27:
    if ( !v5 )
      goto LABEL_31;
    v17 = *(_QWORD *)(v5[8] + 32);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *, _QWORD))(v17 + 648))(
      *(_QWORD *)(v17 + 640),
      v5 - 15,
      &v21,
      0LL);
  }
  if ( !v6 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
  if ( *(_DWORD *)(v2 + 24) && *(int *)(v2 + 40) <= 0 && *(int *)(v2 + 44) <= 0 )
  {
    v10 = (_QWORD *)(v2 + 8);
    v5 = *(__int64 **)(v2 + 8);
    if ( v5[1] != v2 + 8 || (v11 = *v5, *(__int64 **)(*v5 + 8) != v5) )
LABEL_29:
      __fastfail(3u);
    *v10 = v11;
    *(_QWORD *)(v11 + 8) = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 192));
    v12 = *(_DWORD *)(v2 + 192);
    if ( v12 <= *(_DWORD *)(v2 + 36) )
      v12 = *(_DWORD *)(v2 + 36);
    --*(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 36) = v12;
    if ( (*((_BYTE *)v5 + 22) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v5, v7, v9);
      v14 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry )
        goto LABEL_29;
      v15 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v15 != QosEntryForDeviceEntry )
        goto LABEL_29;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
  {
    *((_QWORD *)&v22 + 1) = IoResource + 52;
    *(_QWORD *)&v22 = IoResource + 2;
    *((_QWORD *)&v21 + 1) = IoResource + 68;
    RaidZeroXrb(
      (__int64)&IoResource[2],
      v16,
      *((_DWORD *)&IoResource[48].Next + 2),
      *((void **)&IoResource[49].Next + 1));
    goto LABEL_27;
  }
  RaFreeIoResource(v2 + 64, IoResource);
LABEL_31:
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &v20);
  for ( i = *(_QWORD **)(a1 + 136); i != (_QWORD *)(a1 + 136); i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 7), 1);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&v20);
}
