/*
 * XREFs of RIMCmIsContactDeliveringAnyData @ 0x1C01DEB08
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01D5098 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01D9470 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00F1A7A (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01DEB84 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringAnyData(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 558);
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
