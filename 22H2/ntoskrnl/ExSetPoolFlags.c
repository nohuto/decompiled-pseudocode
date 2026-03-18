/*
 * XREFs of ExSetPoolFlags @ 0x140607B08
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC3CE8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140AC3E40 (VfInitVerifierComponents.c)
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140ADBD64 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140ADD358 (ViIovInitialization.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADFE2C (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
