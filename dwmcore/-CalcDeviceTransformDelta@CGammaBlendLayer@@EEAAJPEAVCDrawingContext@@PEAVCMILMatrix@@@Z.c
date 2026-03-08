/*
 * XREFs of ?CalcDeviceTransformDelta@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801F1980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGammaBlendLayer::CalcDeviceTransformDelta(
        CGammaBlendLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm2
  __m128i v4; // xmm1
  char v5; // al

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 12) = _mm_cvtepi32_ps(v3).m128_u32[0] ^ _xmm;
  *(_QWORD *)((char *)a3 + 52) = _mm_cvtepi32_ps(v4).m128_u32[0] ^ (unsigned int)_xmm;
  *((_DWORD *)a3 + 15) = 1065353216;
  v5 = *((_BYTE *)a3 + 65) & 0xD7;
  *((_BYTE *)a3 + 64) = 84;
  *((_BYTE *)a3 + 65) = v5 | 0x17;
  return 0LL;
}
