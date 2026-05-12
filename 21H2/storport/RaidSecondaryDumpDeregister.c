/*
 * XREFs of RaidSecondaryDumpDeregister @ 0x1C0058100
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014E04 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidDeleteUnit @ 0x1C00165B0 (RaidDeleteUnit.c)
 * Callees:
 *     <none>
 */

__int64 RaidSecondaryDumpDeregister()
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered
    && KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.DeviceQueue.32) != 1 )
  {
    return 3221225473LL;
  }
  BootDriveExtension = 0LL;
  result = 0LL;
  SecondaryDumpCallbackRegistered = 0;
  return result;
}
