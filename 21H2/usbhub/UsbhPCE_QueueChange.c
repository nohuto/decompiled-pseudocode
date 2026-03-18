/*
 * XREFs of UsbhPCE_QueueChange @ 0x1C001E628
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C00083B0 (UsbhHubProcessIsr.c)
 *     UsbhReset1Debounce @ 0x1C004D320 (UsbhReset1Debounce.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChange(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      75,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4LL, a4, a3, 0, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               76,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               a2);
  }
  return result;
}
