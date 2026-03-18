/*
 * XREFs of Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage @ 0x1C0139B44
 * Callers:
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C003C978 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00A467C (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     Feature_Backport_MitRitReliability__private_IsEnabledFallback @ 0x1C0139B7C (Feature_Backport_MitRitReliability__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_MitRitReliability__private_featureState & 0x10) != 0 )
    return Feature_Backport_MitRitReliability__private_featureState & 1;
  else
    return Feature_Backport_MitRitReliability__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_MitRitReliability__private_featureState,
             3LL);
}
