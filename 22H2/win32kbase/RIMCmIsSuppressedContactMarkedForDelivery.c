/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C01B09B0
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CDA4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1C01AA398 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 592);
  return (*(_DWORD *)(a1 + 2444) >> 25) & 1;
}
