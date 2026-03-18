/*
 * XREFs of UsbhBuildWmiConnectionNotification @ 0x1C0048514
 * Callers:
 *     UsbhDeviceOvercurrentPopup @ 0x1C002F1D4 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhEnumFailurePopup @ 0x1C0049EB0 (UsbhEnumFailurePopup.c)
 *     UsbhLegacyDevicePopup @ 0x1C004A890 (UsbhLegacyDevicePopup.c)
 *     UsbhNestedHubsPopup @ 0x1C004AA10 (UsbhNestedHubsPopup.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004AAB0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004AB40 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002D414 (UsbhSyncSendDeviceIoctl.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E090 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhBuildWmiConnectionNotification(__int64 a1, unsigned __int16 a2)
{
  int v2; // esi
  __int64 Pool2; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r9
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
  Pool2 = ExAllocatePool2(64LL, 24LL, 1112885333LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = v2;
    v7 = UsbhSyncSendDeviceIoctl(a1, v5, &v13, 6u);
    Log(a1, 64, 1752067121, v6, v7);
    if ( v9 < 0 )
    {
      *(_DWORD *)(v6 + 20) = 0;
      v10 = 0LL;
    }
    else
    {
      LODWORD(v10) = v13;
      *(_DWORD *)(v6 + 20) = v13;
      v10 = (unsigned int)v10;
    }
    Log(a1, 64, 1752067122, v8, v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0x15u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v6);
  return v6;
}
