/*
 * XREFs of ExClearPoolFlags @ 0x14060487C
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140AC7778 (VfDriverRemoveDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140AD7D64 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViPtPluginUnload @ 0x140ADC1B0 (ViPtPluginUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
