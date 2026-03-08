/*
 * XREFs of Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage @ 0x1C012D214
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0078E18 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00DB6BC (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback @ 0x1C012D24C (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_featureState & 1;
  else
    return Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_featureState,
             3LL);
}
