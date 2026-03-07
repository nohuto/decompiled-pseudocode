__int64 __fastcall CreateScaledWindowShadowFromDIB(struct tagWND *a1, HDC a2, int a3)
{
  __int64 DCEx; // rax
  __int64 v7; // rbx
  __m128i v8; // xmm1
  __int64 v9; // rdx
  int v10; // r12d
  int v11; // r13d
  __int64 CompatibleBitmapInternal; // rsi
  __int64 CompatibleDC; // rax
  HDC v14; // rbp
  __int64 v15; // rdi
  int v16; // ebx

  DCEx = _GetDCEx(a1, 0LL, 3LL);
  v7 = DCEx;
  if ( !DCEx )
    return 0LL;
  v8 = *(__m128i *)(*((_QWORD *)a1 + 5) + 88LL);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  v10 = _mm_srli_si128(v8, 8).m128i_u32[0] - v9 + 5;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - HIDWORD(v9) + 5;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(DCEx, v10, v11, 0, 0LL, 0LL);
  _ReleaseDC(v7);
  if ( !CompatibleBitmapInternal )
    return 0LL;
  CompatibleDC = GreCreateCompatibleDC(a2);
  v14 = (HDC)CompatibleDC;
  if ( !CompatibleDC
    || (v15 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal),
        v16 = GreStretchBltInternal(v14, 0, 0, v10, v11, a2, 0, 0, a3 * v10, a3 * v11, 13369376, 0, 0),
        GreSelectBitmap(v14, v15),
        GreDeleteDC(v14),
        !v16) )
  {
    GreDeleteObject(CompatibleBitmapInternal);
    return 0LL;
  }
  return CompatibleBitmapInternal;
}
