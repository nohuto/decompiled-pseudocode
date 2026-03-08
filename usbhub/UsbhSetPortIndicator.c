/*
 * XREFs of UsbhSetPortIndicator @ 0x1C002F4D8
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x1C002F6AC (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C002F77C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C002F814 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C002F8E0 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C002F9D0 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortIndicator(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  __int64 v3; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // r10d
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+30h] [rbp-48h]
  __int16 v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF
  __int16 v17; // [rsp+9Ch] [rbp+24h]
  __int16 v18; // [rsp+9Eh] [rbp+26h]

  v3 = a2;
  v15 = 0;
  v14 = 0;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = v3;
    v12 = v6[344];
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      0xAu,
      (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids,
      v12,
      v13);
  }
  Log(a1, 0x8000, 1885957680, v3, 0LL);
  v16 = 1442595;
  v18 = 0;
  v17 = a3 | v3;
  v8 = (int)UsbhSyncSendCommand(a1, (__int64)&v16, 0LL, &v14, v11, &v15);
  Log(a1, 8, 1937076273, v8, v15);
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
    UsbhException(a1, (unsigned __int16)v3, 119, 0, 0, v8, v9, usbfile_pind_c, 96, 0);
  Log(a1, 8, 1937077072, v8, v3);
  return (unsigned int)v8;
}
