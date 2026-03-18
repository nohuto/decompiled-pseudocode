/*
 * XREFs of RIMCmIsContactDeliveringAnyData @ 0x1C01B08E8
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C2BC (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E494 (rimEndAllActiveContactsWorker.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F9C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A894C (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB398 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00E35A6 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B0964 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringAnyData(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 557);
  if ( (unsigned int)RIMCmIsContactDeliveringPointerData(a1) )
  {
    return 1;
  }
  else if ( (unsigned int)RIMCmIsContactSuppressed(a1) )
  {
    return (*(_DWORD *)(a1 + 2684) >> 25) & 1;
  }
  return v1;
}
