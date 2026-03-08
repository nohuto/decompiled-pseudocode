/*
 * XREFs of UsbhPCE_QueueDriverReset @ 0x1C0019754
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_QueueDriverReset(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  int *result; // rax

  v6 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      81,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6);
  Log(a1, 512, 1953452114, 0LL, v6);
  result = (int *)UsbhGetPortData(a1, v6);
  if ( result )
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 15, a4, a3, 1, a5, 0LL);
  return result;
}
