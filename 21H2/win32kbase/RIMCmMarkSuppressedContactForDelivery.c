/*
 * XREFs of RIMCmMarkSuppressedContactForDelivery @ 0x1C0180500
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C017C828 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180440 (RIMCmIsContactSuppressed.c)
 */

__int64 __fastcall RIMCmMarkSuppressedContactForDelivery(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 560);
  result = RIMCmIsContactSuppressed(a1);
  if ( !(_DWORD)result )
    result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 561);
  *(_DWORD *)(a1 + 2420) |= 0x2000000u;
  return result;
}
