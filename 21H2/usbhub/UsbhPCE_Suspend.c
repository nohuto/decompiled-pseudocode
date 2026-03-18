/*
 * XREFs of UsbhPCE_Suspend @ 0x1C000F8DC
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000EC40 (UsbhSyncSuspendPdoPort.c)
 *     UsbhBusSuspend_Action @ 0x1C001ED64 (UsbhBusSuspend_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C00352A0 (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 PortData; // rax
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v8 = -1073741667;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      64,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v3);
  Log(a1, 512, 1346711856, 0LL, v3);
  PortData = UsbhGetPortData(a1, v3);
  if ( PortData )
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10, a2, 0LL, 0, 0LL, (__int64)&v8);
  return v8;
}
