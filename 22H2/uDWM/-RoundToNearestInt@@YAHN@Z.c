/*
 * XREFs of ?RoundToNearestInt@@YAHN@Z @ 0x180095268
 * Callers:
 *     ?GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x180098010 (-GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ceil_0 @ 0x180057E06 (ceil_0.c)
 *     floor_0 @ 0x180057E2A (floor_0.c)
 */

__int64 __fastcall RoundToNearestInt(double a1)
{
  double v1; // xmm0_8

  if ( a1 < 0.0 )
    v1 = ceil_0(a1 - 0.5);
  else
    v1 = floor_0(a1 + 0.5);
  return (unsigned int)(int)v1;
}
