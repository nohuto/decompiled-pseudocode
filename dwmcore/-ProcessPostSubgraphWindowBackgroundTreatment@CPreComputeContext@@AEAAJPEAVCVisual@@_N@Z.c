/*
 * XREFs of ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x18000B0DC (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180017A4C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ??8?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV0@@Z @ 0x18001808C (--8-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800198D0 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002ED9C (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@QEBA_NXZ @ 0x1800A4360 (-IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@QEBA_NXZ.c)
 *     ?AddWorldBoundsToDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A4388 (-AddWorldBoundsToDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@AEBV-$TM.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800A4730 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1800A4804 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800A4D24 (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800E4678 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800ED5EC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18026EDE8 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 */

__int64 __fastcall CPreComputeContext::ProcessPostSubgraphWindowBackgroundTreatment(
        CPreComputeContext *this,
        struct CVisual *a2,
        unsigned __int8 a3)
{
  _DWORD *v3; // r9
  char v6; // r14
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int i; // eax
  __int64 *v10; // rsi
  __int64 v11; // rsi
  float v12; // xmm0_4
  char v13; // bl
  bool v14; // cf
  bool v15; // zf
  void *v16; // rdx
  const struct CVisualTree **v17; // rdi
  int v18; // ecx
  unsigned int v19; // eax
  __int64 **TreeData; // rax
  const struct CVisualTree *v22; // r12
  __int64 v23; // r9
  unsigned __int8 v24; // di
  int updated; // ebx
  __int64 **v26; // rax
  CCachedVisualImage **v27; // rbx
  CCachedVisualImage **v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  const char *v31; // rbx
  const char **v32; // rax
  DwmDbg::DbgString *v33; // rdi
  CVisualTreePath *v34; // rbx
  DwmDbg::DbgString *v35; // rax
  char *v36; // rcx
  __int64 v37; // r8
  char *v38; // [rsp+20h] [rbp-79h]
  unsigned __int8 v39; // [rsp+30h] [rbp-69h]
  char v41; // [rsp+32h] [rbp-67h] BYREF
  char v42; // [rsp+33h] [rbp-66h]
  void *lpMem; // [rsp+38h] [rbp-61h] BYREF
  void *v44; // [rsp+40h] [rbp-59h] BYREF
  CPreComputeContext *v45; // [rsp+48h] [rbp-51h]
  char *v46; // [rsp+50h] [rbp-49h] BYREF
  char *v47; // [rsp+58h] [rbp-41h] BYREF
  __int128 v48; // [rsp+60h] [rbp-39h] BYREF
  __int128 v49; // [rsp+70h] [rbp-29h] BYREF
  __int64 v50[3]; // [rsp+80h] [rbp-19h] BYREF
  char v51; // [rsp+98h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v3 = (_DWORD *)*((_QWORD *)a2 + 29);
  v45 = this;
  v39 = 0;
  v6 = 1;
  if ( (*v3 & 0x200000) != 0 )
  {
    v7 = (unsigned int)v3[1];
    v8 = v3 + 2;
    for ( i = 0; i < (unsigned int)v7; ++v8 )
    {
      if ( *v8 == 11 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v7 )
      v10 = 0LL;
    else
      v10 = (__int64 *)((char *)v3 + 8LL * i - (((_BYTE)v7 + 15) & 7) + v7 + 15);
    v11 = *v10;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = *(float *)(v11 + 108);
  v13 = 0;
  v14 = v12 < *(float *)(v11 + 104);
  v15 = v12 == *(float *)(v11 + 104);
  v16 = *(void **)(v11 + 304);
  v17 = *(const struct CVisualTree ***)this;
  v42 = *(_BYTE *)(v11 + 303);
  lpMem = v16;
  v41 = 0;
  v18 = (v14 || v15) + 1;
  if ( *(float *)(v11 + 96) > *(float *)(v11 + 88) )
    v18 = v14 || v15;
  v19 = v18 + 1;
  if ( *(float *)(v11 + 100) > *(float *)(v11 + 92) )
    v19 = v18;
  if ( v19 > 1 )
  {
    if ( !v16 )
    {
LABEL_13:
      *(_BYTE *)(v11 + 302) = v13;
      return 0LL;
    }
    CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      (int *)this + 440,
      &v49);
    TreeData = CVisual::FindTreeData(a2, v17[54]);
    if ( TreeData )
    {
      if ( TreeData[22] - TreeData[21] )
        detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
          TreeData + 21,
          0LL);
    }
LABEL_17:
    v13 = 1;
    goto LABEL_13;
  }
  v48 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v11 + 160), (struct MilRectF *)(v11 + 88));
  if ( !lpMem )
  {
    v24 = 0;
LABEL_27:
    if ( CWindowBackgroundTreatment::HasValidSource((CWindowBackgroundTreatment *)v11)
      && TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::operator==(
           (float *)(v11 + 88),
           (float *)(v11 + 136))
      && (unsigned __int8)CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute((CWindowBackgroundTreatment *)v11) )
    {
      if ( !v42
        || *((_QWORD *)g_pComposition + 76) - *(_QWORD *)(v11 + 320) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta )
      {
        v6 = 0;
      }
      if ( !v24 || v6 )
      {
        *(_BYTE *)(v11 + 300) = 0;
        v13 = 0;
      }
      goto LABEL_13;
    }
    CWindowBackgroundTreatment::InvalidateBitmapRealization((CWindowBackgroundTreatment *)v11);
    goto LABEL_17;
  }
  v49 = 0LL;
  if ( !CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
          (int *)this + 440,
          &v49) )
  {
LABEL_35:
    v24 = 0;
    goto LABEL_27;
  }
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)&v49, (float *)&v48) )
  {
    if ( a3 )
      goto LABEL_22;
    goto LABEL_35;
  }
  v39 = 1;
  if ( CPreComputeContext::SubTreeContext::IsDirtyCollectionEnabled((CPreComputeContext::SubTreeContext *)v17) )
  {
    updated = CPreComputeContext::AddWorldBoundsToDirtyRegion(v29, (__int64)a2, (__int64)v17, (float *)&v48);
    if ( updated < 0 )
    {
      v30 = 1868LL;
      goto LABEL_52;
    }
  }
LABEL_22:
  v22 = v17[54];
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v22 + 184LL))(v22)
    || !CVisualTree::_IsInTree(v22, (__int64)a2, 2) )
  {
    v26 = CVisual::FindTreeData(a2, v22);
    if ( v26 )
    {
      v27 = (CCachedVisualImage **)v26[21];
      v28 = (CCachedVisualImage **)v26[22];
      while ( v27 != v28 )
        CCachedVisualImage::MarkAllTargetsDirty(*v27++);
    }
    v24 = v39;
    v13 = 1;
    goto LABEL_27;
  }
  if ( dword_1803E0760 )
  {
    v31 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v44, (const struct MilRectF *)&v49);
    v32 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, (const struct MilRectF *)&v48);
    v33 = DwmDbg::DbgString::DbgString(
            &v46,
            "fNodeHasDirtyBackdrop=%d, boundsDirty=%d, backgroundTreatmentWorldBounds=[%s], dirtyRegionBehindBackgroundTreatment=[%s]",
            v39,
            a3,
            *v32,
            v31);
    v34 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v50, v22);
    v35 = DwmDbg::DbgString::DbgString(&v47, "PreCompute-WindowBackgroundTreatmentBVIUpdate");
    DwmDbg::Backdrops::LogTreeWalkEtwEvent(v35, a2, v22, v34, v33);
    v36 = (char *)v50[0];
    v37 = (v50[1] - v50[0]) >> 4;
    if ( v37 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        v50,
        0LL,
        v37);
      v36 = (char *)v50[0];
    }
    v50[0] = 0LL;
    if ( v36 == &v51 )
      v36 = 0LL;
    operator delete(v36);
    if ( lpMem )
      operator delete(lpMem);
    if ( v44 )
      operator delete(v44);
  }
  v24 = v39;
  LOBYTE(v23) = v39;
  v38 = &v41;
  updated = CPreComputeContext::UpdateBVIForVisual(v45, a2, &v48, v23);
  if ( updated >= 0 )
  {
    v13 = v41;
    goto LABEL_27;
  }
  v30 = 1891LL;
LABEL_52:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)updated,
    (int)v38);
  return (unsigned int)updated;
}
