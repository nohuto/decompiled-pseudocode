/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C01DEBD0
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1C01D8470 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 593);
  return (*(_DWORD *)(a1 + 2444) >> 25) & 1;
}
