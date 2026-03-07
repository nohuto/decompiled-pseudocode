__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  bool v1; // zf
  int v3; // eax
  bool IsHardwareProtected; // al
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  struct D2D_SIZE_U v12[2]; // [rsp+48h] [rbp-69h] BYREF
  __m128i v13; // [rsp+58h] [rbp-59h] BYREF
  __int64 v14; // [rsp+68h] [rbp-49h] BYREF
  int v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+74h] [rbp-3Dh]
  int v17; // [rsp+78h] [rbp-39h]
  bool v18; // [rsp+7Ch] [rbp-35h]
  _BYTE v19[64]; // [rsp+88h] [rbp-29h] BYREF
  int v20; // [rsp+C8h] [rbp+17h]
  __int128 v21; // [rsp+D8h] [rbp+27h] BYREF
  __m128i v22; // [rsp+E8h] [rbp+37h] BYREF

  v1 = (*((_DWORD *)this + 58) & 0x4000) == 0;
  v21 = 0LL;
  if ( v1 )
  {
    v21 = *(_OWORD *)((char *)this + 148);
    v22 = *(__m128i *)((char *)this + 216);
    v12[0] = *(struct D2D_SIZE_U *)((char *)this + 208);
  }
  else
  {
    v20 = 0;
    v13 = 0uLL;
    v12[0] = 0LL;
    v12[1] = 0LL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(this, (CMILMatrix *)v19, &v13, v12);
    v21 = *(_OWORD *)&v12[0].width;
    v22 = v13;
    v12[0].width = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8)) - _mm_cvtsi128_si32(v13);
    v12[0].height = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
  }
  CDxHandleYUVBitmapRealization::GetAdapterLuid((CDxHandleYUVBitmapRealization *)((char *)this + 480), &v14);
  v3 = *((_DWORD *)this + 70);
  v17 = 0;
  v15 = v3;
  v16 = 0;
  IsHardwareProtected = CDxHandleYUVBitmapRealization::IsHardwareProtected((CDxHandleYUVBitmapRealization *)((char *)this + 480));
  v5 = *((_DWORD *)this + 36);
  v18 = IsHardwareProtected;
  if ( IsDXGIColorSpaceRec2020(v5)
    && *((int *)CDxHandleYUVBitmapRealization::GetDevice((CDxHandleYUVBitmapRealization *)((char *)this + 480)) + 146) >= 40960 )
  {
    v17 = (int)FLOAT_1_0;
    v13.m128i_i64[0] = 0x30000000ALL;
    v13.m128i_i32[2] = 1;
  }
  else
  {
    v13.m128i_i32[0] = 28;
    *(__int64 *)((char *)v13.m128i_i64 + 4) = 3LL;
  }
  v6 = CDecodeBitmap::EnsureTargetBitmap(
         *((CDecodeBitmap **)this + 36),
         v12,
         (const struct PixelFormatInfo *)&v13,
         (const struct RenderTargetInfo *)&v14);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2A7u, 0LL);
  }
  else
  {
    v9 = CDecodeBitmap::VideoProcessorBlt(
           *((_QWORD *)this + 36) + 120LL,
           *(_QWORD *)(*((_QWORD *)this + 47) + 96LL),
           *((unsigned int *)this + 68),
           *((unsigned int *)this + 36),
           &v21,
           1,
           0LL,
           &v22,
           *(_QWORD *)v12);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2B6u, 0LL);
  }
  return v8;
}
