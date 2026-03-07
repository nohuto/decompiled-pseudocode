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
