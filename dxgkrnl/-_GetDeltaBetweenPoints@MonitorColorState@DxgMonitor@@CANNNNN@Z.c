/*
 * XREFs of ?_GetDeltaBetweenPoints@MonitorColorState@DxgMonitor@@CANNNNN@Z @ 0x1C01FCE68
 * Callers:
 *     ?_GetColorPrimariesType@MonitorColorState@DxgMonitor@@AEBA?AW4ColorPrimaryType@12@XZ @ 0x1C01FCC08 (-_GetColorPrimariesType@MonitorColorState@DxgMonitor@@AEBA-AW4ColorPrimaryType@12@XZ.c)
 * Callees:
 *     ?_GetSqrt@MonitorColorState@DxgMonitor@@CANN@Z @ 0x1C01FCEB4 (-_GetSqrt@MonitorColorState@DxgMonitor@@CANN@Z.c)
 */

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
