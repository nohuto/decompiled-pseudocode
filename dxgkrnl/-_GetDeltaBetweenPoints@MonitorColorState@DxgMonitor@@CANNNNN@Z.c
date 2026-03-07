double __fastcall DxgMonitor::MonitorColorState::_GetDeltaBetweenPoints(double a1, double a2, double a3, double a4)
{
  double v4; // xmm2_8
  double v5; // xmm3_8

  if ( a3 >= a1 )
    v4 = a3 - a1;
  else
    v4 = a1 - a3;
  if ( a4 < a2 )
    v5 = a2 - a4;
  else
    v5 = a4 - a2;
  return DxgMonitor::MonitorColorState::_GetSqrt(v5 * v5 + v4 * v4);
}
