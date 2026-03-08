/*
 * XREFs of ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801E8770 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F6508 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802A62FC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?SubtractionIsSingleRect@@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180017EBC (-SubtractionIsSingleRect@@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800332C0 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043738 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800462A8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x180046380 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ @ 0x180086880 (-GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C2990 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18012C1C4 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801E3DD0 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CDirtyRegion::GetOptimizedRect(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        float *a4,
        FastRegion::CRegion *a5,
        CMILMatrix *a6,
        char a7,
        _QWORD *a8,
        COcclusionContext *a9)
{
  CMILMatrix *v9; // r14
  const struct FastRegion::Internal::CRgnData **v10; // rsi
  float *v11; // r15
  COcclusionContext *v12; // r13
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rbx
  float v21; // xmm14_4
  _QWORD *v22; // rsi
  _QWORD *v23; // rcx
  _QWORD *v24; // r8
  const struct CBackdropVisualImageKey *BVIKeyForCurrentWalk; // rax
  struct _LIST_ENTRY *v26; // rdi
  const struct CBackdropVisualImageKey *v27; // r15
  CVisual *v28; // rbx
  __int64 *p_Blink; // rbx
  __int64 *v30; // r14
  _DWORD *v31; // rdi
  __int64 i; // rax
  _DWORD *v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // edi
  float v36; // xmm6_4
  float v37; // xmm7_4
  float v38; // xmm9_4
  float v39; // xmm8_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm0_4
  float v49; // xmm3_4
  float v50; // xmm10_4
  int v51; // r9d
  __int64 v52; // r8
  float v53; // xmm1_4
  __int64 v54; // rdx
  float v55; // xmm2_4
  float v56; // xmm5_4
  float v57; // xmm4_4
  float v58; // xmm3_4
  __int64 v59; // r8
  float *v60; // rdx
  __int64 v61; // r10
  struct MilRectF *v62; // rbx
  __int64 v63; // rdi
  float *v64; // rdx
  float *v65; // rcx
  int v66; // r8d
  unsigned int v67; // r9d
  float v68; // xmm4_4
  float v69; // xmm5_4
  float v70; // xmm12_4
  float v71; // xmm11_4
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  int v75; // eax
  LONG right; // r10d
  LONG left; // r11d
  __int64 v78; // r9
  _DWORD *v79; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v82; // r15
  __int64 v83; // rcx
  __int64 v84; // r15
  __int128 *v85; // r9
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  CMILMatrix *v91; // [rsp+38h] [rbp-C8h]
  _QWORD *v93; // [rsp+50h] [rbp-B0h]
  __int128 v95; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v96; // [rsp+70h] [rbp-90h] BYREF
  __int128 v97; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v98; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v99[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v100; // [rsp+E0h] [rbp-20h]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v9 = a6;
  v10 = (const struct FastRegion::Internal::CRgnData **)a5;
  v11 = a4;
  v12 = a9;
  v13 = a2;
  v14 = a1;
  v15 = a3;
  v91 = a6;
  *a2 = 0LL;
  a2[1] = 0LL;
  v98 = 0LL;
  if ( a6 && CMILMatrix::IsIdentity<0>((__int64)a6) )
  {
    v9 = 0LL;
    v91 = 0LL;
  }
  if ( a5 )
  {
    v64 = v11;
    if ( v9 )
    {
      v98 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v9, (struct MilRectF *)v11);
      v64 = (float *)&v98;
    }
    v98 = *(struct tagRECT *)PixelAlign((int *)&v96, v64);
  }
  if ( *(_BYTE *)(v14 + 4420) )
  {
    *(_OWORD *)v13 = *(_OWORD *)v11;
    if ( a5 )
    {
      right = v98.right;
      left = v98.left;
      v78 = HIDWORD(*(_QWORD *)&v98.right);
      if ( v98.left >= v98.right || v98.top >= v98.bottom )
      {
        **(_DWORD **)a5 = 0;
      }
      else
      {
        v79 = *(_DWORD **)a5;
        v79[3] = v98.top;
        v79[7] = left;
        v79[8] = right;
        *v79 = 2;
        v79[1] = left;
        v79[2] = right;
        v79[5] = v78;
        v79[4] = 16;
        v79[6] = 16;
      }
    }
  }
  else
  {
    if ( !a9 )
      v12 = (COcclusionContext *)(v14 + 16);
    v16 = 0LL;
    if ( g_pComposition )
      v16 = *((_QWORD *)g_pComposition + 62);
    v17 = *((_QWORD *)v12 + 3) == v16;
    v18 = v15;
    v19 = a7;
    if ( v17 )
    {
      v20 = *(unsigned int *)(v14 + 4 * v15 + 2788);
      v21 = (float)((float)(*(float *)(v14 + 16 * v18 + 2672) - *(float *)(v14 + 16 * v18 + 2664))
                  * (float)(*(float *)(v14 + 16 * v18 + 2668) - *(float *)(v14 + 16 * v18 + 2660)))
          * 0.25;
      *(_OWORD *)v13 = *(_OWORD *)(v14 + 16 * (v20 + 106));
      if ( a5 )
      {
        AddToTightDirtyRegion((struct MilRectF *)v13, a7, v9, a5);
        v19 = a7;
      }
      v93 = (_QWORD *)(v14 + 16 * (v20 + 114));
      v22 = (_QWORD *)*v93;
      if ( (_QWORD *)*v93 != v93 )
      {
        while ( 1 )
        {
          v23 = (_QWORD *)a8[1];
          v24 = &v23[*a8];
          if ( v23 != v24 )
          {
            while ( *v23 != v22[2] )
            {
              if ( ++v23 == v24 )
                goto LABEL_15;
            }
            goto LABEL_37;
          }
LABEL_15:
          v97 = *(_OWORD *)(v22 + 3);
          BVIKeyForCurrentWalk = COcclusionContext::GetBVIKeyForCurrentWalk(v12);
          v26 = *(struct _LIST_ENTRY **)v14;
          v27 = BVIKeyForCurrentWalk;
          v28 = (CVisual *)v22[2];
          if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v26->Flink[11].Blink)(v26) )
          {
            p_Blink = (__int64 *)((char *)v28 + 336);
          }
          else
          {
            TreeDataListHead = CVisual::GetTreeDataListHead(v28);
            if ( !TreeDataListHead )
              goto LABEL_115;
            Flink = TreeDataListHead->Flink;
            if ( TreeDataListHead->Flink == TreeDataListHead )
              goto LABEL_115;
            while ( 1 )
            {
              p_Blink = (__int64 *)&Flink[-23].Blink;
              if ( Flink[2].Flink == v26 )
                break;
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_115;
            }
          }
          if ( !p_Blink )
            goto LABEL_115;
          v30 = p_Blink + 25;
          v31 = 0LL;
          for ( i = p_Blink[25]; i != p_Blink[26]; i += 8LL )
          {
            v33 = *(_DWORD **)i;
            if ( *(_QWORD *)(*(_QWORD *)i + 8LL) == *(_QWORD *)v27 && *((_QWORD *)v33 + 2) == *((_QWORD *)v27 + 1) )
            {
              v31 = *(_DWORD **)i;
              if ( v33 )
                *((_BYTE *)v33 + 25) = 10;
              break;
            }
          }
          v34 = *(_QWORD *)(*(_QWORD *)(p_Blink[33] + 16) + 496LL);
          if ( p_Blink[30] != v34 )
          {
            p_Blink[30] = v34;
            v82 = *v30;
            while ( v82 != p_Blink[26] )
            {
              v83 = *(_QWORD *)v82;
              if ( *(_QWORD *)(*(_QWORD *)v82 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
                && *(_QWORD *)(v83 + 16) == qword_1803E6E90
                || (v17 = *(_BYTE *)(v83 + 25) == 1, --*(_BYTE *)(v83 + 25), !v17) )
              {
                v82 += 8LL;
              }
              else
              {
                v84 = (v82 - *v30) >> 3;
                detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
                  p_Blink + 25,
                  v84,
                  1LL);
                v82 = *v30 + 8 * v84;
              }
            }
          }
          if ( !v31 )
          {
LABEL_115:
            v35 = 0;
            goto LABEL_28;
          }
          if ( *((_BYTE *)v22 + 40) )
            v35 = v31[7];
          else
            v35 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_28:
          v36 = *((float *)&v97 + 2);
          v37 = *(float *)&v97;
          if ( *((float *)&v97 + 2) > *(float *)&v97 )
          {
            v38 = *((float *)&v97 + 3);
            v39 = *((float *)&v97 + 1);
            if ( *((float *)&v97 + 3) > *((float *)&v97 + 1) )
            {
              v17 = *((_BYTE *)v12 + 1204) == 0;
              v95 = 0LL;
              if ( v17 )
              {
                v95 = v97;
              }
              else
              {
                COcclusionContext::PageInPixelsRectToDeviceRect(v12, &v97, &v95);
                v38 = *((float *)&v97 + 3);
                v36 = *((float *)&v97 + 2);
                v39 = *((float *)&v97 + 1);
                v37 = *(float *)&v97;
              }
              if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered((char *)v12 + 448, &v95, v35) )
              {
                v95 = 0LL;
                if ( (float)((float)(v36 - v37) * (float)(v38 - v39)) <= v21 )
                  goto LABEL_34;
                v17 = *((_BYTE *)v12 + 1204) == 0;
                v96 = 0LL;
                if ( v17 )
                {
                  v49 = v36;
                  v50 = v38;
                }
                else
                {
                  COcclusionContext::PageInPixelsRectToDeviceRect(v12, &v97, &v96);
                  v49 = *((float *)&v96 + 2);
                  v38 = *((float *)&v97 + 3);
                  v36 = *((float *)&v97 + 2);
                  v39 = *((float *)&v97 + 1);
                  v37 = *(float *)&v97;
                  v50 = *((float *)&v96 + 3);
                }
                v51 = *((_DWORD *)v12 + 118);
                v52 = 0LL;
                v53 = 0.0;
                v96 = 0LL;
                if ( !v51 )
                  goto LABEL_34;
                v54 = *((_QWORD *)v12 + 56);
                do
                {
                  if ( *(_DWORD *)(v54 + 36 * v52 + 16) >= (signed int)v35 )
                    break;
                  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(v54 + 36 * v52)) )
                  {
                    v70 = v69;
                    v71 = v68;
                    v72 = v49;
                    if ( *v65 > v69 )
                      v70 = *v65;
                    if ( v65[1] > v68 )
                      v71 = v65[1];
                    if ( v49 > v65[2] )
                      v72 = v65[2];
                    v73 = v50;
                    if ( v50 > v65[3] )
                      v73 = v65[3];
                    if ( v72 > v70 && v73 > v71 )
                    {
                      v74 = (float)(v72 - v70) * (float)(v73 - v71);
                      if ( v74 > v53 )
                      {
                        v53 = v74;
                        v96 = *(_OWORD *)v65;
                      }
                    }
                  }
                  v52 = (unsigned int)(v66 + 1);
                }
                while ( (unsigned int)v52 < v67 );
                if ( v53 <= 0.0 )
                  goto LABEL_34;
                if ( *((_BYTE *)v12 + 1204) )
                {
                  COcclusionContext::DeviceRectToPageInPixelsRect(v12, &v96, &v95);
                  v58 = *((float *)&v95 + 3);
                  v57 = *((float *)&v95 + 2);
                  v56 = *((float *)&v95 + 1);
                  v55 = *(float *)&v95;
                }
                else
                {
                  v55 = *(float *)&v96;
                  v56 = *((float *)&v96 + 1);
                  v57 = *((float *)&v96 + 2);
                  v58 = *((float *)&v96 + 3);
                  v95 = v96;
                }
                if ( a5 || SubtractionIsSingleRect((float *)&v95, (float *)&v97) )
                {
                  if ( v37 > v55 )
                  {
                    *(float *)&v95 = v37;
                    v55 = v37;
                  }
                  if ( v39 > v56 )
                  {
                    *((float *)&v95 + 1) = v39;
                    v56 = v39;
                  }
                  if ( v57 > v36 )
                  {
                    *((float *)&v95 + 2) = v36;
                    v57 = v36;
                  }
                  if ( v58 > v38 )
                  {
                    *((float *)&v95 + 3) = v38;
                    v58 = v38;
                  }
                  if ( v57 <= v55 || v58 <= v56 )
                    v95 = 0uLL;
                  `vector constructor iterator'(
                    (char *)v99,
                    16LL,
                    4LL,
                    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
                  if ( (unsigned int)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                                       (int *)&v97,
                                       (__int64)&v95,
                                       v59,
                                       (__int64)v99) == 1 )
                    v60 = (float *)v99;
                  else
                    v60 = (float *)&v97;
                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v13, v60);
                  if ( a5 && (_DWORD)v61 )
                  {
                    v62 = (struct MilRectF *)v99;
                    v63 = v61;
                    do
                    {
                      AddToTightDirtyRegion(v62, a7, v91, a5);
                      v62 = (struct MilRectF *)((char *)v62 + 16);
                      --v63;
                    }
                    while ( v63 );
                    v13 = a2;
                  }
                }
                else
                {
LABEL_34:
                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                    (float *)v13,
                    (float *)&v97);
                  if ( a5 )
                    AddToTightDirtyRegion((struct MilRectF *)&v97, a7, v91, a5);
                }
              }
            }
          }
          v14 = a1;
LABEL_37:
          v22 = (_QWORD *)*v22;
          if ( v22 == v93 )
          {
            v11 = a4;
            v19 = a7;
            break;
          }
        }
      }
      v10 = (const struct FastRegion::Internal::CRgnData **)a5;
    }
    else
    {
      *(_OWORD *)v13 = *(_OWORD *)(v14 + 16 * v15 + 2660);
      if ( a5 )
      {
        AddToTightDirtyRegion((struct MilRectF *)v13, a7, v9, a5);
        v19 = a7;
      }
    }
    if ( v19 )
    {
      v96 = 0LL;
      if ( v91 )
        CMILMatrix::Transform2DBoundsHelper<0>(v91, (struct MilRectF *)v13);
      else
        v96 = *(_OWORD *)v13;
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v96) )
      {
        v13[1] = 0LL;
        *v13 = 0LL;
      }
      else
      {
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v96, 1.0, 1.0);
        if ( v85 )
        {
          v86 = *v85;
          v87 = v85[1];
          v100 = *((_DWORD *)v85 + 16);
          v99[0] = v86;
          v88 = v85[2];
          v99[1] = v87;
          v89 = v85[3];
          v99[2] = v88;
          v99[3] = v89;
          CMILMatrix::Invert((CMILMatrix *)v99);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v99, (struct MilRectF *)&v96);
        }
        else
        {
          *(_OWORD *)v13 = v96;
        }
      }
    }
    v40 = *v11;
    v41 = *(float *)v13;
    if ( *v11 > *(float *)v13 )
    {
      *(float *)v13 = v40;
      v41 = v40;
    }
    v42 = v11[1];
    v43 = *((float *)v13 + 1);
    if ( v42 > v43 )
    {
      *((float *)v13 + 1) = v42;
      v43 = v42;
    }
    v44 = v11[2];
    v45 = *((float *)v13 + 2);
    if ( v45 > v44 )
    {
      *((float *)v13 + 2) = v44;
      v45 = v44;
    }
    v46 = v11[3];
    v47 = *((float *)v13 + 3);
    if ( v47 > v46 )
    {
      *((float *)v13 + 3) = v46;
      v47 = v46;
    }
    if ( v45 <= v41 || v47 <= v43 )
    {
      v13[1] = 0LL;
      *v13 = 0LL;
    }
    if ( v10 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v99, &v98);
      v75 = FastRegion::CRegion::Intersect(v10, (const struct FastRegion::Internal::CRgnData **)v99);
      if ( v75 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v75, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v99);
    }
  }
  return v13;
}
