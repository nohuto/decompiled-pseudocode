/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x140393C70
 * Callers:
 *     HalpInterruptInitPowerManagement @ 0x1403930CC (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403931E8 (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14039826C (HalpDmaInitPowerManagement.c)
 *     DifPoFxStartDevicePowerManagementWrapper @ 0x1405E7BF0 (DifPoFxStartDevicePowerManagementWrapper.c)
 *     PoFxEnableDStateReporting @ 0x140981710 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140B5E498 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PoFxActivateComponent @ 0x140305CE0 (PoFxActivateComponent.c)
 *     PoFxIdleComponent @ 0x140306A10 (PoFxIdleComponent.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxReinitializeAccountingInstance @ 0x140393EC4 (PopFxReinitializeAccountingInstance.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140588194 (PopFxIncrementDeviceSleepCount.c)
 *     PopPepInitializeVetoMasks @ 0x14059CE34 (PopPepInitializeVetoMasks.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140837CD4 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

char __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 v2; // rbp
  unsigned int i; // r14d
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  KIRQL v10; // al
  unsigned int v11; // edx
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // r15
  unsigned int j; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v17; // bl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( !PopFxBasicAccountingDisabled )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 828); ++i )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * i) + 200LL;
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
      if ( !PopFxBasicAccountingDisabled )
      {
        PopFxReinitializeAccountingInstance(v5, 1LL);
        *(_QWORD *)(v5 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v5 + 8) = 1;
      }
      KxReleaseSpinLock((volatile signed __int64 *)v5);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v6);
    }
  }
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 64));
  *(_DWORD *)(v7 + 172) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  if ( KiIrqlFlags )
  {
    v24 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v24 >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v23 = (v27 & v26[5]) == 0;
      v26[5] &= v27;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  __writecr8(v8);
  if ( PopPepPlatformState )
    PopPepInitializeVetoMasks(v7, *(unsigned int *)PpmPlatformStates);
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v9 )
  {
    v33 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v9 + 96))(18LL, &v33);
  }
  if ( v2 )
  {
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
    v11 = *(_DWORD *)(v2 + 120);
    v12 = v10;
    if ( (*(_DWORD *)(BugCheckParameter2 + 824) & 1) != 0 )
    {
      if ( v11 )
        *(_DWORD *)(v2 + 120) = 0;
    }
    else if ( v11 )
    {
      v13 = *(_DWORD *)(BugCheckParameter2 + 828);
      v14 = v11;
      do
      {
        for ( j = 0; j < v13; ++j )
        {
          PoFxActivateComponent(BugCheckParameter2, j, 2);
          v13 = *(_DWORD *)(BugCheckParameter2 + 828);
        }
        --v14;
      }
      while ( v14 );
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 296), 4u);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v23 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v12);
    PopDiagTraceFxDeviceStartPowerManagement(v2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v17 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v17 )
  {
    v32 = *(_QWORD *)(v2 + 32);
    PopFxActivateDevice(v32, 0, 0);
    result = PopFxIncrementDeviceSleepCount(v32);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 828) )
  {
    do
      result = PoFxIdleComponent(BugCheckParameter2, v1++);
    while ( v1 < *(_DWORD *)(BugCheckParameter2 + 828) );
  }
  return result;
}
