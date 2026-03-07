char __fastcall IoInitSystem(__int64 a1)
{
  FeatureDeveloperVolume = (unsigned int)Feature_REFSDV__private_IsEnabledNoReporting() != 0;
  IoFsctlProcessMitigationEnabled = (unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() != 0;
  if ( !IoInitSystemPreDrivers(a1) )
    return 0;
  WerLiveKernelInitSystem();
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    if ( HeadlessGlobals )
    {
      if ( HeadlessGlobals[1] )
        HdlspKernelAddLogEntry(0xBu, 0LL);
    }
    LODWORD(IopInitFailCode) = 8;
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  IopInitializeMdlCache();
  return 1;
}
