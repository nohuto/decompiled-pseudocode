float __fastcall CPositionMotion::CalculateInContactValue(
        CPositionMotion *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm4_4
  float result; // xmm0_4

  *((float *)this + 7) = a5;
  *((float *)this + 16) = a2;
  *((float *)this + 32) = a7;
  *((float *)this + 9) = a3;
  *((float *)this + 30) = a6;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  v8 = *(float *)(v7 + 140) + *(float *)(v7 + 144);
  *(_DWORD *)(v7 + 148) = *(_DWORD *)(v7 + 120);
  result = v8 + v9;
  *(float *)(v7 + 144) = result;
  return result;
}
