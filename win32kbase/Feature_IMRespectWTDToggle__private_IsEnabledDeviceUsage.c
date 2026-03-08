/*
 * XREFs of Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00E1674
 * Callers:
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 *     ImpAllocate @ 0x1C0089EE4 (ImpAllocate.c)
 *     ImpWorkerRoutine @ 0x1C0089F90 (ImpWorkerRoutine.c)
 *     ImSessionStop @ 0x1C008A7A8 (ImSessionStop.c)
 *     ImSessionStart @ 0x1C008BE98 (ImSessionStart.c)
 *     ImpCleanupWork @ 0x1C008D2F0 (ImpCleanupWork.c)
 *     ImpRpcDisconnect @ 0x1C008D3D4 (ImpRpcDisconnect.c)
 * Callees:
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C00E16AC (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 */

__int64 Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_IMRespectWTDToggle__private_featureState & 0x10) != 0 )
    return Feature_IMRespectWTDToggle__private_featureState & 1;
  else
    return Feature_IMRespectWTDToggle__private_IsEnabledFallback(
             (unsigned int)Feature_IMRespectWTDToggle__private_featureState,
             3LL);
}
