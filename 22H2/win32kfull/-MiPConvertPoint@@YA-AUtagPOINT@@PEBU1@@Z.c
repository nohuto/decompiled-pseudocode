/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E0498
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01DFF2C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MiPGetPhysicalRect @ 0x1C01228DC (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C0122924 (GetScreenRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1)
{
  __m128i v2; // xmm7
  __m128i v3; // xmm6
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1) & 0xF) == 2 )
  {
    v7 = *(_QWORD *)(*gpDispInfo + 24LL);
    LODWORD(v10) = 2540 * (a1->x - (int)v7) / *(unsigned __int16 *)(gpsi + 6998LL);
    v6 = 2540 * (a1->y - HIDWORD(v7)) / *(unsigned __int16 *)(gpsi + 6998LL);
  }
  else
  {
    v2 = *(__m128i *)MiPGetPhysicalRect(&v9);
    v3 = *GetScreenRect(&v9);
    v4 = _mm_cvtsi128_si32(v3);
    LODWORD(v10) = EngMulDiv(
                     a1->x - v4,
                     _mm_cvtsi128_si32(_mm_srli_si128(v2, 8)),
                     _mm_cvtsi128_si32(_mm_srli_si128(v3, 8)) - v4);
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
    v6 = EngMulDiv(
           a1->y - v5,
           _mm_cvtsi128_si32(_mm_srli_si128(v2, 12)),
           _mm_cvtsi128_si32(_mm_srli_si128(v3, 12)) - v5);
  }
  HIDWORD(v10) = v6;
  return (struct tagPOINT)v10;
}
