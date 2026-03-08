/*
 * XREFs of RIMCmIsContactSuppressed @ 0x1C00F1A7A
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00F1204 (rimApplyPointerDevicePolicies.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimFinalizePointerFlags @ 0x1C01D8470 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01D99D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmDeactivateContact @ 0x1C01DE86C (RIMCmDeactivateContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01DEACC (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01DEB08 (RIMCmIsContactDeliveringAnyData.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x1C01DEC1C (RIMCmMarkSuppressedContactForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01DECA4 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactSuppressed(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 581);
  LOBYTE(v1) = *(_DWORD *)(a1 + 8) != 0;
  return v1;
}
