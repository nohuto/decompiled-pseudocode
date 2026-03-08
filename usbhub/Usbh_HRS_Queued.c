/*
 * XREFs of Usbh_HRS_Queued @ 0x1C003D9BC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x1C001E320 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhSyncBusDisconnect @ 0x1C00317FC (UsbhSyncBusDisconnect.c)
 *     UsbhSyncBusPause @ 0x1C0031870 (UsbhSyncBusPause.c)
 *     UsbhReleaseResetLock @ 0x1C0031DCC (UsbhReleaseResetLock.c)
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C003D358 (UsbhIncrementConcurrentResetCounter.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0044104 (UsbhResetNotifyDownstreamHub.c)
 */

__int64 __fastcall Usbh_HRS_Queued(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rbx
  unsigned int v16; // ebx
  int v17; // ebx
  int v18; // eax
  __int64 v20; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920160085, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 2;
  if ( !v6 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v14 = 5;
    v13 = a1;
    goto LABEL_29;
  }
  v7 = 3;
  v8 = v6 - 1;
  if ( !v8 )
  {
LABEL_14:
    v12 = *(_QWORD *)(a1 + 8);
    v13 = a1;
    return (unsigned int)UsbhReleaseResetLock(v12, v13, v7);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = a1;
        if ( v11 != 1 )
        {
          v7 = v5;
          return (unsigned int)UsbhReleaseResetLock(v12, v13, v7);
        }
        v14 = 7;
LABEL_29:
        v16 = UsbhReleaseResetLock(v12, v13, v14);
        KeWaitForSingleObject(v4 + 712, Executive, 0, 0, 0LL);
        return v16;
      }
      goto LABEL_14;
    }
    v15 = *(_QWORD *)(a1 + 8);
    FdoExt(v15);
    UsbhSyncBusPause(v15, a1, 6);
    UsbhSyncBusDisconnect(v15, a1);
LABEL_13:
    v7 = 4;
    goto LABEL_14;
  }
  UsbhEtwLogHubIrpEvent(*(_QWORD *)(a1 + 8), 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_START);
  v17 = UsbhHardReset_Action(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
  if ( *((_BYTE *)v4 + 5268) && _InterlockedExchange(v4 + 1315, 0) )
  {
    do
    {
      UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
      v17 = UsbhHardReset_Action(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
      UsbhIncrementConcurrentResetCounter(*(_QWORD *)(a1 + 8));
    }
    while ( _InterlockedExchange(v4 + 1315, 0) );
  }
  UsbhEtwLogHubIrpEvent(*(_QWORD *)(a1 + 8), 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_COMPLETE);
  if ( v17 < 0 && !*((_BYTE *)v4 + 5268) )
    goto LABEL_13;
  v18 = UsbhQueueWorkItemEx(*(_QWORD *)(a1 + 8), 1u, (int)UsbhUpdateRegHubHardResetCount, 0LL, 0, 0x49577372u, 0LL);
  if ( (v18 & 0xC0000000) == 0xC0000000
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = v18;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v20);
  }
  v16 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 2u);
  if ( *((_BYTE *)v4 + 5268) && v4[1315] )
  {
    UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
    UsbhHardReset_Action(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
    UsbhIncrementConcurrentResetCounter(*(_QWORD *)(a1 + 8));
  }
  return v16;
}
