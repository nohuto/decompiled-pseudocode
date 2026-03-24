/*
 * XREFs of PopPepWork @ 0x140260D5C
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x140262C5C (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402610E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopPepStartActivity @ 0x140261288 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x140261C28 (PopPepGetReadyActivityType.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140262ACC (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r13d
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 *v7; // rdi
  __int64 v8; // rbx
  REGHANDLE v9; // rsi
  unsigned __int8 CurrentIrql; // r15
  int v11; // ebp
  __int64 v12; // rbx
  volatile LONG *v13; // rcx
  __int64 v14; // rax
  int v15; // r10d
  unsigned int v16; // eax
  __int64 v17; // r11
  int ReadyActivityType; // r9d
  char started; // si
  int v20; // r14d
  int v21; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // r11
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  int v31; // [rsp+44h] [rbp-64h]
  __int64 v33; // [rsp+58h] [rbp-50h] BYREF
  __int64 v34; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v31 = 0;
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  v7 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v7 = PopPepLastCheckedDevice;
  }
  v8 = v7[4];
  v33 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START) )
    {
      if ( v8 )
        v33 = *(_QWORD *)(v8 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v33;
      EtwWriteEx(v9, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
    v3 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = (-1LL << (CurrentIrql + 1)) & 4;
    v5 = (unsigned int)v4 | SchedulerAssist[5];
    SchedulerAssist[5] = v5;
  }
  v11 = 0;
  while ( 2 )
  {
    v12 = (__int64)v7;
    do
    {
      v34 = 0LL;
      v13 = (volatile LONG *)(v12 + 64);
      if ( v11 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v13);
        v23 = v3 + 1;
        if ( v11 != 2 )
          v23 = v3;
        v31 = v23;
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v13, v4, v5, SchedulerAssist) )
      {
        goto LABEL_20;
      }
      v14 = *(_QWORD *)(v12 + 32);
      if ( v14 )
        v34 = *(_QWORD *)(v14 + 48);
      v15 = *(_DWORD *)(v12 + 120);
      if ( v15 )
      {
        ReadyActivityType = PopPepGetReadyActivityType(v12 + 72, 0LL, 0LL);
        if ( ReadyActivityType != 6 )
        {
          started = PopPepStartActivity(v12, 0, (int)v12 + 72, ReadyActivityType, v12 + 120, a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
          v20 = 1;
          goto LABEL_28;
        }
      }
      v16 = *(_DWORD *)(v12 + 180);
      v2 = 0;
      if ( v16 )
      {
        v17 = v12 + 184;
        while ( !*(_DWORD *)(v17 + 104) )
        {
          ++v2;
          v17 += 200LL;
          if ( v2 >= v16 )
            goto LABEL_18;
        }
        v24 = PopPepGetReadyActivityType(v17 + 56, 1LL, 3LL);
        started = PopPepStartActivity(v12, v25, (int)v25 + 56, v24, v25 + 104, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
        v20 = 2;
        goto LABEL_28;
      }
LABEL_18:
      if ( v15 )
      {
        v21 = PopPepGetReadyActivityType(v12 + 72, 4LL, 5LL);
        started = PopPepStartActivity(v12, 0, (int)v12 + 72, v21, v12 + 120, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
        v20 = 3;
        goto LABEL_28;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
LABEL_20:
      v12 = *(_QWORD *)v12;
      if ( (__int64 *)v12 == &PopPepDeviceList )
        v12 = *(_QWORD *)v12;
      v3 = v31;
    }
    while ( (__int64 *)v12 != v7 );
    if ( (unsigned int)++v11 < 3 )
      continue;
    break;
  }
  started = 0;
  v20 = 0;
LABEL_28:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (__int64 *)v12 != v7 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(v34, v20, v2, v11, v31);
  return started;
}
