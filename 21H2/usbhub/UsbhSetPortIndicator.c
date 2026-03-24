/*
 * XREFs of UsbhSetPortIndicator @ 0x1C002FEE8
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x1C00300BC (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C0030188 (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C0030220 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00302EC (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C00303D4 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002F194 (WPP_RECORDER_SF_dd.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
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
  int v14; // [rsp+48h] [rbp-30h]
  __int16 v15; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF
  __int16 v18; // [rsp+9Ch] [rbp+24h]
  __int16 v19; // [rsp+9Eh] [rbp+26h]

  v3 = a2;
  v16 = 0;
  v15 = 0;
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
  v17 = 1442595;
  v19 = 0;
  v18 = a3 | v3;
  v8 = (int)UsbhSyncSendCommand(a1, (__int64)&v17, 0LL, &v15, v11, &v16);
  Log(a1, 8, 1937076273, v8, v16);
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, (unsigned __int16)v3, 119, 0, 0, v8, v9, usbfile_pind_c, 96, v14);
  }
  Log(a1, 8, 1937077072, v8, v3);
  return (unsigned int)v8;
}
