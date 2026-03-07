float __fastcall CProjectedShadowScene::CalculateBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(*((float *)this + 29), a2 * *((float *)this + 30));
  return fminf(*((float *)this + 28), v3);
}
