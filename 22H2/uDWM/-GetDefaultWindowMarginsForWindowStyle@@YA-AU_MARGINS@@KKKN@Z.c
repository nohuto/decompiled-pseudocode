/*
 * XREFs of ?GetDefaultWindowMarginsForWindowStyle@@YA?AU_MARGINS@@KKKN@Z @ 0x18000FAA0
 * Callers:
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x18000F960 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall GetDefaultWindowMarginsForWindowStyle(
        struct _MARGINS *__return_ptr retstr,
        int a2,
        char a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  int v5; // r13d
  __m128d v6; // xmm6
  __int64 v10; // rdi
  int v11; // esi
  int v12; // ebp
  int SystemMetricsForDpi; // eax
  __int64 v14; // rcx
  int v15; // r14d
  int v16; // eax

  v5 = a2 & 0xC00000;
  v6 = _mm_unpacklo_pd((__m128d)a5, (__m128d)a5);
  *retstr = 0LL;
  if ( (a2 & 0xC00000) == 0xC00000 )
    retstr->cyTopHeight = GetSystemMetricsForDpi(a3 < 0 ? 51 : 4, a4);
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (a2 & 0x40000) != 0 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(32LL, a4);
    v14 = 33LL;
  }
  else
  {
    if ( (a2 & 0x800000) == 0 )
      goto LABEL_6;
    SystemMetricsForDpi = GetSystemMetricsForDpi(5LL, a4);
    v14 = 6LL;
  }
  v11 = SystemMetricsForDpi;
  v12 = GetSystemMetricsForDpi(v14, a4);
LABEL_6:
  if ( v5 == 12582912 || (v15 = 0, (a2 & 0x40000) != 0) )
    v15 = 1;
  v16 = GetSystemMetricsForDpi(92LL, a4);
  if ( v16 > 0 && v15 )
  {
    v11 += v16;
    v12 += v16;
  }
  retstr->cxLeftWidth += v11;
  retstr->cxRightWidth += v11;
  retstr->cyTopHeight += v12;
  retstr->cyBottomHeight += v12;
  if ( *(double *)&a5 != 1.0 )
  {
    do
    {
      *(_QWORD *)(&retstr->cxLeftWidth + v10) = _mm_cvttpd_epi32(
                                                  _mm_div_pd(
                                                    _mm_cvtepi32_pd(_mm_loadl_epi64((const __m128i *)(&retstr->cxLeftWidth + v10))),
                                                    v6)).m128i_u64[0];
      v10 += 2LL;
    }
    while ( v10 < 4 );
  }
  return retstr;
}
