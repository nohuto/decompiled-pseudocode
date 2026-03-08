/*
 * XREFs of ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1C01BA2B8
 * Callers:
 *     DpiRectContainsRectWithSubpixel @ 0x1C01BAA00 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01BAAFC (DpiRectIntersectsRectWithSubpixel.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00A35E4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00A3628 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01BB208 (ScaleDpiOffsetWithSubpixel.c)
 */

void __fastcall GetDpiRectWithSubpixel(
        __m128i *a1,
        const float *a2,
        const struct tagWND *a3,
        const struct tagWND *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  __m128i v8; // xmm1
  __int64 v12; // r8
  unsigned __int64 v13; // xmm0_8
  int v14; // edx
  int v15; // ecx
  float v16; // xmm1_4
  int v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+24h] [rbp-2Ch]
  __m128i v19; // [rsp+28h] [rbp-28h] BYREF
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF

  v8 = *a1;
  v12 = a1->m128i_i64[0];
  v13 = _mm_srli_si128(*a1, 8).m128i_u64[0];
  v14 = v13 - v12;
  v15 = HIDWORD(v13) - HIDWORD(a1->m128i_i64[0]);
  v17 = v13 - v12;
  v18 = v15;
  v19 = v8;
  v20 = 0LL;
  if ( a2 )
    v20 = *(_OWORD *)a2;
  if ( a3 && a4 && a3 != a4 )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(a4, v19.m128i_i32, (unsigned __int64)&v20);
    PhysicalToLogicalInPlaceRectWithSubpixel(a3, v19.m128i_i32, (unsigned __int64)&v20);
    ScaleDpiOffsetWithSubpixel(&v17, (float *)&v20 + 2, a3, a4);
    LODWORD(v12) = v19.m128i_i32[0];
    v15 = v18;
    v14 = v17;
  }
  v16 = (float)v19.m128i_i32[1] + *((float *)&v20 + 1);
  *a5 = (float)(int)v12 + *(float *)&v20;
  *a6 = v16;
  *a7 = (float)((float)v14 + *a5) + *((float *)&v20 + 2);
  *a8 = (float)((float)v15 + *a6) + *((float *)&v20 + 3);
}
