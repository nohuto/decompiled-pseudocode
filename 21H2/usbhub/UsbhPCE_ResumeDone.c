/*
 * XREFs of UsbhPCE_ResumeDone @ 0x1C003405C
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_ResumeDone(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  int *result; // rax
  int v7; // [rsp+28h] [rbp-20h]

  v3 = a3;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Cu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v7);
  }
  Log(a1, 512, 1346712113, 0LL, v3);
  result = (int *)UsbhGetPortData(a1, v3);
  if ( result )
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 21LL, a2, 0LL, 0, 0LL, 0LL);
  return result;
}
