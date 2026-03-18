/*
 * XREFs of RIMCmIsContactDeliveringPointerData @ 0x1C01B0964
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2D30 (rimApplyPointerDevicePolicies.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CDA4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A75A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A792C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D40 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimFinalizePointerFlags @ 0x1C01AA398 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8FC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B08E8 (RIMCmIsContactDeliveringAnyData.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringPointerData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 544);
  return (*(_DWORD *)(a1 + 2684) >> 1) & 1;
}
