/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140A9AF9C
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140A9AFDC (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140AA4854 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x14063A5D8 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x14063B338 (ExSetPoolFlags.c)
 */

void VfSettingsApplyMiscellaneousChecks()
{
  int v0; // ecx

  v0 = (VfRuleClasses & 0x400000) == 0 ? 0x206 : 0;
  if ( (MmVerifierData & 0x800) != 0 )
    ExSetPoolFlags(v0);
  else
    ExClearPoolFlags(v0);
}
