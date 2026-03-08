/*
 * XREFs of ?GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1801322B0
 * Callers:
 *     ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1801318A0 (-GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z @ 0x1800141B4 (-GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180014D84 (-CalcSourceRect@CBitmapRealization@@QEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CBitmapRealization::GetMPORects(
        CBitmapRealization *this,
        CMILMatrix *a2,
        float *a3,
        float *a4,
        float *a5)
{
  __m128i *v9; // rax
  unsigned __int64 v10; // xmm0_8
  float v11; // xmm4_4
  float v12; // xmm3_4
  int v13; // eax
  float v15[4]; // [rsp+20h] [rbp-48h] BYREF
  float v16; // [rsp+30h] [rbp-38h] BYREF
  float v17; // [rsp+34h] [rbp-34h]
  float v18; // [rsp+38h] [rbp-30h]
  float v19; // [rsp+3Ch] [rbp-2Ch]
  float v20[4]; // [rsp+40h] [rbp-28h] BYREF

  v9 = (__m128i *)CBitmapRealization::CalcSourceRect((__int64)this);
  v16 = 0.0;
  v17 = 0.0;
  v10 = _mm_srli_si128(*v9, 8).m128i_u64[0];
  v11 = (float)v9->m128i_i32[0];
  v12 = (float)(int)HIDWORD(v9->m128i_i64[0]);
  *a3 = v11;
  a3[1] = v12;
  a3[2] = (float)(int)v10;
  a3[3] = (float)SHIDWORD(v10);
  v18 = (float)(int)v10 - v11;
  v19 = (float)SHIDWORD(v10) - v12;
  CMILMatrix::Transform2DBoundsHelper<0>(a2, (struct MilRectF *)&v16, a5);
  v13 = *((_DWORD *)this + 58) & 0xC000;
  if ( v13 == 49152 )
  {
    CBitmapRealization::GetScaledLetterboxingMargins(this, (struct MilRectF *)v15);
    v20[0] = v16 - v15[0];
    v20[1] = v17 - v15[1];
    v20[2] = v15[2] + v18;
    v20[3] = v15[3] + v19;
    LOBYTE(v13) = CMILMatrix::Transform2DBoundsHelper<0>(a2, (struct MilRectF *)v20, a4);
  }
  else
  {
    *(_OWORD *)a4 = *(_OWORD *)a5;
  }
  return v13;
}
