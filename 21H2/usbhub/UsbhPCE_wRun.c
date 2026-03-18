/*
 * XREFs of UsbhPCE_wRun @ 0x1C001E6FC
 * Callers:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0011440 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhPCE_wRun(__int64 a1, __int64 a2, __int64 a3)
{
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a3 + 4));
  UsbhDispatch_PortChangeQueueEventEx(a1, a3, 5LL, a2, 0LL, 0, 0LL, 0LL);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
