void __fastcall RIMCmMarkSuppressedContactForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 607);
  if ( !(unsigned int)RIMCmIsContactSuppressed(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 608);
  *(_DWORD *)(a1 + 2444) |= 0x2000000u;
}
