/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C0021F8C
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 */

int *__fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      70,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  Log(a1, 512, 1346711864, 0LL, *(unsigned __int16 *)(a2 + 4));
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 18, a3, 0LL, 0, 0LL, 0LL);
}
