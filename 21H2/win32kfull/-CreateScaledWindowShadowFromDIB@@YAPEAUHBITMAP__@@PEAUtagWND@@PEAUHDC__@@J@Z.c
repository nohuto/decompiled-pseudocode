/*
 * XREFs of ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0239218
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012E518 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall CreateScaledWindowShadowFromDIB(struct tagWND *a1, HDC a2, int a3)
{
  HDC DCEx; // rax
  HDC v7; // rbx
  __m128i v8; // xmm1
  __int64 v9; // rdx
  unsigned int v10; // r12d
  int v11; // r13d
  __int64 CompatibleBitmapInternal; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CompatibleDC; // rax
  HDC v17; // rbp
  __int64 v18; // rdi
  int v19; // ebx

  DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
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
  CompatibleDC = GreCreateCompatibleDC(a2, v13, v14, v15);
  v17 = (HDC)CompatibleDC;
  if ( !CompatibleDC
    || (v18 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal),
        v19 = GreStretchBltInternal(v17, 0, 0, v10, v11, a2, 0, 0, a3 * v10, a3 * v11, 13369376, 0, 0),
        GreSelectBitmap(v17, v18),
        GreDeleteDC(v17),
        !v19) )
  {
    GreDeleteObject(CompatibleBitmapInternal);
    return 0LL;
  }
  return CompatibleBitmapInternal;
}
