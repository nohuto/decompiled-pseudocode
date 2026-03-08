/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000D304 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180012524 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180014044 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800140C0 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x180045EB4 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180074400 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18007A6A4 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007B454 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180081420 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800839A0 (-CheckOcclusionRelevance@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A71F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800D4E90 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800E1B70 (-GetTopByReference@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x18012C236 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x18012D4B4 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18012F7EE (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x18012F91A (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AECF4 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801E3E44 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3,
        int a4)
{
  __int64 v5; // rdx
  CWindowNode *v7; // rdi
  int EffectiveBounds; // ebx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r15
  int (__fastcall **v15)(_QWORD *, GUID *, __int64 *); // rax
  _QWORD *v16; // r15
  unsigned int v17; // ecx
  __int64 *v18; // r13
  LONG v19; // eax
  __int64 v20; // rax
  unsigned int v21; // ecx
  int v22; // r12d
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // r13
  int v28; // r12d
  __int64 v29; // rbx
  int v30; // ecx
  float left; // xmm8_4
  float top; // xmm6_4
  float right; // xmm9_4
  float bottom; // xmm7_4
  int v35; // eax
  CMILMatrix *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  LONG v40; // xmm8_4
  LONG v41; // xmm6_4
  struct tagRECT v42; // xmm0
  LONG v43; // xmm7_4
  float v44; // xmm10_4
  LONG v45; // xmm9_4
  float v46; // xmm11_4
  float v47; // xmm12_4
  struct tagRECT *v48; // rax
  struct tagRECT *TopByReference; // rax
  bool v51; // cc
  float v52; // xmm1_4
  __int128 v53; // xmm0
  LONG v54; // xmm1_4
  float v55; // xmm5_4
  LONG v56; // xmm2_4
  float v57; // xmm6_4
  LONG v58; // xmm3_4
  float v59; // xmm4_4
  tagRECT v60; // xmm0
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r13
  char *v64; // r8
  __int64 v65; // rcx
  int v66; // eax
  unsigned int v67; // r13d
  int v68; // r12d
  __int64 v69; // rbx
  CWindowNode *v70; // r9
  int v71; // eax
  unsigned int v72; // ecx
  int CurrentRenderingRealization; // eax
  CShape **DxClipShape; // rax
  __int64 *v75; // rax
  int v76; // ebx
  __int64 *v77; // rax
  char *v78; // rcx
  unsigned int v79; // r13d
  int v80; // r12d
  __int64 v81; // rbx
  char *v82; // r9
  unsigned int v83; // ecx
  __m128 v84; // xmm2
  __m128 v85; // xmm2
  __m128 v86; // xmm2
  __m128 v87; // xmm2
  __m128 v88; // rt1
  int v89; // r9d
  unsigned int v90; // ecx
  char *v91; // rcx
  unsigned int v92; // [rsp+20h] [rbp-E0h]
  __int64 v93; // [rsp+40h] [rbp-C0h] BYREF
  char v94; // [rsp+48h] [rbp-B8h] BYREF
  struct IBitmapRealization *v95; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v96; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v97; // [rsp+70h] [rbp-90h] BYREF
  tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  RECT rcSrc2; // [rsp+90h] [rbp-70h] BYREF
  const struct FastRegion::Internal::CRgnData *v100[10]; // [rsp+A0h] [rbp-60h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v5 = *((_QWORD *)this + 32);
  v96 = 0LL;
  v95 = 0LL;
  v7 = this;
  if ( v5 )
  {
    v64 = (char *)this + 140;
    v65 = v5 + 64 + *(int *)(*(_QWORD *)(v5 + 64) + 8LL);
    v66 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v65 + 8LL))(v65, a2, v64);
    EffectiveBounds = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v66, 0xF37u, 0LL);
      v92 = 958;
LABEL_151:
      v89 = EffectiveBounds;
      goto LABEL_152;
    }
  }
  EffectiveBounds = 0;
  v9 = (_QWORD *)((char *)a2 + 840);
  v10 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( (_DWORD)v10 )
  {
    this = (struct COcclusionContext *)((char *)a2 + 1208);
    while ( 1 )
    {
      v67 = *((_DWORD *)a2 + 357);
      v68 = v10 - 1;
      v69 = (unsigned int)(v10 - 1);
      *((_DWORD *)a2 + 357) = v67 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          2 * v69,
          v5,
          v67,
          a4,
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v69 + 4),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v69 + 8),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v69 + 12));
        this = (struct COcclusionContext *)((char *)a2 + 1208);
      }
      v70 = this;
      if ( !*((_BYTE *)a2 + 1204) )
        v70 = 0LL;
      v71 = CArrayBasedCoverageSet::Add((char *)a2 + 448, *v9 + 16 * v69, v67, v70);
      EffectiveBounds = v71;
      if ( v71 < 0 )
        break;
      this = (struct COcclusionContext *)((char *)a2 + 1208);
      LODWORD(v10) = v68;
      if ( !v68 )
        goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x2E8u, 0LL);
  }
LABEL_3:
  if ( (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)a2 + 840,
      0LL);
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, EffectiveBounds, 0x3BFu, 0LL);
    return (unsigned int)EffectiveBounds;
  }
  v11 = *((_DWORD *)a2 + 357);
  *((_DWORD *)a3 + 11) = v11;
  *((_DWORD *)a3 + 12) = v11;
  if ( *((_BYTE *)v7 + 896) )
  {
    v62 = CPtrArrayBase::operator[]((char *)v7 + 784, 0LL);
    v63 = v62;
    if ( v62 )
    {
      CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                      (CCompositionSurfaceBitmap *)(v62 + 72),
                                      &v95);
      if ( CurrentRenderingRealization >= 0 )
      {
        DxClipShape = (CShape **)CWindowNode::GetDxClipShape(v7, &v97);
        EffectiveBounds = CWindowNode::GetEffectiveBounds(v7, *DxClipShape, &v96, (bool *)&v94);
        CShapePtr::Release((CShapePtr *)&v97);
        if ( EffectiveBounds < 0 )
        {
          v92 = 977;
          goto LABEL_151;
        }
        v75 = (__int64 *)CWindowNode::GetDxClipShape(v7, &rcSrc2);
        v97 = v96;
        EffectiveBounds = CWindowNode::CollectOcclusionHelper(
                            (_DWORD)v7,
                            v63,
                            (unsigned int)&v97,
                            (_DWORD)a2,
                            *v75,
                            v94);
        CShapePtr::Release((CShapePtr *)&rcSrc2);
        if ( EffectiveBounds < 0 )
        {
          v92 = 983;
          goto LABEL_151;
        }
        if ( *((_BYTE *)a2 + 1205) )
        {
          CMILMatrix::SetToIdentity((CMILMatrix *)v100);
          EffectiveBounds = CWindowNode::ApplyTextureToLocalTransform(v7, v63 + 72, v100, 0LL);
          if ( EffectiveBounds < 0 )
          {
            v92 = 990;
            goto LABEL_151;
          }
          v76 = *((_DWORD *)v7 + 213);
          v77 = (__int64 *)CWindowNode::GetDxClipShape(v7, &v97);
          EffectiveBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                              (__int64)a2,
                              (__int64)v7,
                              *(_QWORD *)(v63 + 104),
                              (__int64)v100,
                              *v77,
                              v76);
          CShapePtr::Release((CShapePtr *)&v97);
          if ( EffectiveBounds < 0 )
          {
            v92 = 996;
            goto LABEL_151;
          }
        }
      }
    }
  }
  v12 = 0;
  EffectiveBounds = 0;
  v13 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( (_DWORD)v13 )
  {
    v78 = (char *)a2 + 1208;
    while ( 1 )
    {
      v79 = *((_DWORD *)a2 + 357);
      v80 = v13 - 1;
      v81 = (unsigned int)(v13 - 1);
      *((_DWORD *)a2 + 357) = v79 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          2 * v81,
          v5,
          v79,
          a4,
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v81 + 4),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v81 + 8),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v81 + 12));
        v78 = (char *)a2 + 1208;
      }
      v82 = v78;
      if ( !*((_BYTE *)a2 + 1204) )
        v82 = 0LL;
      EffectiveBounds = CArrayBasedCoverageSet::Add((char *)a2 + 448, *v9 + 16 * v81, v79, v82);
      if ( EffectiveBounds < 0 )
        break;
      v78 = (char *)a2 + 1208;
      LODWORD(v13) = v80;
      if ( !v80 )
        goto LABEL_134;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, EffectiveBounds, 0x2E8u, 0LL);
LABEL_134:
    v12 = 0;
  }
  if ( (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)a2 + 840,
      0LL);
    v12 = 0;
  }
  if ( EffectiveBounds < 0 )
  {
    v92 = 1003;
    goto LABEL_151;
  }
  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 357);
  if ( !*((_BYTE *)v7 + 895) )
    goto LABEL_66;
  v14 = *((_QWORD *)v7 + 97);
  if ( (v14 & 2) != 0 )
  {
    v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    v15 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v16;
  }
  else
  {
    v15 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))(*((_QWORD *)v7 + 97) & 1LL);
    v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v15 )
  {
    if ( v15 != (int (__fastcall **)(_QWORD *, GUID *, __int64 *))1 )
      v16 = (_QWORD *)v16[2];
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 || *((_BYTE *)v7 + 890) || (*((_BYTE *)v7 + 852) & 2) != 0 )
    goto LABEL_66;
  EffectiveBounds = CWindowNode::EnsureEffectiveSpriteClip(v7);
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, EffectiveBounds, 0x3F5u, 0LL);
    goto LABEL_66;
  }
  v18 = (__int64 *)*((_QWORD *)v7 + 110);
  v96.right = *((_DWORD *)v7 + 192) - *((_DWORD *)v7 + 190);
  v19 = *((_DWORD *)v7 + 193) - *((_DWORD *)v7 + 191);
  *(_QWORD *)&v96.left = 0LL;
  v96.bottom = v19;
  if ( !v18 )
    goto LABEL_41;
  v20 = *v18;
  rcDst = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64 *, tagRECT *, _QWORD))(v20 + 48))(v18, &rcDst, 0LL);
  EffectiveBounds = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v22, 0x358u, 0LL);
    v89 = v22;
    v92 = 1016;
    goto LABEL_152;
  }
  LODWORD(v93) = rcDst.left;
  if ( (rcDst.left & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v84 = 0LL;
    v84.m128_f32[0] = (float)(int)*(float *)&rcDst.left - *(float *)&rcDst.left;
    v23 = (int)*(float *)&rcDst.left - _mm_cmple_ss(v84, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v93 = *(float *)&rcDst.left + 6291456.25;
    v23 = (int)((_DWORD)v93 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.left - (float)v23) & _xmm) > 0.00390625 )
    v23 = CFloatFPU::FloorSat(*(float *)&rcDst.left);
  v97.left = v23;
  LODWORD(v93) = rcDst.top;
  if ( (rcDst.top & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v85 = 0LL;
    v85.m128_f32[0] = (float)(int)*(float *)&rcDst.top - *(float *)&rcDst.top;
    v24 = (int)*(float *)&rcDst.top - _mm_cmple_ss(v85, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v93 = *(float *)&rcDst.top + 6291456.25;
    v24 = (int)((_DWORD)v93 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.top - (float)v24) & _xmm) > 0.00390625 )
    v24 = CFloatFPU::FloorSat(*(float *)&rcDst.top);
  v97.top = v24;
  LODWORD(v93) = rcDst.right;
  if ( (rcDst.right & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v86 = 0LL;
    v86.m128_f32[0] = (float)(int)*(float *)&rcDst.right - *(float *)&rcDst.right;
    v25 = (int)*(float *)&rcDst.right - _mm_cmple_ss(v86, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v93 = *(float *)&rcDst.right + 6291456.25;
    v25 = (int)((_DWORD)v93 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.right - (float)v25) & _xmm) > 0.00390625 )
    v25 = CFloatFPU::CeilingSat(*(float *)&rcDst.right);
  v97.right = v25;
  LODWORD(v93) = rcDst.bottom;
  if ( (rcDst.bottom & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v87 = 0LL;
    v87.m128_f32[0] = (float)(int)*(float *)&rcDst.bottom - *(float *)&rcDst.bottom;
    v88.m128_f32[0] = FLOAT_N0_5;
    LODWORD(v93) = _mm_cmple_ss(v87, v88).m128_u32[0];
    v26 = (int)*(float *)&rcDst.bottom - v93;
  }
  else
  {
    *(float *)&v93 = *(float *)&rcDst.bottom + 6291456.25;
    v26 = (int)((_DWORD)v93 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.bottom - (float)v26) & _xmm) > 0.00390625 )
    v26 = CFloatFPU::CeilingSat(*(float *)&rcDst.bottom);
  v97.bottom = v26;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v96, &v97);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v18 + 64))(v18, &v93) && (_DWORD)v93 == 1 )
LABEL_41:
    v27 = 1;
  else
    v27 = 0;
  v28 = 0;
  v29 = *((_QWORD *)v7 + 110);
  if ( *((_DWORD *)v7 + 209) || *((_DWORD *)v7 + 211) || *((_DWORD *)v7 + 210) || *((_DWORD *)v7 + 212) )
    CWindowNode::IntersectWithAlphaMargins((__int64)v7, (__int64)&v96);
  v30 = *((_DWORD *)v7 + 214);
  if ( v30 || *((_DWORD *)v7 + 216) || *((_DWORD *)v7 + 215) || *((_DWORD *)v7 + 217) )
  {
    v60 = *(tagRECT *)((char *)v7 + 728);
    *(_QWORD *)&rcSrc2.left = 0LL;
    rcDst = v60;
    rcDst.left = v30 + _mm_cvtsi128_si32((__m128i)v60);
    rcDst.right = v60.right - *((_DWORD *)v7 + 215);
    rcDst.top = *((_DWORD *)v7 + 216) + v60.top;
    rcDst.bottom = v60.bottom - *((_DWORD *)v7 + 217);
    rcSrc2.right = *((_DWORD *)v7 + 192) - *((_DWORD *)v7 + 190);
    rcSrc2.bottom = *((_DWORD *)v7 + 193) - *((_DWORD *)v7 + 191);
    IntersectRect(&rcDst, &rcDst, &rcSrc2);
    if ( !EqualRect(&rcDst, &rcSrc2) )
      TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v96, &rcDst);
  }
  left = (float)v96.left;
  top = (float)v96.top;
  *(float *)&v97.left = (float)v96.left;
  *(float *)&v97.top = (float)v96.top;
  right = (float)v96.right;
  bottom = (float)v96.bottom;
  *(float *)&v97.right = (float)v96.right;
  *(float *)&v97.bottom = (float)v96.bottom;
  if ( v27 )
  {
    if ( !*((_DWORD *)a2 + 358) )
    {
      if ( (*((_BYTE *)v7 + 852) & 1) != 0 )
      {
LABEL_53:
        if ( right > left && bottom > top )
        {
          v35 = *((_DWORD *)a2 + 8);
          v96 = 0LL;
          if ( v35 )
            v36 = (CMILMatrix *)(*((_QWORD *)a2 + 6) + 68LL * (unsigned int)(v35 - 1));
          else
            v36 = (CMILMatrix *)&CMILMatrix::Identity;
          CMILMatrix::Transform2DBoundsHelper<0>(v36, (struct MilRectF *)&v97);
          if ( *((_DWORD *)a2 + 36) )
          {
            TopByReference = (struct tagRECT *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                                                 (char *)a2 + 144,
                                                 v37,
                                                 v38,
                                                 v39);
            v40 = v96.left;
            v42 = *TopByReference;
            v51 = *(float *)&v96.left <= COERCE_FLOAT(*TopByReference);
            v97 = *TopByReference;
            if ( !v51 )
              v42.left = v96.left;
            v44 = *(float *)&v97.top;
            v41 = v96.top;
            v52 = *(float *)&v97.top;
            if ( *(float *)&v96.top > *(float *)&v97.top )
            {
              v44 = *(float *)&v96.top;
              v52 = *(float *)&v96.top;
            }
            v46 = *(float *)&v97.right;
            v43 = v96.right;
            if ( *(float *)&v97.right > *(float *)&v96.right )
              v46 = *(float *)&v96.right;
            v47 = *(float *)&v97.bottom;
            v45 = v96.bottom;
            if ( *(float *)&v97.bottom > *(float *)&v96.bottom )
              v47 = *(float *)&v96.bottom;
            if ( v46 <= *(float *)&v42.left || v47 <= v52 )
            {
              v44 = 0.0;
              v42.left = 0;
              v46 = 0.0;
              v47 = 0.0;
            }
          }
          else
          {
            v40 = v96.left;
            v41 = v96.top;
            v42.left = v96.left;
            v43 = v96.right;
            v44 = *(float *)&v96.top;
            v45 = v96.bottom;
            v46 = *(float *)&v96.right;
            v47 = *(float *)&v96.bottom;
          }
          if ( **((_DWORD **)a2 + 168) )
          {
            v96.left = PixelAlign(*(float *)&v42.left, 1);
            v96.top = PixelAlign(v44, 1);
            v96.right = PixelAlign(v46, 0);
            v96.bottom = PixelAlign(v47, 0);
            if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v96) )
            {
              FastRegion::CRegion::CRegion((FastRegion::CRegion *)v100, &v96);
              v61 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)a2 + 168, v100);
              if ( v61 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v61, retaddr);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v100);
            }
          }
          if ( *((_DWORD *)a2 + 44) )
          {
            v53 = *(_OWORD *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                               (char *)a2 + 176,
                               v37,
                               v38,
                               v39);
            v97 = (struct tagRECT)v53;
            if ( *(float *)&v40 > *(float *)&v53 )
              LODWORD(v53) = v40;
            v54 = v97.top;
            v55 = *(float *)&v97.top;
            if ( *(float *)&v41 > *(float *)&v97.top )
            {
              v54 = v41;
              v55 = *(float *)&v41;
            }
            v56 = v97.right;
            v57 = *(float *)&v97.right;
            if ( *(float *)&v97.right > *(float *)&v43 )
            {
              v56 = v43;
              v57 = *(float *)&v43;
            }
            v58 = v97.bottom;
            v59 = *(float *)&v97.bottom;
            if ( *(float *)&v97.bottom > *(float *)&v45 )
            {
              v58 = v45;
              v59 = *(float *)&v45;
            }
            if ( v57 <= *(float *)&v53 || v59 <= v55 )
            {
              v58 = 0;
              v56 = 0;
              v54 = 0;
              LODWORD(v53) = 0;
            }
            v96.left = v53;
            v96.top = v54;
            v96.right = v56;
            v96.bottom = v58;
          }
          else
          {
            v96.left = v40;
            v96.top = v41;
            v96.right = v43;
            v96.bottom = v45;
          }
          if ( (unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a2, &v96) )
          {
            v48 = (struct tagRECT *)detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
                                      (char *)a2 + 840,
                                      (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4,
                                      1LL);
            *v48 = v96;
          }
        }
        goto LABEL_64;
      }
      v93 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v16)(
             v16,
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             &v93) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v93 + 8LL))(v93) )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v93);
        goto LABEL_53;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v93);
    }
LABEL_64:
    v28 = 0;
LABEL_65:
    EffectiveBounds = v28;
    goto LABEL_66;
  }
  if ( !v29 )
    goto LABEL_65;
  v28 = COcclusionContext::DrawClippedImage((_DWORD)a2, (_DWORD)v16, (unsigned int)&v97, v29, *((_DWORD *)v7 + 213));
  EffectiveBounds = v28;
  if ( v28 >= 0 )
    goto LABEL_65;
  MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v28, 0x427u, 0LL);
  v89 = v28;
  v92 = 1021;
LABEL_152:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v89, v92, 0LL);
LABEL_66:
  if ( v95 )
  {
    v91 = (char *)v95 + *(int *)(*((_QWORD *)v95 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v91 + 16LL))(v91);
  }
  return (unsigned int)EffectiveBounds;
}
