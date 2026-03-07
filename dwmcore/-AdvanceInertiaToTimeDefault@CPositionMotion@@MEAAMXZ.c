float __fastcall CPositionMotion::AdvanceInertiaToTimeDefault(CPositionMotion *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4

  v2 = CPositionMotion::UnboundedInertiaPanningAtTime(this, fminf(*((float *)this + 6), *((float *)this + 17)));
  v3 = v2 - *((float *)this + 29);
  *((float *)this + 29) = v2;
  v4 = *((float *)this + 36) + *((float *)this + 35);
  *((float *)this + 28) = v3;
  *((float *)this + 5) = v4 + v3;
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
