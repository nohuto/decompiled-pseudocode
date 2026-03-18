/*
 * XREFs of RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01ADA80 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringAnyData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = 0;
  if ( (unsigned int)RIMCmIsContactDeliveringPointerData(a1) )
  {
    return 1;
  }
  else if ( (unsigned int)RIMCmIsContactSuppressed(a1) )
  {
    return (*(_DWORD *)(a1 + 2660) >> 25) & 1;
  }
  return v4;
}
