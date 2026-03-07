float __fastcall CProjectedShadowScene::CalculateOpacity(CProjectedShadowScene *this, float a2)
{
  float v2; // xmm2_4
  float v4; // xmm0_4

  v2 = *((float *)this + 33);
  if ( v2 <= 0.0 )
    return *((float *)this + 31);
  v4 = fmaxf(*((float *)this + 32), 1.0 - (float)(a2 / v2));
  return fminf(*((float *)this + 31), v4);
}
