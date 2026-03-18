/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01DF8D4
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F4690 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     ExpandedMonitorSpace @ 0x1C01DEC3C (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01DEE98 (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  __m128i v7; // xmm6
  __int64 v8; // rax
  __m128i v9; // xmm7
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int i; // ecx
  unsigned int v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) == 2 )
  {
    result = 1LL;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v7 = *(__m128i *)GetMonitorRect((__int64)&v15, a1);
    v8 = *(_QWORD *)(a1 + 40);
    v15 = 0LL;
    v9 = *(__m128i *)(v8 + 28);
    ExpandedMonitorSpace((__int64 *)&v15, v10, v11, v12);
    v16 = (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8))
         - _mm_cvtsi128_si32(*(__m128i *)(*gpDispInfo + 24LL)))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7));
    v14 = (DWORD2(v15) - v15) * (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9));
    ReduceFraction(&v16, &v14);
    result = v16;
    for ( i = v14; (unsigned int)result > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      result = (unsigned int)result >> 1;
    if ( !i || !(_DWORD)result )
    {
      result = 1LL;
      i = 1;
    }
    *a2 = result;
    *a3 = i;
  }
  return result;
}
