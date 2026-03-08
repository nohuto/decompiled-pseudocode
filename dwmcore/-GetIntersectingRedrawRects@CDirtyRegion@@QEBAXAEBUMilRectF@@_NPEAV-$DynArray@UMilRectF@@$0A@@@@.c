/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801CABDC
 * Callers:
 *     ?GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801C1390 (-GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180049030 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ @ 0x180086880 (-GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1801EE758 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(__int64 a1, _DWORD *a2, char a3, __int64 a4)
{
  unsigned int v8; // esi
  _DWORD *v9; // rdx
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // r14d
  _QWORD *v25; // r15
  _QWORD *v26; // rsi
  __m128i v27; // xmm1
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  const struct CBackdropVisualImageKey *BVIKeyForCurrentWalk; // rax
  bool v36; // r9
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rcx
  unsigned int i; // esi
  float v44; // xmm4_4
  float v45; // xmm1_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  float *v48; // rax
  float v49; // xmm2_4
  float v50; // xmm2_4
  float v51; // xmm2_4
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // edx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // [rsp+30h] [rbp-30h]
  _DWORD *v58; // [rsp+38h] [rbp-28h]
  __m128i v59; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)(a4 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a4, 0x10u);
  if ( *(_BYTE *)(a1 + 4424) )
  {
    if ( a3 && COcclusionContext::IsCurrent((COcclusionContext *)(a1 + 16)) )
    {
      v8 = 0;
      if ( *(_DWORD *)(a1 + 2496) )
      {
        v9 = a2 + 1;
        v58 = a2 + 1;
        do
        {
          v10 = *(float *)a2;
          v11 = *(float *)v9;
          v12 = *((float *)a2 + 2);
          v13 = *((float *)a2 + 3);
          v59.m128i_i64[0] = __PAIR64__(*v9, *a2);
          v59.m128i_i64[1] = __PAIR64__(LODWORD(v13), LODWORD(v12));
          v14 = *(float *)(a1 + 16LL * v8 + 2532);
          if ( v14 > v10 )
          {
            v59.m128i_i32[0] = *(_DWORD *)(a1 + 16LL * v8 + 2532);
            v10 = v14;
          }
          v15 = *(float *)(a1 + 16LL * v8 + 2536);
          if ( v15 > v11 )
          {
            v59.m128i_i32[1] = *(_DWORD *)(a1 + 16LL * v8 + 2536);
            v11 = v15;
          }
          v16 = *(float *)(a1 + 16LL * v8 + 2540);
          if ( v12 > v16 )
          {
            v59.m128i_i32[2] = *(_DWORD *)(a1 + 16LL * v8 + 2540);
            v12 = v16;
          }
          v17 = *(float *)(a1 + 16LL * v8 + 2544);
          if ( v13 > v17 )
          {
            v59.m128i_i32[3] = *(_DWORD *)(a1 + 16LL * v8 + 2544);
            v13 = v17;
          }
          if ( v12 <= v10 || v13 <= v11 )
            v59 = 0uLL;
          if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
          {
            v19 = *(_DWORD *)(a4 + 24);
            v20 = v19 + 1;
            if ( v19 + 1 >= v19 )
            {
              if ( v20 > *(_DWORD *)(a4 + 20) )
              {
                v21 = DynArrayImpl<0>::AddMultipleAndSet(a4, 16, 1, &v59);
                if ( v21 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC0u, 0LL);
              }
              else
              {
                *(__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 24)) = v59;
                *(_DWORD *)(a4 + 24) = v20;
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
            }
            v9 = a2 + 1;
          }
          v23 = *(_DWORD *)(a1 + 2496);
          ++v8;
        }
        while ( v8 < v23 );
        v57 = 0;
        v24 = 0;
        if ( v23 )
        {
          do
          {
            v25 = (_QWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 4LL * v24 + 2500) + 114LL));
            v26 = (_QWORD *)*v25;
            if ( (_QWORD *)*v25 != v25 )
            {
              do
              {
                v27 = _mm_loadu_si128((const __m128i *)(v26 + 3));
                v28 = *(float *)a2;
                v29 = *(float *)v9;
                v30 = *((float *)a2 + 2);
                v31 = *((float *)a2 + 3);
                v59 = v27;
                v59.m128i_i32[0] = v27.m128i_i32[0];
                if ( v28 > *(float *)v27.m128i_i32 )
                {
                  *(float *)v59.m128i_i32 = v28;
                  *(float *)v27.m128i_i32 = v28;
                }
                v32 = *(float *)&v59.m128i_i32[1];
                if ( v29 > *(float *)&v59.m128i_i32[1] )
                {
                  *(float *)&v59.m128i_i32[1] = v29;
                  v32 = v29;
                }
                v33 = *(float *)&v59.m128i_i32[2];
                if ( *(float *)&v59.m128i_i32[2] > v30 )
                {
                  *(float *)&v59.m128i_i32[2] = v30;
                  v33 = v30;
                }
                v34 = *(float *)&v59.m128i_i32[3];
                if ( *(float *)&v59.m128i_i32[3] > v31 )
                {
                  *(float *)&v59.m128i_i32[3] = v31;
                  v34 = v31;
                }
                if ( v33 <= *(float *)v27.m128i_i32 || v34 <= v32 )
                {
                  v59 = 0uLL;
                  v58 = v9;
                }
                if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
                {
                  BVIKeyForCurrentWalk = COcclusionContext::GetBVIKeyForCurrentWalk((COcclusionContext *)(a1 + 16));
                  v37 = CDirtyRegionAnnotation::GetZ(
                          (CDirtyRegionAnnotation *)v26,
                          *(const struct CVisualTree **)a1,
                          BVIKeyForCurrentWalk,
                          v36);
                  if ( !COcclusionContext::IsOccluded(a1 + 16, (__int64)&v59, v37) )
                  {
                    v39 = *(_DWORD *)(a4 + 24);
                    v40 = v39 + 1;
                    if ( v39 + 1 >= v39 )
                    {
                      if ( v40 > *(_DWORD *)(a4 + 20) )
                      {
                        v41 = DynArrayImpl<0>::AddMultipleAndSet(a4, 16, 1, &v59);
                        if ( v41 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xC0u, 0LL);
                      }
                      else
                      {
                        *(__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 24)) = v59;
                        *(_DWORD *)(a4 + 24) = v40;
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024362, 0xB5u, 0LL);
                    }
                  }
                  v9 = v58;
                }
                v26 = (_QWORD *)*v26;
              }
              while ( v26 != v25 );
              v24 = v57;
            }
            v57 = ++v24;
          }
          while ( v24 < *(_DWORD *)(a1 + 2496) );
        }
      }
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 2496); ++i )
      {
        v44 = *(float *)a2;
        v45 = *((float *)a2 + 1);
        v46 = *((float *)a2 + 2);
        v47 = *((float *)a2 + 3);
        v59.m128i_i64[0] = __PAIR64__(LODWORD(v45), LODWORD(v44));
        v48 = (float *)(a1 + 16 * (i + 148LL));
        v59.m128i_i64[1] = __PAIR64__(LODWORD(v47), LODWORD(v46));
        v49 = *v48;
        if ( *v48 > v44 )
        {
          v59.m128i_i32[0] = *(__int32 *)v48;
          v44 = v49;
        }
        v50 = v48[1];
        if ( v50 > v45 )
        {
          v59.m128i_i32[1] = (__int32)v48[1];
          v45 = v50;
        }
        v51 = v48[2];
        if ( v46 > v51 )
        {
          v59.m128i_i32[2] = (__int32)v48[2];
          v46 = v51;
        }
        if ( v47 > v48[3] )
        {
          v47 = v48[3];
          *(float *)&v59.m128i_i32[3] = v47;
        }
        if ( v46 <= v44 || v47 <= v45 )
          v59 = 0uLL;
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
        {
          v53 = *(_DWORD *)(a4 + 24);
          v54 = v53 + 1;
          if ( v53 + 1 >= v53 )
          {
            if ( v54 > *(_DWORD *)(a4 + 20) )
            {
              v55 = DynArrayImpl<0>::AddMultipleAndSet(a4, 16, 1, &v59);
              if ( v55 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xC0u, 0LL);
            }
            else
            {
              *(__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 24)) = v59;
              *(_DWORD *)(a4 + 24) = v54;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
        }
      }
    }
  }
}
