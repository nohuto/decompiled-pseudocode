/*
 * XREFs of UsbHubhInitTimeoutTimer @ 0x1C0041450
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     Usbh__TestPoint__Ulong @ 0x1C002F940 (Usbh__TestPoint__Ulong.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C003BFE4 (Usbh_HubRootHubInitNotification.c)
 */

__int64 __fastcall UsbHubhInitTimeoutTimer(__int64 a1, _LIST_ENTRY *a2, unsigned int a3, _LIST_ENTRY *a4)
{
  __int64 v4; // rbp
  _DWORD *v7; // rsi

  v4 = a3;
  v7 = FdoExt((__int64)a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_70750b4e52e537afa0d3aa3795e637f0_Traceguids);
  Log((__int64)a2, 2, 1667388495, (__int64)a4, v4);
  Usbh__TestPoint__Ulong((__int64)a2, 9u, 0, v4);
  if ( (unsigned int)Usbh_HubRootHubInitNotification((__int64)a2, 0LL, 0LL) == -1073741536 )
    UsbhQueueWorkItemWithRetry(a2, *((_QWORD *)v7 + 347), (_LIST_ENTRY *)UsbhInitCallbackWorker, 1u, a4, 0, 1230468211);
  return 0LL;
}
