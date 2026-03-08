/*
 * XREFs of RIMCmMarkSuppressedContactForDelivery @ 0x1C01DEC1C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00F1A7A (RIMCmIsContactSuppressed.c)
 */

void __fastcall RIMCmMarkSuppressedContactForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 607);
  if ( !(unsigned int)RIMCmIsContactSuppressed(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 608);
  *(_DWORD *)(a1 + 2444) |= 0x2000000u;
}
