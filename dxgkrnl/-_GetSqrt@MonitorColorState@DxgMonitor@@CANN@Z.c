double __fastcall DxgMonitor::MonitorColorState::_GetSqrt(double a1)
{
  double v1; // xmm2_8
  double v2; // xmm3_8
  double v3; // xmm4_8
  double v4; // xmm4_8

  v1 = a1;
  if ( a1 == 0.0 )
    return 0.0;
  if ( a1 < 0.0 )
    *(_QWORD *)&v1 = *(_QWORD *)&a1 ^ _xmm;
  v2 = v1 * 0.5;
  do
  {
    v3 = v2;
    v2 = (v2 + v1 / v2) * 0.5;
    if ( v3 <= v2 )
      v4 = v2 - v3;
    else
      v4 = v3 - v2;
  }
  while ( v4 >= 0.0000001 );
  return v2;
}
