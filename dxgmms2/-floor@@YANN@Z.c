/*
 * XREFs of ?floor@@YANN@Z @ 0x1C002D668
 * Callers:
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C0034818 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C0034940 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall floor(double a1)
{
  int v1; // eax

  v1 = (int)a1;
  if ( a1 < 0.0 )
    return (double)((int)((double)(1 - v1) + a1) - (1 - v1));
  return (double)v1;
}
