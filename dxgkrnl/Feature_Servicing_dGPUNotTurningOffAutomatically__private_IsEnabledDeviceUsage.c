/*
 * XREFs of Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage @ 0x1C0026958
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE888 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledFallback @ 0x1C0026990 (Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_dGPUNotTurningOffAutomatically__private_featureState & 0x10) != 0 )
    return Feature_Servicing_dGPUNotTurningOffAutomatically__private_featureState & 1;
  else
    return Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_dGPUNotTurningOffAutomatically__private_featureState,
             3LL);
}
