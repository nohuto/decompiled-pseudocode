/*
 * XREFs of ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@@Z @ 0x18000BABC (-Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV-$vector@VCPreWa.c)
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAAPEAVCPreWalkVisual@CPreComputeContext@@QEAV23@AEAPEAVCVisual@@AEA_N2@Z @ 0x18000BBA0 (--$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@-$vector@VCPreWalkVisual@CPreComputeContext@@V.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180012054 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18001D964 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18001F91C (--$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPreComputeContext@@U-$defau.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x18001FB14 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x180021E90 (--A-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18004A400 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180077D00 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088A84 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180098C6C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C1E64 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800C4210 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x1800C4268 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800C4598 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C84A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x1800DC298 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800E18F0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800E4358 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?ShouldMerge@CDirtyRegion@@AEAA_NII@Z @ 0x1800E9494 (-ShouldMerge@CDirtyRegion@@AEAA_NII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     McTemplateU0qqxqN8_EventWriteTransfer @ 0x1801B2328 (McTemplateU0qqxqN8_EventWriteTransfer.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x1801CB088 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComposition::CleanTrees(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  CPreComputeContext *v7; // rax
  struct CVisualTree **v8; // rbx
  __int64 v9; // r9
  struct CVisualTree *v10; // rsi
  _BYTE *v11; // rdi
  __int64 *v12; // r8
  unsigned int *v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rax
  float v26; // xmm6_4
  float v27; // xmm4_4
  float v28; // xmm7_4
  float v29; // xmm5_4
  float v30; // xmm8_4
  float v31; // xmm9_4
  __int64 v32; // rcx
  unsigned int v33; // eax
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  bool v38; // r12
  char v39; // di
  __int64 v40; // rax
  __int64 v41; // rax
  SIZE_T v42; // r12
  __int128 v43; // rdi
  bool v44; // zf
  __int64 *v45; // r15
  __int64 *v46; // r14
  struct CVisualTree *v47; // r15
  CPreComputeContext::CPreWalkVisual *n; // r14
  CPreComputeContext::CPreWalkVisual *ii; // r14
  unsigned __int64 v50; // rdi
  int v51; // r12d
  struct CVisualTree **v52; // rax
  struct CVisualTree **v53; // rbx
  _QWORD *v54; // r15
  _QWORD *v55; // rsi
  __int64 jj; // r8
  _DWORD *v57; // r9
  __int64 v58; // rax
  _BYTE *v59; // rcx
  __int64 kk; // rdx
  _QWORD **v61; // rdx
  __int64 v62; // rcx
  CPreComputeContext *v63; // r9
  __int64 v64; // rcx
  char v65; // cl
  _QWORD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 mm; // r14
  unsigned int v71; // r14d
  __int64 v72; // rcx
  __int64 i1; // r14
  int v74; // edi
  int v75; // eax
  unsigned int v76; // ecx
  int v77; // edi
  HANDLE CurrentThread; // rax
  BOOL v79; // eax
  __int64 v81; // rax
  unsigned int v82; // ecx
  __int64 v83; // r15
  struct CVisualTree *v84; // r9
  CVisual *v85; // r14
  _DWORD *v86; // r8
  __int64 v87; // rax
  _BYTE *v88; // rcx
  __int64 j; // rdx
  _QWORD **v90; // rdx
  CVisual *v91; // rcx
  CVisual *v92; // rax
  unsigned int v93; // eax
  __int64 v94; // rcx
  __int64 m; // rax
  __int64 v96; // r14
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // r15
  SIZE_T v99; // r15
  HANDLE v100; // rax
  __int64 v101; // r14
  _OWORD *v102; // rax
  unsigned __int64 v103; // r12
  CPreComputeContext *v104; // rdi
  void **v105; // r14
  int v106; // eax
  unsigned __int64 v107; // r12
  unsigned int nn; // r15d
  float *v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rcx
  CVisual **k; // rcx
  struct CVisualTree *v113; // rbx
  unsigned int v114; // r12d
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  wil::details *v130; // rcx
  unsigned __int64 v131; // rsi
  SIZE_T v132; // r9
  SIZE_T v133; // rax
  char *v134; // rdi
  void *v135; // rcx
  unsigned int *v136; // r8
  unsigned int i; // ecx
  HANDLE ProcessHeap; // rax
  LPVOID v139; // rax
  CPreComputeContext **v140; // rax
  CPreComputeContext *v141; // r14
  unsigned int v142; // ecx
  char v143; // bl
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v145; // rcx
  __int64 v146; // rax
  unsigned __int64 v147; // rdi
  _BYTE *v148; // rsi
  __int64 v149; // r14
  _OWORD *v150; // rax
  unsigned int v151[2]; // [rsp+28h] [rbp-E0h]
  void *v152; // [rsp+30h] [rbp-D8h]
  __int64 v153; // [rsp+38h] [rbp-D0h]
  char v154[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v155; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 CycleTime; // [rsp+58h] [rbp-B0h] BYREF
  struct CVisualTree *v157; // [rsp+60h] [rbp-A8h]
  _QWORD v158[3]; // [rsp+68h] [rbp-A0h] BYREF
  SIZE_T v159; // [rsp+80h] [rbp-88h]
  __int64 v160; // [rsp+88h] [rbp-80h]
  unsigned int v161; // [rsp+90h] [rbp-78h]
  struct CVisualTree **v162; // [rsp+98h] [rbp-70h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v164; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v166; // [rsp+B8h] [rbp-50h]
  unsigned int v167; // [rsp+C0h] [rbp-48h]
  __int64 v168; // [rsp+C8h] [rbp-40h]
  CPreComputeContext *v169; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v170; // [rsp+D8h] [rbp-30h] BYREF
  void *v171; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v172; // [rsp+E8h] [rbp-20h] BYREF
  void *v173; // [rsp+F0h] [rbp-18h] BYREF
  LARGE_INTEGER v174; // [rsp+F8h] [rbp-10h] BYREF
  CVisual *v175; // [rsp+100h] [rbp-8h] BYREF
  __int64 v176[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v177[4]; // [rsp+128h] [rbp+20h] BYREF
  char v178[24]; // [rsp+148h] [rbp+40h] BYREF
  char v179[24]; // [rsp+160h] [rbp+58h] BYREF
  char *v180; // [rsp+178h] [rbp+70h]
  __int64 *v181; // [rsp+180h] [rbp+78h]
  char *v182; // [rsp+188h] [rbp+80h]
  _BYTE Mem[256]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v184[24]; // [rsp+290h] [rbp+188h] BYREF
  _BYTE v185[128]; // [rsp+2A8h] [rbp+1A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B0h] [rbp+2A8h]

  v3 = 0LL;
  CycleTime = (unsigned __int64)this;
  v158[0] = 0LL;
  PerformanceCount.QuadPart = 0LL;
  v174.QuadPart = 0LL;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 4) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &CleanTrees_Start, a3, 1LL, v184);
    QueryPerformanceCounter(&PerformanceCount);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( PerformanceCount.QuadPart )
    QueryPerformanceCounter(&v174);
  v7 = (CPreComputeContext *)*((_QWORD *)this + 8);
  v8 = (struct CVisualTree **)*((_QWORD *)this + 7);
  v169 = v7;
  while ( 1 )
  {
    v162 = v8;
    v9 = -1LL;
    if ( v8 == (struct CVisualTree **)v7 )
      break;
    v10 = *v8;
    v11 = Mem;
    v12 = (__int64 *)Mem;
    v157 = v10;
    v13 = (unsigned int *)v184;
    v180 = Mem;
    v14 = 0LL;
    v15 = *((_QWORD *)v10 + 8);
    v181 = (__int64 *)Mem;
    v182 = v184;
    if ( g_pComposition )
      v14 = *((_QWORD *)g_pComposition + 62);
    if ( v15 )
    {
      while ( *(_QWORD *)(v15 + 328) != v14 )
      {
        v16 = ((char *)v12 - v11) >> 3;
        if ( !(((char *)v13 - (char *)v12) >> 3) )
        {
          if ( v16 + 1 < v16 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_276:
            _invalid_parameter_noinfo_noreturn();
          }
          v131 = detail::liberal_expansion_policy::expand(
                   (detail::liberal_expansion_policy *)v6,
                   ((char *)v13 - v11) >> 3,
                   v16 + 1);
          v133 = 8 * v131;
          if ( !is_mul_ok(v131, 8uLL) )
            v133 = v132;
          v134 = (char *)operator new(v133);
          v176[0] = (__int64)v134;
          v176[1] = v16;
          v176[2] = 0LL;
          std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
            (__int64)v178,
            v180,
            (__int64)v181,
            v176);
          v135 = v180;
          v44 = v180 == Mem;
          v180 = v134;
          if ( v44 )
            v135 = 0LL;
          operator delete(v135);
          v11 = v180;
          v12 = (__int64 *)&v180[8 * v16];
          v181 = v12;
          v182 = &v180[8 * v131];
        }
        v9 = ((char *)v12 - v11) >> 3;
        v13 = (unsigned int *)(v9 - v16);
        v17 = (__int64 *)&v11[8 * v9];
        if ( !v17 )
          goto LABEL_276;
        v18 = (((char *)v12 - v11) >> 3) - v16;
        v19 = 1LL;
        if ( (unsigned __int64)v13 > 1 )
          v18 = 1LL;
        v6 = 8 * v18;
        v20 = (__int64 *)((char *)v12 - v6);
        if ( v12 != (__int64 *)((char *)v12 - v6) )
        {
          do
          {
            --v12;
            if ( !v19 )
              goto LABEL_276;
            if ( --v19 )
              goto LABEL_276;
            v6 = *v12;
            *v17 = *v12;
          }
          while ( v12 != v20 );
          v12 = v181;
        }
        if ( (unsigned __int64)v13 > 1 )
        {
          if ( v9 && (!v11 || v9 < 0) )
            goto LABEL_276;
          v177[1] = v9;
          v177[2] = v9;
          v177[0] = v11;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v179,
            &v11[8 * v16],
            &v11[8 * v9 - 8],
            v177,
            *(_QWORD *)v151,
            v152,
            v153);
          v12 = v181;
        }
        v181 = v12 + 1;
        *(_QWORD *)&v11[8 * v16] = v15;
        v15 = *(_QWORD *)(v15 + 88);
        v12 = v181;
        v11 = v180;
        if ( !v15 )
          break;
        v13 = (unsigned int *)v182;
        v9 = -1LL;
      }
      v10 = v157;
    }
    v21 = ((char *)v12 - v11) >> 3;
    v22 = (int)v21;
    if ( (int)v21 <= 0 )
      goto LABEL_45;
    do
    {
      v23 = 0LL;
      v24 = *(_QWORD *)&v11[8 * v22 - 8];
      if ( g_pComposition )
        v23 = *((_QWORD *)g_pComposition + 62);
      if ( *(_QWORD *)(v24 + 328) != v23 )
      {
        v25 = *(_QWORD *)(v24 + 88);
        if ( !v25 || (*(_BYTE *)(v25 + 96) & 1) != 0 )
        {
          v26 = *(float *)(v24 + 124);
          v27 = 0.0;
          v28 = *(float *)(v24 + 128);
          v29 = 0.0;
          v30 = *(float *)(v24 + 140);
          v31 = *(float *)(v24 + 144);
          if ( v25 )
          {
            v27 = *(float *)(v25 + 140);
            v29 = *(float *)(v25 + 144);
          }
          v32 = *(_QWORD *)(v24 + 224);
          v13 = (unsigned int *)(v32 + 12);
          if ( (*(_DWORD *)(v32 + 4) & 0x10000000) != 0 )
          {
            v9 = *v13;
            v136 = (unsigned int *)(v32 + 12);
            if ( (*v13 & 0x7F000000) != 0x4000000 )
            {
              do
              {
                v136 = (unsigned int *)((char *)v136 + (v9 & 0xFFFFFF) + 4);
                v9 = *v136;
              }
              while ( (*v136 & 0x7F000000) != 0x4000000 );
            }
            v33 = v136[3];
            v165 = *(_QWORD *)(v136 + 1);
          }
          else
          {
            v33 = 0;
            v165 = 0LL;
          }
          v166 = v33;
          v34 = (float)(*(float *)&v165 * v27) + *(float *)(v24 + 112);
          v35 = (float)(*((float *)&v165 + 1) * v29) + *(float *)(v24 + 116);
          *(float *)(v24 + 124) = v34;
          *(float *)(v24 + 128) = v35;
          if ( (*(_DWORD *)(v32 + 4) & 0x20000000) != 0 )
          {
            for ( i = *v13; (*v13 & 0x7F000000) != 0x3000000; i = *v13 )
              v13 = (unsigned int *)((char *)v13 + (i & 0xFFFFFF) + 4);
            v168 = *(_QWORD *)(v13 + 1);
          }
          else
          {
            v168 = 0LL;
          }
          v36 = (float)(*(float *)&v168 * v27) + *(float *)(v24 + 132);
          v37 = (float)(*((float *)&v168 + 1) * v29) + *(float *)(v24 + 136);
          *(float *)(v24 + 140) = v36;
          *(float *)(v24 + 144) = v37;
          if ( v36 < 0.0 )
          {
            *(_DWORD *)(v24 + 140) = 0;
            v36 = 0.0;
          }
          if ( v37 < 0.0 )
          {
            *(_DWORD *)(v24 + 144) = 0;
            v37 = 0.0;
          }
          v38 = v26 != v34 || v28 != v35;
          if ( v30 == v36 && v31 == v37 )
          {
            v39 = 0;
          }
          else
          {
            v129 = *(_QWORD *)(v24 + 248);
            v39 = 1;
            if ( v129 && *(_BYTE *)(v129 + 136) )
              CVisual::OnClipChanged((CVisual *)v24);
            CVisual::OnLayoutChanged((CVisual *)v24);
          }
          if ( v38 )
          {
            CVisual::OnOuterTransformChanged((CVisual *)v24);
          }
          else if ( !v39 )
          {
LABEL_42:
            *(_QWORD *)(v24 + 328) = v23;
            v11 = v180;
            goto LABEL_43;
          }
          *(_BYTE *)(v24 + 96) |= 1u;
          goto LABEL_42;
        }
      }
LABEL_43:
      --v22;
    }
    while ( v22 > 0 );
    v12 = v181;
    v10 = v157;
LABEL_45:
    v40 = ((char *)v12 - v11) >> 3;
    if ( v40 )
    {
      v12 -= v40;
      v181 = v12;
    }
    v180 = 0LL;
    if ( v11 != Mem && v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, unsigned int *, __int64 *, __int64))(*(_QWORD *)v10 + 184LL))(
           v10,
           v13,
           v12,
           v9) )
    {
      v6 = *((_QWORD *)v10 + 686);
      v81 = (v6 - *((_QWORD *)v10 + 685)) >> 3;
      if ( v81 )
      {
        v6 -= 8 * v81;
        *((_QWORD *)v10 + 686) = v6;
      }
    }
    v41 = *((_QWORD *)v10 + 8);
    *(_OWORD *)&v158[1] = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = (*(_BYTE *)(v41 + 96) & 1) == 0;
    v159 = 0LL;
    if ( v44 )
      goto LABEL_50;
    v82 = *((_DWORD *)g_pComposition + 260);
    if ( !v82 )
      goto LABEL_136;
    v83 = 0LL;
    v3 = v82;
    while ( 2 )
    {
      v84 = v157;
      v85 = *(CVisual **)(v83 + *((_QWORD *)g_pComposition + 127));
      if ( v85 == *((CVisual **)v157 + 8) )
        goto LABEL_245;
      v86 = (_DWORD *)*((_QWORD *)v85 + 29);
      if ( (*v86 & 0x1000000) == 0 )
        goto LABEL_245;
      v87 = (unsigned int)v86[1];
      v88 = v86 + 2;
      for ( j = 0LL; (unsigned int)j < (unsigned int)v87; ++v88 )
      {
        if ( *v88 == 8 )
          break;
        j = (unsigned int)(j + 1);
      }
      v90 = (unsigned int)j >= (unsigned int)v87
          ? 0LL
          : (_QWORD **)((char *)v86 + 8 * j - (((_BYTE)v87 + 15) & 7) + v87 + 15);
      if ( !*v90 )
        goto LABEL_245;
      if ( !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v90 + 184LL))(**v90) )
      {
        v84 = v157;
LABEL_245:
        CVisual::InvalidateTransformParent(v85, v84);
        goto LABEL_134;
      }
      v91 = v85;
      v154[0] = 0;
      LOBYTE(v155) = 0;
      v175 = v85;
      v5 = *((_QWORD *)v157 + 8);
      v92 = v85;
      while ( v92 != (CVisual *)v5 )
      {
        if ( !v91
          || (v91 = (CVisual *)*((_QWORD *)v91 + 11)) == 0LL
          || v92 != v91 && (v91 = (CVisual *)*((_QWORD *)v91 + 11), v92 != v91) )
        {
          v92 = (CVisual *)*((_QWORD *)v92 + 11);
          if ( v92 )
            continue;
        }
        goto LABEL_134;
      }
      for ( k = (CVisual **)v43; k != *((CVisual ***)&v43 + 1); k += 2 )
      {
        if ( *k == v85 )
          break;
      }
      if ( k == *((CVisual ***)&v43 + 1) )
      {
        if ( *((_QWORD *)&v43 + 1) == v42 )
        {
          std::vector<CPreComputeContext::CPreWalkVisual>::_Emplace_reallocate<CVisual * &,bool &,bool &>(
            (__int128 **)&v158[1],
            *((char **)&v43 + 1),
            &v175,
            (char *)&v155,
            v154);
          v42 = v159;
          v43 = *(_OWORD *)&v158[1];
        }
        else
        {
          **((_QWORD **)&v43 + 1) = v85;
          *(_WORD *)(*((_QWORD *)&v43 + 1) + 8LL) = 0;
          *((_QWORD *)&v43 + 1) += 16LL;
          v158[2] = *((_QWORD *)&v43 + 1);
        }
      }
LABEL_134:
      v83 += 8LL;
      if ( --v3 )
        continue;
      break;
    }
    v8 = v162;
LABEL_136:
    v6 = *((unsigned int *)g_pComposition + 268);
    v93 = 0;
    v161 = 0;
    v167 = v6;
    if ( (_DWORD)v6 )
    {
      while ( 2 )
      {
        v94 = *(_QWORD *)(*((_QWORD *)g_pComposition + 131) + 8LL * v93);
        v160 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 200LL))(v94);
        v5 = v160;
        v6 = v160;
        if ( !v160 )
          goto LABEL_144;
        while ( v5 != *((_QWORD *)v157 + 8) )
        {
          if ( !v6 || (v6 = *(_QWORD *)(v6 + 88)) == 0 || v5 != v6 && (v6 = *(_QWORD *)(v6 + 88), v5 != v6) )
          {
            v5 = *(_QWORD *)(v5 + 88);
            if ( v5 )
              continue;
          }
          goto LABEL_144;
        }
        for ( m = v43; m != *((_QWORD *)&v43 + 1); m += 16LL )
        {
          if ( *(_QWORD *)m == v160 )
            break;
        }
        if ( m != *((_QWORD *)&v43 + 1) )
        {
          *(_BYTE *)(m + 8) |= 1u;
          goto LABEL_144;
        }
        if ( *((_QWORD *)&v43 + 1) == v42 )
        {
          v96 = (__int64)(*((_QWORD *)&v43 + 1) - v43) >> 4;
          if ( v96 == 0xFFFFFFFFFFFFFFFLL )
            std::_Xlength_error("vector too long");
          v5 = v96 + 1;
          v97 = (__int64)(v42 - v43) >> 4;
          v164 = (_QWORD *)(v96 + 1);
          v6 = v97 >> 1;
          if ( v97 > 0xFFFFFFFFFFFFFFFLL - (v97 >> 1) )
            goto LABEL_246;
          v98 = v96 + 1;
          if ( v97 + v6 >= v5 )
            v98 = v97 + v6;
          if ( v98 > 0xFFFFFFFFFFFFFFFLL )
LABEL_246:
            std::_Throw_bad_array_new_length();
          v99 = 16 * v98;
          if ( v99 >= 0x1000 )
          {
            if ( v99 + 39 < v99 )
              goto LABEL_246;
            v139 = operator new(v99 + 39);
            if ( !v139 )
              _invalid_parameter_noinfo_noreturn();
            v3 = ((unsigned __int64)v139 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
            *(_QWORD *)(v3 - 8) = v139;
LABEL_160:
            v5 = (unsigned __int64)v164;
          }
          else if ( v99 )
          {
            v100 = GetProcessHeap();
            v3 = (unsigned __int64)HeapAlloc(v100, 0, v99);
            if ( !v3 )
              ModuleFailFastForHRESULT(2147942414LL, retaddr);
            goto LABEL_160;
          }
          v101 = 2 * v96;
          *(_QWORD *)(v3 + 8 * v101) = v160;
          v102 = (_OWORD *)v43;
          *(_WORD *)(v3 + 8 * v101 + 8) = 1;
          if ( (_QWORD)v43 != *((_QWORD *)&v43 + 1) )
          {
            v6 = v3 - v43;
            do
            {
              *(_OWORD *)((char *)v102 + v6) = *v102;
              ++v102;
            }
            while ( v102 != *((_OWORD **)&v43 + 1) );
          }
          if ( (_QWORD)v43 )
          {
            v103 = 16 * v97;
            v170 = v103;
            v171 = (void *)v43;
            if ( v103 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v171, &v170);
              v103 = v170;
              *(_QWORD *)&v43 = v171;
            }
            operator delete((void *)v43, v103);
            v5 = (unsigned __int64)v164;
          }
          v42 = v99 + v3;
          v158[1] = v3;
          v159 = v99 + v3;
          *(_QWORD *)&v43 = v3;
          *((_QWORD *)&v43 + 1) = v3 + 16 * v5;
          v158[2] = *((_QWORD *)&v43 + 1);
          v3 = 0LL;
        }
        else
        {
          **((_QWORD **)&v43 + 1) = v160;
          *(_WORD *)(*((_QWORD *)&v43 + 1) + 8LL) = 1;
          *((_QWORD *)&v43 + 1) += 16LL;
          v158[2] = *((_QWORD *)&v43 + 1);
        }
LABEL_144:
        v93 = v161 + 1;
        v161 = v93;
        if ( v93 >= v167 )
          break;
        continue;
      }
    }
LABEL_50:
    if ( CPreComputeContext::s_projectedShadowsEnabled )
    {
      v45 = (__int64 *)*((_QWORD *)g_pComposition + 136);
      v46 = (__int64 *)*((_QWORD *)g_pComposition + 135);
      if ( v46 != v45 )
      {
        v113 = v157;
        do
          CPreComputeContext::CPreWalkVisual::Add(*v46++, (__int64)v113, 0, 1, &v158[1]);
        while ( v46 != v45 );
        v42 = v159;
        v43 = *(_OWORD *)&v158[1];
        v8 = v162;
      }
    }
    v47 = v157;
    for ( n = (CPreComputeContext::CPreWalkVisual *)v43;
          n != *((CPreComputeContext::CPreWalkVisual **)&v43 + 1);
          n = (CPreComputeContext::CPreWalkVisual *)((char *)n + 16) )
    {
      CPreComputeContext::CPreWalkVisual::UpdateTransform(n, v47);
    }
    for ( ii = (CPreComputeContext::CPreWalkVisual *)v43;
          ii != *((CPreComputeContext::CPreWalkVisual **)&v43 + 1);
          ii = (CPreComputeContext::CPreWalkVisual *)((char *)ii + 16) )
    {
      CPreComputeContext::CPreWalkVisual::UpdateTransformChildBounds(ii, v47);
    }
    if ( (_QWORD)v43 )
    {
      v173 = (void *)v43;
      v107 = (v42 - v43) & 0xFFFFFFFFFFFFFFF0uLL;
      v172 = v107;
      if ( v107 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v173, &v172);
        v107 = v172;
        *(_QWORD *)&v43 = v173;
      }
      operator delete((void *)v43, v107);
      v159 = 0LL;
      *(_OWORD *)&v158[1] = 0LL;
    }
    v7 = v169;
    ++v8;
  }
  v50 = CycleTime;
  v51 = v158[0];
  v52 = *(struct CVisualTree ***)(CycleTime + 64);
  v53 = *(struct CVisualTree ***)(CycleTime + 56);
  v162 = v52;
  while ( v53 != v52 )
  {
    v54 = *v53;
    v160 = (__int64)v54;
    v55 = v54;
    for ( jj = v54[8]; jj; jj = *(_QWORD *)(jj + 88) )
    {
      v57 = *(_DWORD **)(jj + 232);
      if ( (*v57 & 0x4000000) != 0 )
      {
        v58 = (unsigned int)v57[1];
        v59 = v57 + 2;
        for ( kk = 0LL; (unsigned int)kk < (unsigned int)v58; ++v59 )
        {
          if ( *v59 == 6 )
            break;
          kk = (unsigned int)(kk + 1);
        }
        if ( (unsigned int)kk >= (unsigned int)v58 )
          v61 = 0LL;
        else
          v61 = (_QWORD **)((char *)v57 + 8 * kk - (((_BYTE)v58 + 15) & 7) + v58 + 15);
        if ( *v61 )
          v55 = *v61;
      }
    }
    v62 = v55[8];
    if ( v62 && *(_BYTE *)(v62 + 96) )
      ++HIDWORD(v158[0]);
    v5 = 0LL;
    v63 = *(CPreComputeContext **)(v50 + 208);
    if ( g_pComposition )
      v5 = *((_QWORD *)g_pComposition + 62);
    if ( v55[14] != v5 && v62 && *(_BYTE *)(v62 + 96) )
    {
      v104 = 0LL;
      v105 = 0LL;
      if ( !v63 )
      {
        v140 = std::make_unique<CPreComputeContext,,0>(&v169);
        if ( &v164 != (_QWORD **)v140 )
        {
          v104 = *v140;
          *v140 = 0LL;
        }
        v141 = v169;
        if ( v169 )
        {
          CPreComputeContext::~CPreComputeContext((void **)v169);
          operator delete(v141, 0x7B0uLL);
        }
        v63 = v104;
        v105 = (void **)v104;
      }
      v106 = CPreComputeContext::PreCompute(v63, (struct CVisualTree *)v55);
      v74 = v106;
      if ( v106 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
          (const char *)(unsigned int)v106,
          v151[0]);
        if ( v105 )
        {
          CPreComputeContext::~CPreComputeContext(v105);
          operator delete(v105, 0x7B0uLL);
        }
        MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0, v74, 0xC35u, 0LL);
        goto LABEL_96;
      }
      if ( v105 )
      {
        CPreComputeContext::~CPreComputeContext(v105);
        operator delete(v105, 0x7B0uLL);
      }
    }
    v64 = 0LL;
    if ( g_pComposition )
      v64 = *((_QWORD *)g_pComposition + 62);
    if ( v55[14] != v64 )
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, CPreComputeContext *))(*v55 + 232LL))(
        v55,
        v5,
        jj,
        v63);
      v65 = *((_BYTE *)v55 + 4714);
      v66 = v55 + 13;
      v55[14] = 0LL;
      *((_DWORD *)v55 + 1130) = 1065353216;
      *(_WORD *)((char *)v55 + 4525) = 0;
      *((_BYTE *)v55 + 4524) = v65 == 0;
      v67 = v55[13];
      *((_DWORD *)v55 + 731) = 0;
      *((_BYTE *)v55 + 4527) = 0;
      *(_WORD *)((char *)v55 + 4529) = 0;
      *(_OWORD *)(v55 + 563) = *(_OWORD *)(v67 + 4592);
      if ( v65 )
      {
        if ( *((_BYTE *)v55 + 4528) )
          *((_BYTE *)v55 + 4528) = 0;
        memset_0(v55 + 209, 0, 0x80uLL);
        memset_0(v55 + 273, 0, 0x120uLL);
        if ( !*((_BYTE *)v55 + 4528) )
          CDirtyRegion::ClearDirtyRegionAnnotationLists((CDirtyRegion *)(v55 + 13));
        v55[226] = 0LL;
        v55[225] = 0LL;
        *((_BYTE *)v55 + 2068) = 1;
        *(_QWORD *)((char *)v55 + 2060) = 0LL;
        *((_DWORD *)v55 + 514) = 0;
        v55[210] = 0LL;
        v55[209] = 0LL;
        v55[228] = 0LL;
        v55[227] = 0LL;
        *((_BYTE *)v55 + 2084) = 1;
        *(_QWORD *)((char *)v55 + 2076) = 0LL;
        *((_DWORD *)v55 + 518) = 0;
        v55[212] = 0LL;
        v55[211] = 0LL;
        v55[230] = 0LL;
        v55[229] = 0LL;
        *((_BYTE *)v55 + 2100) = 1;
        *(_QWORD *)((char *)v55 + 2092) = 0LL;
        *((_DWORD *)v55 + 522) = 0;
        v55[214] = 0LL;
        v55[213] = 0LL;
        v55[232] = 0LL;
        v55[231] = 0LL;
        *((_BYTE *)v55 + 2116) = 1;
        *(_QWORD *)((char *)v55 + 2108) = 0LL;
        *((_DWORD *)v55 + 526) = 0;
        v55[216] = 0LL;
        v55[215] = 0LL;
        v55[234] = 0LL;
        v55[233] = 0LL;
        *((_BYTE *)v55 + 2132) = 1;
        *(_QWORD *)((char *)v55 + 2124) = 0LL;
        *((_DWORD *)v55 + 530) = 0;
        v55[218] = 0LL;
        v55[217] = 0LL;
        v55[236] = 0LL;
        v55[235] = 0LL;
        *((_BYTE *)v55 + 2148) = 1;
        *(_QWORD *)((char *)v55 + 2140) = 0LL;
        *((_DWORD *)v55 + 534) = 0;
        v55[220] = 0LL;
        v55[219] = 0LL;
        v55[238] = 0LL;
        v55[237] = 0LL;
        *((_BYTE *)v55 + 2164) = 1;
        *(_QWORD *)((char *)v55 + 2156) = 0LL;
        *((_DWORD *)v55 + 538) = 0;
        v55[222] = 0LL;
        v55[221] = 0LL;
        v55[240] = 0LL;
        v55[239] = 0LL;
        *((_BYTE *)v55 + 2180) = 1;
        *(_QWORD *)((char *)v55 + 2172) = 0LL;
        *((_DWORD *)v55 + 542) = 0;
        v55[224] = 0LL;
        v55[223] = 0LL;
      }
      v68 = (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 216LL))(v55);
      if ( v68 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v68 + 24LL))(v68, v55);
      v69 = (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 216LL))(v55);
      if ( v69 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      for ( mm = (__int64)(v55[568] - v55[567]) >> 3; (int)mm > 0; LODWORD(mm) = mm - 1 )
      {
        v110 = *(_QWORD *)(v55[567] + 8LL * (unsigned int)(mm - 1));
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v110 + 24LL))(v110, v55, v55 + 13);
      }
      if ( *((_BYTE *)v55 + 4524) )
      {
        v71 = 1;
      }
      else
      {
        v71 = 0;
        memset_0((char *)v55 + 2764, 0, 0x80uLL);
        v3 = 0LL;
LABEL_186:
        for ( nn = 0; nn < 8; ++nn )
        {
LABEL_187:
          v109 = (float *)&v66[2 * nn + 196];
          if ( v109[2] > *v109 && v109[3] > v109[1] )
          {
            v114 = nn + 1;
            if ( nn + 1 < 8 )
            {
              while ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v66[2 * v114 + 196])
                   || !CDirtyRegion::ShouldMerge((CDirtyRegion *)(v55 + 13), nn, v114) )
              {
                if ( ++v114 >= 8 )
                {
                  ++nn;
                  goto LABEL_187;
                }
              }
              CDirtyRegion::Merge((CDirtyRegion *)(v55 + 13), nn, v114);
              goto LABEL_186;
            }
          }
        }
        if ( *((float *)v55 + 420) > *((float *)v55 + 418) && *((float *)v55 + 421) > *((float *)v55 + 419) )
        {
          v71 = 1;
          *(_OWORD *)((char *)v55 + 2764) = *(_OWORD *)(v55 + 209);
          *((_DWORD *)v55 + 723) = 0;
        }
        if ( *((float *)v55 + 424) > *((float *)v55 + 422) && *((float *)v55 + 425) > *((float *)v55 + 423) )
        {
          v115 = 2LL * v71;
          v116 = v71++;
          *(_OWORD *)((char *)&v66[v115 + 332] + 4) = *(_OWORD *)(v55 + 211);
          *((_DWORD *)v66 + v116 + 697) = 1;
        }
        if ( *((float *)v55 + 428) > *((float *)v55 + 426) && *((float *)v55 + 429) > *((float *)v55 + 427) )
        {
          v117 = 2LL * v71;
          v118 = v71++;
          *(_OWORD *)((char *)&v66[v117 + 332] + 4) = *(_OWORD *)(v55 + 213);
          *((_DWORD *)v66 + v118 + 697) = 2;
        }
        if ( *((float *)v55 + 432) > *((float *)v55 + 430) && *((float *)v55 + 433) > *((float *)v55 + 431) )
        {
          v119 = 2LL * v71;
          v120 = v71++;
          *(_OWORD *)((char *)&v66[v119 + 332] + 4) = *(_OWORD *)(v55 + 215);
          *((_DWORD *)v66 + v120 + 697) = 3;
        }
        if ( *((float *)v55 + 436) > *((float *)v55 + 434) && *((float *)v55 + 437) > *((float *)v55 + 435) )
        {
          v121 = 2LL * v71;
          v122 = v71++;
          *(_OWORD *)((char *)&v66[v121 + 332] + 4) = *(_OWORD *)(v55 + 217);
          *((_DWORD *)v66 + v122 + 697) = 4;
        }
        if ( *((float *)v55 + 440) > *((float *)v55 + 438) && *((float *)v55 + 441) > *((float *)v55 + 439) )
        {
          v123 = 2LL * v71;
          v124 = v71++;
          *(_OWORD *)((char *)&v66[v123 + 332] + 4) = *(_OWORD *)(v55 + 219);
          *((_DWORD *)v66 + v124 + 697) = 5;
        }
        if ( *((float *)v55 + 444) > *((float *)v55 + 442) && *((float *)v55 + 445) > *((float *)v55 + 443) )
        {
          v125 = 2LL * v71;
          v126 = v71++;
          *(_OWORD *)((char *)&v66[v125 + 332] + 4) = *(_OWORD *)(v55 + 221);
          *((_DWORD *)v66 + v126 + 697) = 6;
        }
        if ( *((float *)v55 + 448) > *((float *)v55 + 446) && *((float *)v55 + 449) > *((float *)v55 + 447) )
        {
          v127 = 2LL * v71;
          v128 = v71++;
          *(_OWORD *)((char *)&v66[v127 + 332] + 4) = *(_OWORD *)(v55 + 223);
          *((_DWORD *)v66 + v128 + 697) = 7;
        }
        v54 = (_QWORD *)v160;
        v51 = v158[0];
      }
      *((_DWORD *)v55 + 731) = v71;
      v44 = *((_BYTE *)v55 + 4529) == 0;
      *((_BYTE *)v55 + 4526) = 1;
      if ( v44 )
      {
        if ( *((_BYTE *)v55 + 4530) )
        {
          CDirtyRegion::SetFullDirty((CDirtyRegion *)(v55 + 13));
          *((_BYTE *)v55 + 4530) = 0;
        }
      }
      else
      {
        CDirtyRegion::SetRedrawRects((CDirtyRegion *)(v55 + 13));
        CDirtyRegion::SetFullDirty((CDirtyRegion *)(v55 + 13));
        *(_WORD *)((char *)v55 + 4529) = 0;
      }
      v72 = 0LL;
      if ( g_pComposition )
        v72 = *((_QWORD *)g_pComposition + 62);
      v55[14] = v72;
      for ( i1 = (__int64)(v55[568] - v55[567]) >> 3; (int)i1 > 0; LODWORD(i1) = i1 - 1 )
      {
        v111 = *(_QWORD *)(v55[567] + 8LL * (unsigned int)(i1 - 1));
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v111 + 16LL))(v111, v55, v55 + 13);
      }
    }
    v74 = 0;
LABEL_96:
    if ( !v51 || v51 >= 0 && v74 < 0 )
    {
      v51 = v74;
      LODWORD(v158[0]) = v74;
    }
    if ( v55 != v54 )
    {
      v75 = CVisualTree::Clean((CVisualTree *)v54, *(struct CPreComputeContext **)(CycleTime + 208));
      v77 = v75;
      if ( v75 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0xC3Du, 0LL);
      if ( !v51 || v51 >= 0 && v77 < 0 )
      {
        v51 = v77;
        LODWORD(v158[0]) = v77;
      }
    }
    v52 = v162;
    ++v53;
    v50 = CycleTime;
  }
  if ( *(_BYTE *)(v50 + 1280) )
  {
    v130 = *(wil::details **)(v50 + 1264);
    *(_BYTE *)(v50 + 1280) = 0;
    wil::details::SetEvent(v130, (void *)v5);
  }
  if ( v50 != -16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 16));
  if ( PerformanceCount.QuadPart )
  {
    v143 = 0;
    memset_0(v185, 0, sizeof(v185));
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(v50 + 216));
    v145 = PrimaryMonitorTarget;
    if ( PrimaryMonitorTarget )
    {
      v146 = *(_QWORD *)PrimaryMonitorTarget;
      CycleTime = 0LL;
      if ( (*(int (__fastcall **)(struct IMonitorTarget *, unsigned __int64 *))(v146 + 16))(v145, &CycleTime) >= 0 )
      {
        CDirtyRegion::GetDirtyRects(CycleTime + 104, &v165);
        v143 = v165;
        if ( (_DWORD)v165 )
        {
          v147 = 0LL;
          v148 = v185;
          v149 = (unsigned int)v165;
          do
          {
            v150 = (_OWORD *)gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
                               (gsl::details *)&v165,
                               v147++);
            v148 += 16;
            *((_OWORD *)v148 - 1) = *v150;
            --v149;
          }
          while ( v149 );
        }
      }
      if ( CycleTime )
        CResource::InternalRelease((CResource *)CycleTime);
    }
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 4) != 0 )
      McTemplateU0qqxqN8_EventWriteTransfer(
        (unsigned int)v185,
        (unsigned __int64)(1000000 * (v174.QuadPart - PerformanceCount.QuadPart)) % g_qpcFrequency.QuadPart,
        v51,
        HIDWORD(v158[0]),
        (unsigned __int64)(1000000 * (v174.QuadPart - PerformanceCount.QuadPart)) / g_qpcFrequency.QuadPart,
        v143,
        v153,
        (__int64)v185);
  }
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v79 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v3 = CycleTime;
    if ( v79 )
      qword_1803E2A68 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v3;
  return (unsigned int)v51;
}
