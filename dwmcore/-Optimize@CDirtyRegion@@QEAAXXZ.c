/*
 * XREFs of ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180074E70
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x1800C4268 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180210C84 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x1800772F0 (-AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800C4210 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x1800E9090 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x1801CB088 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

void __fastcall CDirtyRegion::Optimize(CDirtyRegion *this)
{
  int v2; // edx
  bool v3; // zf
  unsigned int v4; // esi
  unsigned int i; // r14d
  __int64 v6; // r15
  __m128 *v7; // rbp
  __int64 v8; // r11
  float *v9; // r10
  __int64 v10; // r12
  float *v11; // rdi
  __int64 v12; // r10
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  __int64 v15; // r11
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float *v20; // r8
  bool v21; // cc
  __int64 v22; // r10
  bool v23; // al
  float v24; // xmm1_4
  float v25; // xmm2_4
  __int64 v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rbp
  float *v29; // rdx
  float *v30; // rcx
  __int64 v31; // r9
  float *v32; // r8
  float v33; // xmm1_4
  char v34; // al
  __int64 v35; // r10
  __int64 v36; // rcx
  unsigned int v37; // r11d
  float *v38; // rdx
  float v39; // xmm4_4
  float v40; // xmm8_4
  float v41; // xmm0_4
  float v42; // xmm5_4
  float v43; // xmm1_4
  float v44; // xmm6_4
  float v45; // xmm3_4
  float *v46; // r8
  float *v47; // r9
  float *v48; // r10
  unsigned int v49; // edx
  __int64 v50; // rcx
  float v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  float v71; // xmm2_4
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm2_4
  CDirtyRegion *v78; // rcx
  float v79; // xmm0_4
  __int64 v80; // rcx
  float *v81; // rax
  __int64 v82; // r9
  __m128 v83; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v84; // [rsp+30h] [rbp-C8h]

  if ( *((_BYTE *)this + 4420) )
  {
    v2 = 1;
    goto LABEL_3;
  }
  v4 = 0;
  memset_0((char *)this + 2660, 0, 0x80uLL);
LABEL_9:
  for ( i = 0; i < 8; ++i )
  {
LABEL_10:
    v6 = i;
    v7 = (__m128 *)((char *)this + 16 * i + 1568);
    if ( v7->m128_f32[2] > v7->m128_f32[0] && v7->m128_f32[3] > v7->m128_f32[1] )
    {
      v8 = i + 1;
      if ( (unsigned int)v8 < 8 )
      {
        v9 = (float *)((char *)this + 16 * (unsigned int)v8 + 1576);
        v10 = (unsigned int)v8;
        v11 = (float *)((char *)this + 32 * v8 + 4 * i + 2080);
        while ( 1 )
        {
          if ( *v9 > *(v9 - 2) && v9[1] > *(v9 - 1) )
          {
            if ( *((_BYTE *)this + 4423)
              || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                   (float *)this + 4 * i + 392,
                   (float *)this + 4 * (unsigned int)v8 + 392)
              || *v11 >= 0.86000001 )
            {
              break;
            }
            v83 = *v7;
            v84 = v83;
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v83.m128_f32, (float *)(v12 - 8));
            if ( *v38 > v39 )
              v39 = *v38;
            v40 = v84.m128_f32[1];
            v41 = v84.m128_f32[1];
            if ( *(v9 - 1) > v84.m128_f32[1] )
            {
              v40 = *(v9 - 1);
              v41 = v40;
            }
            v42 = v84.m128_f32[2];
            v43 = v84.m128_f32[2];
            if ( v84.m128_f32[2] > *v9 )
            {
              v42 = *v9;
              v43 = *v9;
            }
            v44 = v9[1];
            v45 = v84.m128_f32[3];
            if ( v84.m128_f32[3] > v44 )
              v45 = v9[1];
            if ( v43 <= v39 || v45 <= v41 )
            {
              v42 = 0.0;
              v40 = 0.0;
              v39 = 0.0;
              v45 = 0.0;
            }
            if ( fmaxf(
                   (float)((float)(v83.m128_f32[2] - v83.m128_f32[0]) * (float)(v83.m128_f32[3] - v83.m128_f32[1]))
                 - (float)((float)((float)((float)(v7->m128_f32[3] - v7->m128_f32[1])
                                         * (float)(v7->m128_f32[2] - v7->m128_f32[0]))
                                 + (float)((float)(v44 - *(v9 - 1)) * (float)(*v9 - *v38)))
                         - (float)((float)(v42 - v39) * (float)(v45 - v40))),
                   0.0) < 50000.0 )
              break;
          }
          LODWORD(v8) = v8 + 1;
          v11 += 8;
          v9 += 4;
          if ( (unsigned int)v8 >= 8 )
          {
            ++i;
            goto LABEL_10;
          }
        }
        v13 = 16LL * (unsigned int)v8;
        v14 = (unsigned int)v8;
        v84.m128_u64[0] = (unsigned int)v8;
        v83 = *((__m128 *)this + i + 98);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
          v83.m128_f32,
          (float *)((char *)this + v13 + 1568));
        v16 = v83.m128_f32[0];
        v17 = v83.m128_f32[3];
        v18 = v83.m128_f32[1];
        v19 = _mm_shuffle_ps(v83, v83, 170).m128_f32[0];
        v20 = (float *)((char *)this + 16 * i + 1952);
        v21 = v19 <= v83.m128_f32[0];
        *(__m128 *)((char *)this + 8 * v22) = v83;
        v23 = v21 || v17 <= v18;
        *((_BYTE *)v20 + 12) = v23;
        v24 = v17 - v18;
        v25 = v19 - v16;
        v20[2] = v24 * v25;
        v20[1] = (float)(v24 * 0.5) + v18;
        *v20 = (float)(v25 * 0.5) + v16;
        *((_DWORD *)this + 4 * v15 + 488) = 0;
        v26 = 2 * (v15 + 98);
        *((_BYTE *)this + v13 + 1964) = 1;
        *(_QWORD *)((char *)this + v13 + 1956) = 0LL;
        *((_QWORD *)this + v26 + 1) = 0LL;
        *((_QWORD *)this + v26) = 0LL;
        if ( i )
        {
          v78 = 0LL;
          v6 = i;
          v84.m128_u64[0] = v14;
          do
          {
            v79 = CDirtyRegion::CalcAcceleration(
                    v78,
                    (const struct CDirtyRegion::DirtyRegionCachedData *)((char *)this + (_QWORD)v78 + 1952),
                    (const struct CDirtyRegion::DirtyRegionCachedData *)v20);
            v78 = (CDirtyRegion *)(v80 + 16);
            *v81 = v79;
          }
          while ( v82 != 1 );
        }
        v27 = i + 1;
        if ( 8 - (i + 1) >= 6 )
        {
          v46 = (float *)((char *)this + 16 * v6 + 1952);
          v47 = (float *)((char *)this + 16 * v10 + 1956);
          v48 = (float *)((char *)this + 32 * v10 + 4 * v6 + 2112);
          v49 = (2 - v27) / 6 + 1;
          v50 = v49;
          v28 = v10 + 6LL * v49;
          v27 += 6 * v49;
          do
          {
            v51 = 0.0;
            if ( *((_BYTE *)v47 + 8) )
            {
              if ( !*((_BYTE *)v46 + 12) )
                v51 = FLOAT_3_4028235e38;
            }
            else if ( !*((_BYTE *)v46 + 12) )
            {
              v72 = (float)((float)(*v47 - v46[1]) * (float)(*v47 - v46[1]))
                  + (float)((float)(*(v47 - 1) - *v46) * (float)(*(v47 - 1) - *v46));
              if ( v72 != 0.0 )
                v51 = (float)(v47[1] + v46[2]) / v72;
            }
            *(v48 - 8) = v51;
            v52 = 0.0;
            if ( !*((_BYTE *)v46 + 12) )
            {
              if ( *((_BYTE *)v47 + 24) )
              {
                v52 = FLOAT_3_4028235e38;
              }
              else
              {
                v73 = (float)((float)(v47[4] - v46[1]) * (float)(v47[4] - v46[1]))
                    + (float)((float)(v47[3] - *v46) * (float)(v47[3] - *v46));
                if ( v73 != 0.0 )
                  v52 = (float)(v47[5] + v46[2]) / v73;
              }
            }
            *v48 = v52;
            v53 = 0.0;
            if ( !*((_BYTE *)v46 + 12) )
            {
              if ( *((_BYTE *)v47 + 40) )
              {
                v53 = FLOAT_3_4028235e38;
              }
              else
              {
                v74 = (float)((float)(v47[8] - v46[1]) * (float)(v47[8] - v46[1]))
                    + (float)((float)(v47[7] - *v46) * (float)(v47[7] - *v46));
                if ( v74 != 0.0 )
                  v53 = (float)(v47[9] + v46[2]) / v74;
              }
            }
            v48[8] = v53;
            v54 = 0.0;
            if ( !*((_BYTE *)v46 + 12) )
            {
              if ( *((_BYTE *)v47 + 56) )
              {
                v54 = FLOAT_3_4028235e38;
              }
              else
              {
                v75 = (float)((float)(v47[12] - v46[1]) * (float)(v47[12] - v46[1]))
                    + (float)((float)(v47[11] - *v46) * (float)(v47[11] - *v46));
                if ( v75 != 0.0 )
                  v54 = (float)(v47[13] + v46[2]) / v75;
              }
            }
            v48[16] = v54;
            v55 = 0.0;
            if ( !*((_BYTE *)v46 + 12) )
            {
              if ( *((_BYTE *)v47 + 72) )
              {
                v55 = FLOAT_3_4028235e38;
              }
              else
              {
                v76 = (float)((float)(v47[16] - v46[1]) * (float)(v47[16] - v46[1]))
                    + (float)((float)(v47[15] - *v46) * (float)(v47[15] - *v46));
                if ( v76 != 0.0 )
                  v55 = (float)(v47[17] + v46[2]) / v76;
              }
            }
            v48[24] = v55;
            v56 = 0.0;
            if ( *((_BYTE *)v47 + 88) )
            {
              if ( !*((_BYTE *)v46 + 12) )
                v56 = FLOAT_3_4028235e38;
            }
            else if ( !*((_BYTE *)v46 + 12) )
            {
              v77 = (float)((float)(v47[20] - v46[1]) * (float)(v47[20] - v46[1]))
                  + (float)((float)(v47[19] - *v46) * (float)(v47[19] - *v46));
              if ( v77 != 0.0 )
                v56 = (float)(v47[21] + v46[2]) / v77;
            }
            v48[32] = v56;
            v47 += 24;
            v48 += 48;
            --v50;
          }
          while ( v50 );
          if ( v27 >= 8 )
            goto LABEL_41;
        }
        else
        {
          v28 = v27;
        }
        v29 = (float *)((char *)this + 16 * v28 + 1956);
        v30 = (float *)((char *)this + 16 * v6 + 1952);
        v31 = 8 - v27;
        v32 = (float *)((char *)this + 32 * v28 + 4 * v6 + 2080);
        do
        {
          v33 = 0.0;
          v34 = *((_BYTE *)v30 + 12);
          if ( *((_BYTE *)v29 + 8) )
          {
            if ( !v34 )
              v33 = FLOAT_3_4028235e38;
          }
          else if ( !v34 )
          {
            v71 = (float)((float)(*v29 - v30[1]) * (float)(*v29 - v30[1]))
                + (float)((float)(*(v29 - 1) - *v30) * (float)(*(v29 - 1) - *v30));
            if ( v71 != 0.0 )
              v33 = (float)(v30[2] + v29[1]) / v71;
          }
          *v32 = v33;
          v29 += 4;
          v32 += 8;
          --v31;
        }
        while ( v31 );
LABEL_41:
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
          (float *)this + 4 * v6 + 424,
          (float *)this + 4 * v84.m128_u64[0] + 424);
        v36 = 2 * (v35 + 106);
        *((_QWORD *)this + v36 + 1) = 0LL;
        *((_QWORD *)this + v36) = 0LL;
        CDirtyRegion::AppendDirtyRegionLists(this, i, v37);
        goto LABEL_9;
      }
    }
  }
  if ( *((float *)this + 394) > *((float *)this + 392) && *((float *)this + 395) > *((float *)this + 393) )
  {
    v4 = 1;
    *(_OWORD *)((char *)this + 2660) = *((_OWORD *)this + 98);
    *((_DWORD *)this + 697) = 0;
  }
  if ( *((float *)this + 398) > *((float *)this + 396) && *((float *)this + 399) > *((float *)this + 397) )
  {
    v57 = 2LL * v4;
    v58 = v4++;
    *(_OWORD *)((char *)this + 8 * v57 + 2660) = *((_OWORD *)this + 99);
    *((_DWORD *)this + v58 + 697) = 1;
  }
  if ( *((float *)this + 402) > *((float *)this + 400) && *((float *)this + 403) > *((float *)this + 401) )
  {
    v59 = 2LL * v4;
    v60 = v4++;
    *(_OWORD *)((char *)this + 8 * v59 + 2660) = *((_OWORD *)this + 100);
    *((_DWORD *)this + v60 + 697) = 2;
  }
  if ( *((float *)this + 406) > *((float *)this + 404) && *((float *)this + 407) > *((float *)this + 405) )
  {
    v61 = 2LL * v4;
    v62 = v4++;
    *(_OWORD *)((char *)this + 8 * v61 + 2660) = *((_OWORD *)this + 101);
    *((_DWORD *)this + v62 + 697) = 3;
  }
  if ( *((float *)this + 410) > *((float *)this + 408) && *((float *)this + 411) > *((float *)this + 409) )
  {
    v63 = 2LL * v4;
    v64 = v4++;
    *(_OWORD *)((char *)this + 8 * v63 + 2660) = *((_OWORD *)this + 102);
    *((_DWORD *)this + v64 + 697) = 4;
  }
  if ( *((float *)this + 414) > *((float *)this + 412) && *((float *)this + 415) > *((float *)this + 413) )
  {
    v65 = 2LL * v4;
    v66 = v4++;
    *(_OWORD *)((char *)this + 8 * v65 + 2660) = *((_OWORD *)this + 103);
    *((_DWORD *)this + v66 + 697) = 5;
  }
  if ( *((float *)this + 418) > *((float *)this + 416) && *((float *)this + 419) > *((float *)this + 417) )
  {
    v67 = 2LL * v4;
    v68 = v4++;
    *(_OWORD *)((char *)this + 8 * v67 + 2660) = *((_OWORD *)this + 104);
    *((_DWORD *)this + v68 + 697) = 6;
  }
  if ( *((float *)this + 422) > *((float *)this + 420) && *((float *)this + 423) > *((float *)this + 421) )
  {
    v69 = 2LL * v4;
    v70 = v4++;
    *(_OWORD *)((char *)this + 8 * v69 + 2660) = *((_OWORD *)this + 105);
    *((_DWORD *)this + v70 + 697) = 7;
  }
  v2 = v4;
LABEL_3:
  *((_DWORD *)this + 705) = v2;
  v3 = *((_BYTE *)this + 4425) == 0;
  *((_BYTE *)this + 4422) = 1;
  if ( v3 )
  {
    if ( *((_BYTE *)this + 4426) )
    {
      CDirtyRegion::SetFullDirty(this);
      *((_BYTE *)this + 4426) = 0;
    }
  }
  else
  {
    CDirtyRegion::SetRedrawRects(this);
    CDirtyRegion::SetFullDirty(this);
    *(_WORD *)((char *)this + 4425) = 0;
  }
  if ( g_pComposition )
    *((_QWORD *)this + 1) = *((_QWORD *)g_pComposition + 62);
  else
    *((_QWORD *)this + 1) = 0LL;
}
