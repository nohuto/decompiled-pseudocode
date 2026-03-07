__int64 __fastcall DxgMonitor::MonitorColorState::_GetColorPrimariesType(_DWORD *a1)
{
  int v1; // eax
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // ecx
  double v7; // xmm11_8
  double v8; // xmm6_8
  double v9; // xmm12_8
  double v10; // xmm9_8
  double v11; // xmm8_8
  double v12; // xmm10_8
  unsigned int v13; // edx
  double ColorGamutTriangleArea; // xmm6_8
  double v15; // xmm0_8

  v1 = a1[59];
  if ( !v1 )
    return 0LL;
  v2 = a1[60];
  if ( !v2 )
    return 0LL;
  v3 = a1[61];
  if ( !v3 )
    return 0LL;
  v4 = a1[62];
  if ( !v4 )
    return 0LL;
  v5 = a1[63];
  if ( !v5 )
    return 0LL;
  v6 = a1[64];
  if ( !v6 )
    return 0LL;
  v7 = (float)((float)((float)v1 * 0.00000095367432) + 0.00050000002);
  v8 = (float)((float)((float)v3 * 0.00000095367432) + 0.00050000002);
  v9 = (float)((float)((float)v2 * 0.00000095367432) + 0.00050000002);
  v10 = (float)((float)((float)v5 * 0.00000095367432) + 0.00050000002);
  v11 = (float)((float)((float)v4 * 0.00000095367432) + 0.00050000002);
  v12 = (float)((float)((float)v6 * 0.00000095367432) + 0.00050000002);
  if ( DxgMonitor::MonitorColorState::_GetDeltaBetweenPoints(v7, v9, 0.6399999856948853, 0.3300000131130219) <= 0.09000000357627869
    && DxgMonitor::MonitorColorState::_GetDeltaBetweenPoints(v8, v11, 0.239999994635582, 0.6499999761581421) <= 0.1749999970197678
    && DxgMonitor::MonitorColorState::_GetDeltaBetweenPoints(v10, v12, 0.1500000059604645, 0.07500000298023224) <= 0.07000000029802322 )
  {
    ColorGamutTriangleArea = DxgMonitor::MonitorColorState::_GetColorGamutTriangleArea(v7, v9, v8, v11, v10, v12);
    v15 = DxgMonitor::MonitorColorState::_GetColorGamutTriangleArea(
            0.6399999856948853,
            0.3300000131130219,
            0.300000011920929,
            0.6000000238418579,
            0.1500000059604645,
            0.05999999865889549);
    if ( v15 * 0.5 <= ColorGamutTriangleArea )
    {
      if ( v15 * 0.949999988079071 > ColorGamutTriangleArea )
        return 1;
      else
        return 2;
    }
  }
  return v13;
}
