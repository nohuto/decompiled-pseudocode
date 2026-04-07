/*
 * XREFs of ?RoundToNearestInt@@YAHN@Z @ 0x1800954D8
 * Callers:
 *     ?GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x180098280 (-GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ceil_0 @ 0x180058126 (ceil_0.c)
 *     floor_0 @ 0x18005814A (floor_0.c)
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
