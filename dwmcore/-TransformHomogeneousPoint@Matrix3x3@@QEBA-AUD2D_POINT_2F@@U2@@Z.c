struct D2D_POINT_2F __fastcall Matrix3x3::TransformHomogeneousPoint(
        Matrix3x3 *this,
        struct D2D_POINT_2F a2,
        __int64 a3)
{
  _DWORD *v3; // r9
  struct D2D_POINT_2F result; // rax
  int v5; // xmm1_4
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a3;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Matrix3x3::TransformHomogeneousPoint)(
    this,
    &v6,
    _mm_unpacklo_ps((__m128)(unsigned int)a3, (__m128)HIDWORD(a3)).m128_u64[0],
    a2);
  result = (struct D2D_POINT_2F)v3;
  v5 = HIDWORD(v6);
  *v3 = v6;
  v3[1] = v5;
  return result;
}
