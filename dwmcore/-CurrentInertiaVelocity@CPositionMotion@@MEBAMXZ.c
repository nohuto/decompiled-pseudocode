/*
 * XREFs of ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x18026C220
 * Callers:
 *     <none>
 * Callees:
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x18026C1A8 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 */

float __fastcall CPositionMotion::CurrentInertiaVelocity(CPositionMotion *this)
{
  return CPositionMotion::CurrentInertiaPanningVelocity(this)
       + (float)((float)(*((float *)this + 31) / *((float *)this + 37))
               * (float)(*((float *)this + 36) - *((float *)this + 32)));
}
