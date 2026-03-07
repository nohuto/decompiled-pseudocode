bool __fastcall CBackdropVisualImage::IsValid(CBackdropVisualImage *this)
{
  float v1; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm0_4
  bool result; // al

  result = *((_QWORD *)this + 18)
        && (float)(*((float *)this + 26) - *((float *)this + 24)) >= 1.0
        && (float)(*((float *)this + 27) - *((float *)this + 25)) >= 1.0
        && (v1 = *((float *)this + 462), v2 = *((float *)this + 464), v2 >= v1)
        && (v3 = *((float *)this + 465), v3 >= *((float *)this + 463))
        && (float)(v2 - v1) >= 1.0
        && (float)(v3 - *((float *)this + 463)) >= 1.0
        && *((double *)this + 15) > 0.5
        && *((double *)this + 16) > 0.5;
  return result;
}
