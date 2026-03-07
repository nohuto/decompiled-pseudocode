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
