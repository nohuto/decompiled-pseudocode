/*
 * XREFs of ?SetDuration@CCubicBezierInterpolator@@UEAAJN@Z @ 0x180043D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::SetDuration(CCubicBezierInterpolator *this, double a2)
{
  *((double *)this + 1) = a2;
  return 0LL;
}
