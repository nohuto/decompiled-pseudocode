/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C00F19A8
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 *     rimIsWakeablePointerFrame @ 0x1C01CF08C (rimIsWakeablePointerFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableBegin @ 0x1C01E3144 (ListTableBegin.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2)
{
  if ( !*(_DWORD *)(a2 + 1000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 457);
  ListTableBegin(a1, a2 + 992);
  return a1;
}
