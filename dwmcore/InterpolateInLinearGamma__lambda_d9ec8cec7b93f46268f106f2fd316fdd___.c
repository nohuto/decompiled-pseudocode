__int64 __fastcall InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        __int64 a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  int v10; // ecx
  float v11; // xmm1_4
  __m128i v12; // xmm0
  struct _D3DCOLORVALUE v14; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+80h] [rbp-29h] BYREF
  int v17; // [rsp+88h] [rbp-21h]
  char v18; // [rsp+8Ch] [rbp-1Dh]
  _OWORD v19[4]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+27h] BYREF
  int v21; // [rsp+D8h] [rbp+2Fh]
  char v22; // [rsp+DCh] [rbp+33h]

  memset_0(v19, 0, sizeof(v19));
  v20 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v16 = 0LL;
  v8 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v14, a1);
  v22 = 1;
  v21 = 70;
  v19[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v14, a2);
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(double *)a4;
  v17 = 70;
  v18 = 1;
  v15[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::ExpressionValueLerp(v10, v11, (__int64)v19, (__int64)v15, (__int64)a3);
  v12 = _mm_loadu_si128((const __m128i *)Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(&v14, a3));
  LODWORD(a3[4].b) = 70;
  LOBYTE(a3[4].a) = 1;
  *(__m128i *)&a3->r = v12;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v16);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v20);
}
