/*
 * XREFs of PopPepWork @ 0x140305714
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x14030541C (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopPepStartActivity @ 0x1403072CC (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x140308330 (PopPepGetReadyActivityType.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140308828 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepWork(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r12d
  __int64 *v5; // rsi
  __int64 v6; // rbx
  REGHANDLE v7; // rdi
  unsigned __int8 CurrentIrql; // r14
  int v9; // r15d
  int v10; // r13d
  __int64 v11; // rbx
  int v12; // ebp
  volatile LONG *v13; // rcx
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // r10
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r11
  __int64 v20; // rbp
  char started; // bp
  int v22; // edi
  int v23; // eax
  int v24; // r11d
  int v26; // r12d
  int ReadyActivityType; // eax
  int v28; // eax
  int v29; // r10d
  _DWORD *SchedulerAssist; // r9
  __int64 v31; // rdx
  unsigned __int8 v32; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // eax
  bool v36; // zf
  int v37; // [rsp+44h] [rbp-74h]
  unsigned int v38; // [rsp+48h] [rbp-70h]
  int v39; // [rsp+4Ch] [rbp-6Ch]
  __int64 v41; // [rsp+60h] [rbp-58h] BYREF
  __int64 v42; // [rsp+68h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v38 = 0;
  v37 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = 0;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  v5 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v5 = PopPepLastCheckedDevice;
  }
  v6 = v5[4];
  v41 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START) )
    {
      if ( v6 )
        v41 = *(_QWORD *)(v6 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v41;
      EtwWriteEx(v7, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v31) = 4;
    else
      v31 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v31;
  }
  v9 = a1 & 1;
  v10 = 0;
  v39 = v9;
  while ( 2 )
  {
    v11 = (__int64)v5;
    do
    {
      v42 = 0LL;
      v12 = v4;
      if ( v9 )
      {
        if ( (*(_BYTE *)(v11 + 24) & 0x20) == 0 )
          goto LABEL_21;
      }
      else if ( (*(_BYTE *)(v11 + 24) & 0x20) != 0 )
      {
        goto LABEL_21;
      }
      v13 = (volatile LONG *)(v11 + 64);
      if ( v10 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v13);
        v26 = v4 + 1;
        if ( v10 != 2 )
          v26 = v12;
        v37 = v26;
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v13) )
      {
        goto LABEL_21;
      }
      v14 = *(_QWORD *)(v11 + 32);
      if ( v14 )
        v42 = *(_QWORD *)(v14 + 48);
      v15 = *(_DWORD *)(v11 + 120);
      v16 = v11 + 72;
      if ( v15 )
      {
        ReadyActivityType = PopPepGetReadyActivityType(v11 + 72, 0LL, 0LL);
        if ( ReadyActivityType != 6 )
        {
          started = PopPepStartActivity(v11, 0, v16, ReadyActivityType, v11 + 120, a2);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
          v22 = 1;
          goto LABEL_29;
        }
      }
      v17 = *(_DWORD *)(v11 + 180);
      v18 = 0;
      v38 = 0;
      if ( v17 )
      {
        v19 = v11 + 192;
        while ( 1 )
        {
          v20 = v19 + 104;
          if ( *(_DWORD *)(v19 + 104) )
            break;
          ++v18;
          v19 += 208LL;
          v38 = v18;
          if ( v18 >= v17 )
            goto LABEL_19;
        }
        v23 = PopPepGetReadyActivityType(v19 + 56, 1LL, 3LL);
        started = PopPepStartActivity(v11, v24, v24 + 56, v23, v20, a2);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
        v22 = 2;
        goto LABEL_29;
      }
LABEL_19:
      if ( v15 )
      {
        v28 = PopPepGetReadyActivityType(v16, 4LL, 5LL);
        started = PopPepStartActivity(v11, 0, v29, v28, v11 + 120, a2);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
        v22 = 3;
        goto LABEL_29;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
      v9 = v39;
      v4 = v37;
LABEL_21:
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == &PopPepDeviceList )
        v11 = *(_QWORD *)v11;
    }
    while ( (__int64 *)v11 != v5 );
    if ( (unsigned int)++v10 < 3 )
      continue;
    break;
  }
  started = 0;
  v22 = 0;
LABEL_29:
  if ( KiIrqlFlags )
  {
    v32 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = CurrentPrcb->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v36 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (__int64 *)v11 != v5 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(v42, v22, v38, v10, v37);
  return started;
}
