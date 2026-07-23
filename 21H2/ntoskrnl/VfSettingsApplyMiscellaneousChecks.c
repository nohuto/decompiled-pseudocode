/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x1409E1440
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1409E147C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1405B3868 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1405B3E08 (ExSetPoolFlags.c)
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  bool v1; // cf
  int v2; // ecx

  v1 = (a1 & 0x800) != 0;
  v2 = (MmVerifierData & 0x400000) == 0 ? 0x206 : 0;
  if ( v1 )
    ExSetPoolFlags(v2);
  else
    ExClearPoolFlags(v2);
}
