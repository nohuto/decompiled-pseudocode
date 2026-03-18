/*
 * XREFs of UsbhInitCallback @ 0x1C00441F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000BEB0 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallback(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = FdoExt(v1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_bd192adfbaab37968b6512a601d84f30_Traceguids);
  Log(v1, 2, 1766015537, v1, 0LL);
  return UsbhQueueWorkItemWithRetry(v1, *((_QWORD *)v3 + 347), (int)UsbhInitCallbackWorker, 1u, a1, 0, 1230468211);
}
