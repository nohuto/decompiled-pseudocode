/*
 * XREFs of IoInitSystem @ 0x140B5E3E0
 * Callers:
 *     Phase1Initialization @ 0x14080E810 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403AD6E0 (PnpSerializeBoot.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040A0E4 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     Feature_REFSDV__private_IsEnabledNoReporting @ 0x14040A138 (Feature_REFSDV__private_IsEnabledNoReporting.c)
 *     IopRegistryInitializeCallbacks @ 0x1408364DC (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x1408367D4 (IopInitializeMdlCache.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x140AE7A40 (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 */

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
