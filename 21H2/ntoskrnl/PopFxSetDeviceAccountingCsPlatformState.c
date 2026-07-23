/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x14056CAC4
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14056AC60 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1405749C0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574AD0 (PopPepGetMinimumDevicePowerState.c)
 */

NTSTATUS __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  unsigned int v1; // r14d
  NTSTATUS result; // eax
  NTSTATUS v3; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR i; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r8d
  char MinimumDevicePowerState; // bl
  unsigned __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  char v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rbx
  char MinimumComponentIdleState; // di
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char Buffer; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v30 = 0;
  result = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v3 = result;
  if ( result <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v6 = *(_QWORD *)(i + 48);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        v31 = v7;
        PopFxActivateDevice(v7, 0, 0);
        LOBYTE(v8) = 1;
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(i + 56), v1, v8, (unsigned int)&v30, 0LL);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        *(_DWORD *)(i + 616) = v3;
        memset((void *)(i + 632), 0, 0xC0uLL);
        if ( MinimumDevicePowerState && v30 > 1 )
        {
          *(_DWORD *)(i + 612) = v30;
          *(_BYTE *)(i + 608) = 1;
          *(_QWORD *)(i + 624) = MEMORY[0xFFFFF78000000008];
          _InterlockedOr((volatile signed __int32 *)(i + 824), 0x10u);
        }
        else
        {
          *(_QWORD *)(i + 624) = 0LL;
          *(_BYTE *)(i + 608) = 0;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 600));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v15 = (v14 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v14;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        v16 = 0;
        v17 = 0;
        if ( !*(_DWORD *)(i + 828) )
          goto LABEL_30;
        do
        {
          v18 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * v17) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(i + 56), v17, a1, &v30);
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18);
          *(_DWORD *)(v18 + 16) = v3;
          memset((void *)(v18 + 32), 0, 0xC0uLL);
          if ( MinimumComponentIdleState && v30 )
          {
            v16 = 1;
            *(_DWORD *)(v18 + 12) = v30;
            *(_BYTE *)(v18 + 8) = 1;
            *(_QWORD *)(v18 + 24) = MEMORY[0xFFFFF78000000008];
            _InterlockedOr((volatile signed __int32 *)(i + 824), 0x10u);
          }
          else
          {
            *(_BYTE *)(v18 + 8) = 0;
            *(_QWORD *)(v18 + 24) = 0LL;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)v18);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v21 = KeGetCurrentIrql();
              if ( v21 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v21 >= 2u )
              {
                v22 = KeGetCurrentPrcb();
                v23 = v22->SchedulerAssist;
                v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v15 = (v24 & v23[5]) == 0;
                v23[5] &= v24;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick((__int64)v22);
              }
            }
          }
          __writecr8(v20);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(i + 828) );
        v7 = v31;
        v1 = a1;
        if ( v16 )
          _InterlockedOr((volatile signed __int32 *)(i + 824), 0x100u);
        else
LABEL_30:
          _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFEFF);
        PoFxIdleDevice(v7);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
    Buffer = 1;
    return ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return result;
}
