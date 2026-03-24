/*
 * XREFs of ExClearPoolFlags @ 0x1405B3578
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E0450 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
