/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140ADBD64
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140ADBDA4 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140AE1684 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140606CCC (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x140607B08 (ExSetPoolFlags.c)
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
