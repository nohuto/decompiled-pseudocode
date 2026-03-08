/*
 * XREFs of UsbhPCE_wChangeERROR @ 0x1C0034DAC
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 */

int *__fastcall UsbhPCE_wChangeERROR(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      0x48u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v13,
      a4);
  }
  Log(a1, 512, 1346712115, 0LL, *(unsigned __int16 *)(a2 + 4));
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 23, a4, a3, a5, a6, 0LL);
}
