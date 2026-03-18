/*
 * XREFs of ExClearPoolFlags @ 0x140606CCC
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140ACB778 (VfDriverRemoveDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140ADBD64 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViPtPluginUnload @ 0x140AE01B0 (ViPtPluginUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
