/*
 * XREFs of RIMCmMarkSuppressedContactForDelivery @ 0x1C01B09FC
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00E35A6 (RIMCmIsContactSuppressed.c)
 */

void __fastcall RIMCmMarkSuppressedContactForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 606);
  if ( !(unsigned int)RIMCmIsContactSuppressed(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 607);
  *(_DWORD *)(a1 + 2444) |= 0x2000000u;
}
