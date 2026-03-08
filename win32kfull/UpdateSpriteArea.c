/*
 * XREFs of UpdateSpriteArea @ 0x1C00DC4C4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C002E7A8 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00DC7AC (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02AFFC4 (GreConvertRedirectionToMemDC.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        const struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        __int64 a5,
        __int64 a6,
        struct tagRECT *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _UNKNOWN **result; // rax
  __int64 v13; // r15
  __int64 v15; // rdx
  bool v18; // zf
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __m128i v21; // xmm6
  __int64 v22; // r8
  LONG v23; // ecx
  int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // r8
  int v27; // [rsp+78h] [rbp-90h]
  int v28; // [rsp+88h] [rbp-80h]
  unsigned int v29; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v30; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v31; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v32; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  struct tagRECT v38; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v15 = *((_QWORD *)a1 + 5);
  v38 = 0LL;
  v33 = a3;
  v34 = a5;
  v18 = (*(_BYTE *)(v15 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v15 + 88);
  v20 = *(_DWORD *)(v15 + 92);
  v30 = v19;
  v29 = v20;
  v35 = a6;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    v38 = *a7;
    v21 = (__m128i)v38;
    v32.cx = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
    v23 = *(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92);
    v38.bottom += v22;
    v38.right -= v19;
    v38.top += v22;
    v32.cy = v23;
    v37 = v21.m128i_i64[1];
    v38.left = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19, v22);
    v28 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v36 = GreSelectBitmap(a5, a3);
    if ( (HDC)a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v24 = GreConvertMemToRedirectionDC(a4);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      v33,
      (unsigned int)v38.left,
      v38.top,
      v38.right,
      v38.bottom,
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      a2,
      v28,
      v21.m128i_i32[1] - a11 + a9,
      v38.right + v28 - v38.left,
      v38.bottom + v21.m128i_i32[1] - a11 + a9 - v38.top,
      v21.m128i_i32[1] - a11 + a9);
    v25 = v34;
    NtGdiBitBltInternal(
      a4,
      v38.left,
      v38.top,
      v38.right - v38.left,
      v38.bottom - v38.top,
      v34,
      v28,
      v27,
      -2134114272,
      0,
      0);
    if ( v24 )
      GreConvertRedirectionToMemDC(a4);
    v31 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v26, 0LL, 0LL, &v32, a4, &v31, 0, 0LL, 0x40000000u, &v38);
    GreSelectVisRgn(a4, v35, 4LL);
    GreOffsetRgn(v35, v30, v29);
    result = (_UNKNOWN **)GreSelectBitmap(v25, v36);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}
