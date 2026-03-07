__int64 __fastcall InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        double *a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  struct _D3DCOLORVALUE v13; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v14[4]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v15; // [rsp+88h] [rbp-9h] BYREF
  int v16; // [rsp+90h] [rbp-1h]
  char v17; // [rsp+94h] [rbp+3h]
  _OWORD v18[4]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+47h] BYREF
  int v20; // [rsp+E0h] [rbp+4Fh]
  char v21; // [rsp+E4h] [rbp+53h]

  memset_0(v18, 0, sizeof(v18));
  v19 = 0LL;
  memset_0(v14, 0, sizeof(v14));
  v15 = 0LL;
  v8 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v13, a1);
  v21 = 1;
  v20 = 70;
  v18[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v13, a2);
  v16 = 70;
  v17 = 1;
  v14[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::InterpolateHsl(*a4, v10, (float *)v18, (float *)v14, (__int64)a3);
  v11 = _mm_loadu_si128((const __m128i *)Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(&v13, a3));
  LODWORD(a3[4].b) = 70;
  LOBYTE(a3[4].a) = 1;
  *(__m128i *)&a3->r = v11;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v19);
}
