/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140AD7D64
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140AD7DA4 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140ADD684 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x14060487C (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1406056B8 (ExSetPoolFlags.c)
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
