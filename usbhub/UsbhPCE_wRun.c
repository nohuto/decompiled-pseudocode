/*
 * XREFs of UsbhPCE_wRun @ 0x1C0004288
 * Callers:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhPCE_wRun(__int64 a1, int a2, __int64 a3)
{
  int v5; // esi

  v5 = a1;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a3 + 4));
  UsbhDispatch_PortChangeQueueEventEx(v5, a3, 5, a2, 0LL, 0, 0LL, 0LL);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
