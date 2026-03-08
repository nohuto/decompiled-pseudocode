/*
 * XREFs of ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEAA_NXZ @ 0x1C0180360
 * Callers:
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEAAJKPEAXPEA_K@Z @ 0x1C01802A4 (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01810AC (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

bool __fastcall DxgMonitor::MonitorGammaState::_IsTargetMatrix_3x4Supported(DxgMonitor::MonitorGammaState *this)
{
  char v1; // bl
  enum _D3DDDI_GAMMARAMP_TYPE v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  if ( (int)DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v3) >= 0 )
    return v3 == D3DDDI_GAMMARAMP_MATRIX_3x4;
  return v1;
}
