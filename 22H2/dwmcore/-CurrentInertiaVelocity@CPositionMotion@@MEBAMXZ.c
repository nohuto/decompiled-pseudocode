/*
 * XREFs of ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x18020F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18020F150 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 */

float __fastcall CPositionMotion::CurrentInertiaVelocity(CPositionMotion *this)
{
  return CScaleMotion::CurrentInertiaVelocity(this)
       + (float)((float)(*((float *)this + 41) / *((float *)this + 47))
               * (float)(*((float *)this + 46) - *((float *)this + 42)));
}
