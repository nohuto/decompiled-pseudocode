/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180006C38 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001E030 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     floor_0 @ 0x180057E2A (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct CBitmapSource *v2; // r8
  int v3; // edi
  int appended; // eax
  struct CBitmapSource *v7; // r8
  int *v8; // r14
  __m128 *v9; // rax
  int v10; // r12d
  int v11; // r13d
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm10_4
  float v19; // xmm14_4
  float v20; // xmm9_4
  float v21; // xmm14_4
  double v22; // xmm0_8
  int v23; // eax
  __m128 v24; // xmm6
  __m128i v25; // xmm2
  float v26; // xmm2_4
  char v27; // r15
  float v28; // xmm0_4
  float v29; // xmm3_4
  bool v30; // zf
  float v31; // xmm4_4
  __m128 v32; // xmm6
  float v33; // xmm5_4
  __m128 v34; // xmm6
  float v35; // xmm7_4
  __m128 v36; // xmm6
  char v37; // r14
  __int64 v38; // rax
  unsigned int v39; // edx
  __m128 v40; // xmm0
  __int64 v41; // rcx
  const RECT *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // eax
  LONG *v47; // r9
  unsigned int v48; // r8d
  struct tagRECT *v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int128 v56; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v57; // [rsp+40h] [rbp-C0h] BYREF
  __m128 v58; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, appended, 0x25Fu);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x22Fu);
    return (unsigned int)v3;
  }
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 16);
  if ( v7 )
  {
    v3 = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v7);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x233u);
      return (unsigned int)v3;
    }
  }
  v8 = (int *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    v9 = (__m128 *)*((_QWORD *)this + 9);
    v10 = *((_DWORD *)this + 4);
    v11 = *((_DWORD *)this + 5);
    v12 = (float)*((int *)this + 6);
    v13 = (float)*((int *)this + 7);
    v58 = 0LL;
    if ( v9 )
      v58 = v9[4];
    v14 = (float)v8[6];
    v15 = (float)v8[7];
    if ( v14 > 0.0 && v15 > 0.0 )
    {
      v16 = v12 - (float)(v58.m128_i32[0] + v58.m128_i32[1]);
      v17 = v13 - (float)(v58.m128_i32[2] + v58.m128_i32[3]);
      v18 = (float)v58.m128_i32[2] + (float)v11;
      if ( v16 <= 0.0 )
        v16 = 0.0;
      if ( v17 <= 0.0 )
        v17 = 0.0;
      v19 = fminf(1.0, fminf(v16 / v14, v17 / v15));
      v20 = v19 * v15;
      v21 = v19 * v14;
      v22 = floor_0((float)((float)(v16 - v21) * 0.5) + 0.5);
      v24 = 0LL;
      v23 = *((_DWORD *)this + 36);
      v24.m128_f32[0] = (float)(int)v22 + (float)((float)v58.m128_i32[0] + (float)v10);
      if ( v23 )
      {
        if ( v23 == 2 )
        {
          v26 = (float)(v18 + v17) - (float)((float)*((int *)this + 37) + v20);
          goto LABEL_19;
        }
        v25 = _mm_cvtsi32_si128((int)floor_0((float)((float)(v17 - v20) * 0.5) + 0.5));
      }
      else
      {
        v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 37));
      }
      v26 = _mm_cvtepi32_ps(v25).m128_f32[0] + v18;
LABEL_19:
      v27 = *((_BYTE *)this + 152);
      v28 = v24.m128_f32[0] + v21;
      v29 = (float)v8[20];
      v3 = 0;
      v30 = *((_DWORD *)this + 12) == 0x80000000;
      v31 = (float)v8[21];
      v32 = _mm_shuffle_ps(v24, v24, 225);
      v33 = (float)v8[22];
      v32.m128_f32[0] = v26;
      *(float *)&v56 = v29;
      v34 = _mm_shuffle_ps(v32, v32, 198);
      v35 = (float)v8[23];
      v34.m128_f32[0] = v28;
      *(_QWORD *)((char *)&v56 + 4) = __PAIR64__(LODWORD(v33), LODWORD(v31));
      v36 = _mm_shuffle_ps(v34, v34, 39);
      v36.m128_f32[0] = v26 + v20;
      v58 = _mm_shuffle_ps(v36, v36, 57);
      v57 = v58;
      *((float *)&v56 + 3) = v35;
      if ( v30
        && *((_DWORD *)this + 13) == 0x80000000
        && *((_DWORD *)this + 14) == 0x7FFFFFFF
        && *((_DWORD *)this + 15) == 0x7FFFFFFF )
      {
        v37 = 0;
        if ( !a2[12] )
          goto LABEL_24;
      }
      else
      {
        v37 = 1;
      }
      rc = (struct tagRECT)*((_OWORD *)this + 3);
      OffsetRect(&rc, v10, v11);
      v50 = (struct tagRECT *)a2[12];
      if ( v50 )
      {
        if ( v37 )
          IntersectRect(&rc, &rc, a2[12]);
        else
          rc = *v50;
      }
      ClipRectAndSimilarRect(&rc.left, v57.m128_f32, (float *)&v56);
      v33 = *((float *)&v56 + 2);
      v31 = *((float *)&v56 + 1);
      LODWORD(v29) = v56;
      v35 = *((float *)&v56 + 3);
LABEL_24:
      if ( (float)(v57.m128_f32[2] - v57.m128_f32[0]) <= 0.0 || (float)(v57.m128_f32[3] - v57.m128_f32[1]) <= 0.0 )
        goto LABEL_37;
      v38 = *((unsigned int *)a2 + 6);
      v39 = v38 + 1;
      if ( !v27 )
      {
        if ( v39 < (unsigned int)v38 )
        {
          v3 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          goto LABEL_63;
        }
        if ( v39 <= *((_DWORD *)a2 + 5) )
        {
          v40 = (__m128)v56;
          v41 = (unsigned int)v38;
          v42 = *a2;
          v43 = v41;
LABEL_30:
          v42[v43] = (const RECT)v40;
          *((_DWORD *)a2 + 6) = v39;
          goto LABEL_31;
        }
        v53 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v56);
        v3 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0xC0u);
        if ( v3 < 0 )
        {
LABEL_63:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x35Du);
          goto LABEL_37;
        }
LABEL_31:
        v44 = *((_DWORD *)a2 + 14);
        v45 = v44 + 1;
        if ( v44 + 1 < v44 )
        {
          v3 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else
        {
          if ( v45 <= *((_DWORD *)a2 + 13) )
          {
            a2[4][v44] = (const RECT)v57;
            *((_DWORD *)a2 + 14) = v45;
LABEL_34:
            v46 = *((_DWORD *)a2 + 22);
            v47 = (LONG *)((char *)this + 68);
            v48 = v46 + 1;
            if ( v46 + 1 < v46 )
            {
              v3 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
            }
            else
            {
              if ( v48 <= *((_DWORD *)a2 + 21) )
              {
                v3 = 0;
                *(&a2[8]->left + v46) = *v47;
                *((_DWORD *)a2 + 22) = v48;
                goto LABEL_37;
              }
              v55 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 8, 4LL, 1LL, v47);
              v3 = v55;
              if ( v55 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v55, 0xC0u);
              if ( v3 >= 0 )
                goto LABEL_37;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x361u);
LABEL_37:
            if ( v3 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x277u);
            return (unsigned int)v3;
          }
          v54 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 4, 16LL, 1LL, &v57);
          v3 = v54;
          if ( v54 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, 0xC0u);
          if ( v3 >= 0 )
            goto LABEL_34;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x360u);
        goto LABEL_37;
      }
      v58.m128_u64[0] = __PAIR64__(LODWORD(v31), LODWORD(v33));
      v58.m128_u64[1] = __PAIR64__(LODWORD(v35), LODWORD(v29));
      if ( v39 >= (unsigned int)v38 )
      {
        if ( v39 <= *((_DWORD *)a2 + 5) )
        {
          v40 = v58;
          v51 = v38;
          v42 = *a2;
          v43 = v51;
          goto LABEL_30;
        }
        v52 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v58);
        v3 = v52;
        if ( v52 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0xC0u);
        if ( v3 >= 0 )
          goto LABEL_31;
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x359u);
      goto LABEL_37;
    }
  }
  return (unsigned int)v3;
}
