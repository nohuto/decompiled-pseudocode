/*
 * XREFs of UsbhReset2Timeout @ 0x1C004E6E0
 * Callers:
 *     UsbhReset2TimeoutBadEnable @ 0x1C004E8C0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     UsbhResetPort @ 0x1C0002918 (UsbhResetPort.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C00031B0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001B9D8 (UsbhAllocateTimeoutObject.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C001BEDC (UsbhUnlinkPdoDeviceHandle.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00367A4 (UsbhAssertBusLock.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // eax
  int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+30h] [rbp-58h]
  int v11; // [rsp+38h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  int v13[2]; // [rsp+58h] [rbp-30h] BYREF
  __int16 v14; // [rsp+60h] [rbp-28h]
  __int16 v15; // [rsp+62h] [rbp-26h]

  v15 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Bu,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884443186, a2, 0LL);
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v13[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v13[1] = *(_DWORD *)(a2 + 544);
  v14 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  if ( *(_DWORD *)(a2 + 544) >= 3u || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    PdoExt(a3)[705] = 1073807362;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
    UsbhSetEnumerationFailed(a1, (int)v13, -1, v10, v11, 1366);
    return 0LL;
  }
  else
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    ++*(_DWORD *)(a2 + 544);
    UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740857, 1);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
