/*
 * XREFs of ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A144C
 * Callers:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMFreeAsyncPnpWorkItem @ 0x1C003A278 (RIMFreeAsyncPnpWorkItem.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::WorkItemTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "DevChangeCallback";
    if ( !a1 )
      return "DeviceClassNotify";
    v1 = a1 - 1;
    if ( !v1 )
      return "DeviceNotify";
    v2 = v1 - 1;
    if ( !v2 )
      return "VirtDeviceClassNotify";
    v3 = v2 - 1;
    if ( !v3 )
      return "VirtDeviceNotify";
    if ( v3 == 1 )
      return "VirtRootPnpEndSync";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "HidRawInput";
  v6 = v5 - 1;
  if ( !v6 )
    return "PostPointerDeviceRangeMessage";
  v7 = v6 - 1;
  if ( !v7 )
    return "UpdateInputGlobals";
  if ( v7 != 1 )
    return "UNKNOWN";
  return "HandleAnyPnpRemovePendingDevices";
}
