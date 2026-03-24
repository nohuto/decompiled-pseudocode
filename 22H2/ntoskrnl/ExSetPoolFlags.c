/*
 * XREFs of ExSetPoolFlags @ 0x1405B3B18
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C6D50 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1409C6E80 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E0450 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
