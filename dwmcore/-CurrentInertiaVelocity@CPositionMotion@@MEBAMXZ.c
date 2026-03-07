float __fastcall CPositionMotion::CurrentInertiaVelocity(CPositionMotion *this)
{
  return CPositionMotion::CurrentInertiaPanningVelocity(this)
       + (float)((float)(*((float *)this + 31) / *((float *)this + 37))
               * (float)(*((float *)this + 36) - *((float *)this + 32)));
}
