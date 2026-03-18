/*
 * XREFs of UsbhInitCallback @ 0x1C0042F40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallback(_LIST_ENTRY *a1)
{
  _LIST_ENTRY *Blink; // rbx
  _DWORD *v3; // rsi

  Blink = a1->Blink;
  v3 = FdoExt((__int64)Blink);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_70750b4e52e537afa0d3aa3795e637f0_Traceguids);
  Log((__int64)Blink, 2, 1766015537, (__int64)Blink, 0LL);
  return UsbhQueueWorkItemWithRetry(
           Blink,
           *((_QWORD *)v3 + 347),
           (_LIST_ENTRY *)UsbhInitCallbackWorker,
           1u,
           a1,
           0,
           1230468211);
}
