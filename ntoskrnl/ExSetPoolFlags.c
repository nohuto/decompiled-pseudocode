/*
 * XREFs of ExSetPoolFlags @ 0x1406056B8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140ABFE40 (VfInitVerifierComponents.c)
 *     VfDriverApplyDifVerification @ 0x140AC72D8 (VfDriverApplyDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140AD7D64 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140AD9358 (ViIovInitialization.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADBE2C (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
