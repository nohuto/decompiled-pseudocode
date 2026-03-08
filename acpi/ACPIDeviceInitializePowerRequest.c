/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C001CF98
 * Callers:
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001D2C8 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001D3A8 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001D594 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001DA90 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C001DBF8 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C001DE48 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C001DFB8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001E474 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0023ABC (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C001D4A0 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00447C0 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIWakeEmulationEnable @ 0x1C00452A4 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045348 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEmulationPrepare @ 0x1C0098BFC (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        _DWORD *a3,
        void (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5,
        int a6,
        int a7,
        unsigned int a8)
{
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // ebx
  __int64 result; // rax
  KIRQL v16; // r12
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int64 *); // rax
  struct _DEVICE_OBJECT *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF

  v12 = ExAllocateFromNPagedLookasideList(&RequestLookAsideList);
  v13 = v12;
  if ( !v12 )
  {
    v14 = -1073741670;
    if ( a4 )
      a4(a1, a5, 3221225626LL);
    return (unsigned int)v14;
  }
  memset(v12, 0, 0x108uLL);
  v13[3] = v13 + 2;
  v13[2] = v13 + 2;
  v13[11] = v13 + 10;
  v13[10] = v13 + 10;
  *((_DWORD *)v13 + 64) = 0;
  v13[9] = v13 + 8;
  v13[8] = v13 + 8;
  *((_DWORD *)v13 + 8) = 1599293264;
  v13[24] = a4;
  v13[25] = a5;
  v13[5] = a1;
  *((_DWORD *)v13 + 52) = 3;
  *((_DWORD *)v13 + 12) = a7;
  v13[1] = v13;
  *v13 = v13;
  v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  if ( !a7 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 736), 0, 0) )
    {
      if ( a6 == 3 )
      {
        if ( a2 == 4 )
        {
          v17 = a8 | 0x10;
          goto LABEL_35;
        }
      }
      else if ( a2 == 1 )
      {
        v17 = a8 | 0x20;
        goto LABEL_35;
      }
    }
    v17 = a8;
LABEL_35:
    *((_DWORD *)v13 + 26) = a2;
    *((_DWORD *)v13 + 27) = 0;
    *((_DWORD *)v13 + 14) = v17;
    if ( a2 > *(_DWORD *)(a1 + 384) )
    {
      v21 = *(struct _DEVICE_OBJECT **)(a1 + 768);
      if ( v21 )
        PoSetPowerState(v21, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 1008) &= ~0x10000uLL;
    goto LABEL_40;
  }
  if ( a7 == 1 )
  {
    v17 = a8;
    *((_DWORD *)v13 + 26) = a2;
    *((_DWORD *)v13 + 27) = *a3;
    *((_DWORD *)v13 + 28) = a6;
    goto LABEL_40;
  }
  if ( a7 != 2 )
  {
    if ( a7 == 3 )
    {
      v17 = a8;
      *((_DWORD *)v13 + 26) = a2;
    }
    else
    {
      v17 = a8;
      if ( a7 != 4 )
      {
LABEL_40:
        if ( (v17 & 2) == 0 )
          ACPIDeviceInternalQueueRequest(a1, v13, v17);
        KeReleaseSpinLock(&AcpiPowerQueueLock, v16);
        return 3221225494LL;
      }
    }
    *((_DWORD *)v13 + 14) = v17;
    goto LABEL_40;
  }
  *((_DWORD *)v13 + 14) = a8;
  *((_DWORD *)v13 + 26) = a2;
  *((_DWORD *)v13 + 28) = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v16);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1000)) )
  {
    v14 = -1073741436;
LABEL_19:
    if ( a4 )
      a4(a1, a5, (unsigned int)v14);
    ACPIDereferenceWaitWakePowerRequest(v13);
    return (unsigned int)v14;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x20u) )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v14 = -1073741496;
      goto LABEL_19;
    }
    v14 = ACPIWakeEmulationPrepare(v13);
    if ( v14 < 0 )
      goto LABEL_19;
    v14 = ACPIWakeEmulationEnable(v13);
    if ( v14 < 0 )
      goto LABEL_19;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x26u) )
  {
    v19 = *(_QWORD *)(a1 + 992);
    v22 = *(unsigned int *)(a1 + 976);
    v20 = *(void (__fastcall **)(__int64, __int64 *))(a1 + 984);
    BYTE4(v22) = 1;
    v20(v19, &v22);
  }
  LOBYTE(v18) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v18, &ACPIDeviceIrpWaitWakeRequestPending, v13);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
