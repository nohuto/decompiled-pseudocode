void VfSettingsApplyMiscellaneousChecks()
{
  int v0; // ecx

  v0 = (VfRuleClasses & 0x400000) == 0 ? 0x206 : 0;
  if ( (MmVerifierData & 0x800) != 0 )
    ExSetPoolFlags(v0);
  else
    ExClearPoolFlags(v0);
}
