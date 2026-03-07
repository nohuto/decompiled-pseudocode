float __fastcall CPositionMotion::AdvanceInertiaToTime(
        CPositionMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  struct CExpressionValueStack *v10; // rdx
  CMotion *v11; // rcx
  unsigned __int64 v12; // r8
  float v13; // xmm4_4
  float result; // xmm0_4

  *((float *)this + 30) = a7;
  *((float *)this + 31) = a8;
  *((float *)this + 32) = a9;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  result = CMotion::AdvanceInertiaToTime(v11, v10, v12, a5, a6, v13);
  *((_DWORD *)this + 37) = *((_DWORD *)this + 30);
  *((float *)this + 36) = result;
  return result;
}
