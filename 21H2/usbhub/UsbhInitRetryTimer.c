/*
 * XREFs of UsbhInitRetryTimer @ 0x1C0043260
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitRetryTimer(__int64 a1, _LIST_ENTRY *a2, __int64 a3, _LIST_ENTRY *a4)
{
  FdoExt((__int64)a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_70750b4e52e537afa0d3aa3795e637f0_Traceguids);
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (_LIST_ENTRY *)UsbhInitCallbackWorker, 1u, a4, 0, 1230468211);
}
