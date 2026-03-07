void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  int v13; // edx
  int v14; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  WdLogSingleEntry3(9LL, a2, v3, a3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      v6,
      (unsigned int)&Dxgk_DpiRequestDevicePowerState,
      v7,
      *(_QWORD *)(v3 + 3912),
      a2,
      a3);
  if ( a2 == 1 )
  {
    if ( !a3 )
      DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4096), &LockHandle);
    WdLogSingleEntry3(9LL, *(int *)(v3 + 4160), *(int *)(v3 + 4164), 0LL);
    if ( *(_DWORD *)(v3 + 4000) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 4160) )
    {
      WdLogSingleEntry1(1LL, 4795LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v8,
            0,
            2,
            -1,
            (__int64)L"FdoContext->DeviceThreadState != StateSuspended || FdoContext->DevicePnpState == SurpriseRemoved ||"
                      " FdoContext->DevicePowerTransitionState != DevicePoweredOn",
            4795LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( a3 )
    {
      *(_DWORD *)(v3 + 4164) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    switch ( *(_DWORD *)(v3 + 4160) )
    {
      case 1:
        DpiCancelAsyncRequest(v3);
        v9 = 0LL;
        break;
      case 2:
        if ( a3 != 2 )
        {
          DpiSetDevicePowerTransitionState(v3, 0LL);
          goto LABEL_35;
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        goto LABEL_38;
      case 3:
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        DpiSendAsyncResumeAdapterRequest(v3);
        v9 = 7LL;
        break;
      default:
        if ( *(_DWORD *)(v3 + 4160) != 4 )
        {
          if ( *(_DWORD *)(v3 + 4160) != 5 )
            goto LABEL_21;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
            McTemplateK0pqq_EtwWriteTransfer(
              *(_DWORD *)(v3 + 4160) - 4,
              (unsigned int)&EventPowerRequestDuringD3,
              v8,
              *(_QWORD *)(v3 + 3912),
              1,
              a3);
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        DpiRequestDevicePowerIrp(v3, 1LL);
        v9 = 6LL;
        break;
    }
    DpiSetDevicePowerTransitionState(v3, v9);
LABEL_21:
    if ( a3 != 2 )
      goto LABEL_35;
LABEL_38:
    if ( *(_DWORD *)(v3 + 4160) != 6 )
    {
      WdLogSingleEntry3(9LL, v3, *(int *)(v3 + 4160), 2LL);
      DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3912));
    }
    goto LABEL_35;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4096), &LockHandle);
  WdLogSingleEntry3(9LL, *(int *)(v3 + 4160), *(int *)(v3 + 4164), 0LL);
  if ( a3 == 2 )
    *(_DWORD *)(v3 + 4164) = 1;
  if ( !*(_DWORD *)(v3 + 4104) && (a3 != 1 || *(_DWORD *)(v3 + 4164)) )
  {
    v10 = *(_DWORD *)(v3 + 4160);
    if ( v10 == 3 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v10 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v11 = (_QWORD *)(v3 + 4008);
      if ( !*(_QWORD *)(v3 + 4008) )
      {
        *(_DWORD *)(v3 + 4032) = 1;
        v12 = *(_QWORD **)(v3 + 3992);
        if ( *v12 != v3 + 3984 )
          __fastfail(3u);
        *v11 = v3 + 3984;
        *(_QWORD *)(v3 + 4016) = v12;
        *v12 = v11;
        *(_QWORD *)(v3 + 3992) = v11;
        KeSetEvent((PRKEVENT)(v3 + 3952), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 4160) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
LABEL_35:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
