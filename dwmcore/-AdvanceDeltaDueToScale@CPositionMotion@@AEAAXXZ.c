void __fastcall CPositionMotion::AdvanceDeltaDueToScale(CPositionMotion *this)
{
  float v1; // xmm0_4
  float v2; // xmm3_4

  v1 = *((float *)this + 37);
  v2 = *(float *)&FLOAT_1_0;
  if ( v1 > 0.0 )
    v2 = *((float *)this + 30) / v1;
  *((float *)this + 35) = (float)((float)((float)(*((float *)this + 36) - *((float *)this + 32)) * v2)
                                + *((float *)this + 32))
                        - *((float *)this + 36);
}
