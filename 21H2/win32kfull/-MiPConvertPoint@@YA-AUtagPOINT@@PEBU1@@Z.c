/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01DBC98
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C016ABDA (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     MiPGetPhysicalRect @ 0x1C0110BD4 (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1)
{
  __m128i v2; // xmm7
  __int64 v3; // rdx
  __m128i v4; // xmm6
  int v5; // eax
  int v6; // eax
  __m128i v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h]

  v2 = *(__m128i *)MiPGetPhysicalRect(&v8);
  v4 = *GetScreenRect(&v8, v3);
  v5 = _mm_cvtsi128_si32(v4);
  LODWORD(v9) = EngMulDiv(
                  a1->x - v5,
                  _mm_cvtsi128_si32(_mm_srli_si128(v2, 8)),
                  _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - v5);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  HIDWORD(v9) = EngMulDiv(
                  a1->y - v6,
                  _mm_cvtsi128_si32(_mm_srli_si128(v2, 12)),
                  _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - v6);
  return (struct tagPOINT)v9;
}
