double __fastcall DxgMonitor::MonitorColorState::_GetColorGamutTriangleArea(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  double v6; // xmm6_8
  double v7; // xmm1_8
  double v8; // xmm6_8

  v6 = a1 * a4 + a3 * a6 + a2 * a5;
  v7 = a2 * a3 + a4 * a5 + a1 * a6;
  if ( v6 <= v7 )
    v8 = v7 - v6;
  else
    v8 = v6 - v7;
  return v8 * 0.5;
}
