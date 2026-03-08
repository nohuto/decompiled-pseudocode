/*
 * XREFs of UsbhPCE_QueueChange @ 0x1C001922C
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhReset1Debounce @ 0x1C004DC10 (UsbhReset1Debounce.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_QueueChange(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  int *result; // rax

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      75,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
  result = (int *)UsbhGetPortData(a1, a2);
  if ( result )
    result = UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 4, a4, a3, 0, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (int *)WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      76,
                      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                      a2);
  }
  return result;
}
