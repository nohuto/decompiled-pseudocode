/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C001C160
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C00071D0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, __int64 a3)
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
