/*
 * XREFs of UsbhBuildWmiConnectionNotification @ 0x1C0049894
 * Callers:
 *     UsbhDeviceOvercurrentPopup @ 0x1C00305A4 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhEnumFailurePopup @ 0x1C004B280 (UsbhEnumFailurePopup.c)
 *     UsbhLegacyDevicePopup @ 0x1C004BC70 (UsbhLegacyDevicePopup.c)
 *     UsbhNestedHubsPopup @ 0x1C004BDF0 (UsbhNestedHubsPopup.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004BE90 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004BF20 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002E828 (UsbhSyncSendDeviceIoctl.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C002F46C (WPP_RECORDER_SF_q.c)
 */

_QWORD *__fastcall UsbhBuildWmiConnectionNotification(__int64 a1, unsigned __int16 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  _QWORD *PoolWithTag; // rbx
  int v6; // eax
  __int64 v7; // r9
  int v8; // r11d
  int v9; // r10d
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int16 v14; // [rsp+34h] [rbp-24h]

  v2 = a2;
  v13 = 0;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v12);
  }
  FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 1) = v2;
    v6 = UsbhSyncSendDeviceIoctl(a1, v4, &v13, 6u);
    Log(a1, 64, 1752067121, (__int64)PoolWithTag, v6);
    if ( v9 < 0 )
    {
      *((_DWORD *)PoolWithTag + 5) = 0;
      v10 = 0LL;
    }
    else
    {
      LODWORD(v10) = v13;
      *((_DWORD *)PoolWithTag + 5) = v13;
      v10 = (unsigned int)v10;
    }
    Log(a1, v8, 1752067122, v7, v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1u,
      0x15u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      PoolWithTag);
  return PoolWithTag;
}
