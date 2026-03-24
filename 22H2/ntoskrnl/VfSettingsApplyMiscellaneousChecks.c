/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x1409E0450
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C6E80 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1409E048C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1405B3578 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1405B3B18 (ExSetPoolFlags.c)
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
