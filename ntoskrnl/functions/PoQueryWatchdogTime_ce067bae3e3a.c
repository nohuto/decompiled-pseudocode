BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rdi
  _QWORD *DeviceNode; // rbx
  unsigned __int8 CurrentIrql; // dl
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 *v9; // rcx
  unsigned __int64 v10; // rbx
  BOOLEAN result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // r10
  __int64 v14; // r15
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int64 UnbiasedInterruptTime; // rax
  BOOLEAN v33; // cl
  unsigned __int64 v34; // rdi
  signed __int32 v35[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v36; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v37 = 0LL;
  v2 = -1LL;
  v36 = 0LL;
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = &PopIrpLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  LOBYTE(v37) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v36, &PopIrpLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&PopIrpLock, (__int64)&v36) )
  {
    KxWaitForLockOwnerShip(&v36);
  }
  v6 = DeviceNode[33];
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v6 )
  {
    v14 = *(_QWORD *)(v6 + 72LL * *(char *)(v6 + 66) + 200);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 288));
    if ( *(_DWORD *)(v14 + 296) == 1 )
    {
      v16 = *(_QWORD *)(v14 + 48) + 10000000LL * (unsigned int)PopComputeWatchdogTimeout(v14);
      if ( v16 != -1 )
        v2 = v16;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v14 + 288));
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v15);
  }
  v7 = DeviceNode[35];
  if ( v7 )
  {
    v22 = *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200);
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 288));
    if ( *(_DWORD *)(v22 + 296) == 1 )
    {
      v24 = *(_QWORD *)(v22 + 48) + 10000000LL * (unsigned int)PopComputeWatchdogTimeout(v22);
      if ( v24 < v2 )
        v2 = v24;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v22 + 288));
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
        v21 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v23);
  }
  PopIrpLockThread = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v36, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v36);
  v8 = v36;
  if ( !(_QWORD)v36 )
  {
    v9 = &v36;
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v36 + 1), 0LL, (signed __int64)&v36) == &v36 )
      goto LABEL_12;
    v8 = KxWaitForLockChainValid(&v36);
  }
  *(_QWORD *)&v36 = 0LL;
  v9 = (__int128 *)*((_QWORD *)&v36 + 1);
  if ( (((unsigned __int8)v9 ^ (unsigned __int8)_InterlockedExchange64(
                                                  (volatile __int64 *)(v8 + 8),
                                                  *((__int64 *)&v36 + 1))) & 4) != 0 )
  {
    _InterlockedOr(v35, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v8 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_12:
  v10 = (unsigned __int8)v37;
  if ( KiIrqlFlags )
  {
    v9 = (__int128 *)KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)v9 <= 0xFu
      && (unsigned __int8)v37 <= 0xFu
      && (unsigned __int8)v9 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v9 = (__int128 *)((unsigned int)(unsigned __int8)v37 + 1);
      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
      v21 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(v10);
  if ( v2 == -1LL )
    return 0;
  LOBYTE(v9) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v9);
  if ( UnbiasedInterruptTime <= v2 )
  {
    v34 = v2 - UnbiasedInterruptTime;
    result = v33;
    *SecondsRemaining = v34 / 0x989680;
  }
  else
  {
    *SecondsRemaining = 0;
    return v33;
  }
  return result;
}
