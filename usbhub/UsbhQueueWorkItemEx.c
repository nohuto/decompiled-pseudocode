/*
 * XREFs of UsbhQueueWorkItemEx @ 0x1C001E320
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C000C3C0 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C001E494 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C00212F4 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhPindicatorTimer @ 0x1C002F3F0 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C002FF70 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C00300F0 (UsbhQueueOvercurrentReset.c)
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x1C0042800 (UsbhDriverNotFoundTimer.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhAllocWorkItem @ 0x1C001E570 (UsbhAllocWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueueWorkItemEx(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  char v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v16; // [rsp+28h] [rbp-40h]

  v10 = *((_BYTE *)FdoExt(a1) + 5268);
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1632720717, a6, a4);
  v12 = a7;
  if ( !a7 )
  {
    v12 = UsbhAllocWorkItem(a1, a3, a4, a5, a6, v10);
    if ( !v12 )
      return 3221225626LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1364479275, a6, v12);
  v13 = *(_QWORD *)(v12 + 40);
  v14 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, int))*((_QWORD *)FdoExt(a1) + 598);
  if ( v14 )
  {
    LOBYTE(v16) = v10;
    v14(a1, v13, &UsbhHubWorker, a2, v12, v16);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v11;
}
