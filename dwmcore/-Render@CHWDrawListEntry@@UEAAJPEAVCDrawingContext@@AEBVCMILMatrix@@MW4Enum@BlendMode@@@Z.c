/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D6F0 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000D930 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000DAAC (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DB70 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000DDE0 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ?ApplyRenderState@CStateSettingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180014E98 (-ApplyRenderState@CStateSettingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003127C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A39C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z @ 0x1800827D0 (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAX_K@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180085950 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x180085A34 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 *     ?GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180085C7C (-GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C400 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18008E300 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008E7AC (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800903EC (-ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?GetWorldBounds@CCpuClipAntialiasBatchCommand@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090484 (-GetWorldBounds@CCpuClipAntialiasBatchCommand@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180091EBC (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x1800C383C (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D9FD8 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800E07BC (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??0?$com_ptr_t@VCHwLightCollectionBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCHwLightCollectionBuffer@@@Z @ 0x1800E4550 (--0-$com_ptr_t@VCHwLightCollectionBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCHwLightCol.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800F58AC (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x1801166B0 (-GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?TryGetClipPlaneInfo@CDrawingContext@@QEBAPEAVClipPlaneInfoRef@@XZ @ 0x1801D3E04 (-TryGetClipPlaneInfo@CDrawingContext@@QEBAPEAVClipPlaneInfoRef@@XZ.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FBED8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801FEC78 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0CCpuClipAntialiasBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802021AC (--0CCpuClipAntialiasBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z.c)
 *     ?ApplyRenderState@CGroupBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180207514 (-ApplyRenderState@CGroupBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, CBatchCommand *a3, float a4, unsigned int a5)
{
  int v5; // eax
  CMegaRectBatchCommand *v6; // rbx
  __int64 v7; // r14
  float v8; // xmm6_4
  unsigned int v9; // r15d
  __m128 *v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  int CurrentLightBufferForContextNoRef; // r13d
  int v16; // r13d
  __int64 v17; // rdx
  unsigned int v18; // eax
  CMegaRectBatchCommand *v19; // rcx
  int v20; // eax
  int v21; // r11d
  CBatchCommand *v22; // r13
  int v23; // r11d
  CBatchCommand *v24; // rax
  CLightStack *v25; // rcx
  __int64 v26; // rax
  struct CDrawListEntryBatch *ClipPlaneInfo; // r12
  __int64 v28; // rbx
  struct CHwLightCollectionBuffer *v29; // rsi
  int v30; // edi
  int v31; // ebx
  int v32; // edi
  struct CDrawListEntryBatch *v33; // rdi
  CMegaRectBatchCommand *v34; // r12
  CMegaRectBatchCommand *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rsi
  struct CHwLightCollectionBuffer *v38; // rbx
  float *v39; // rdi
  bool v40; // zf
  int v41; // r11d
  char v42; // r8
  int v43; // edi
  float v44; // xmm6_4
  float v45; // xmm7_4
  int v46; // r15d
  int *v47; // rdx
  __int64 v48; // r14
  int v49; // eax
  char v50; // al
  __int64 v51; // r8
  int *v52; // r10
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r9
  float *v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rcx
  struct CHwLightCollectionBuffer *v60; // rdi
  __int64 v61; // rcx
  struct CHwLightCollectionBuffer *v62; // rcx
  struct CHwLightCollectionBuffer *v63; // rcx
  __int64 v64; // rdi
  struct CHwLightCollectionBuffer *v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  CBatchCommand *v71; // rsi
  struct CHwLightCollectionBuffer *v73; // rdi
  struct CHwLightCollectionBuffer *v74; // rax
  __int128 v75; // xmm0
  int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // r8
  __int64 v79; // r9
  struct CD2DTarget *CurrentTargetNoRef; // rax
  unsigned int v81; // ecx
  struct CDrawListEntryBatch *v82; // rdi
  __int128 v83; // xmm0
  __int64 v84; // r15
  int v85; // eax
  unsigned int v86; // r9d
  float v87; // xmm6_4
  unsigned int v88; // r8d
  __int64 v89; // rdx
  CBatchCommand *v90; // rax
  float *Primitive; // rax
  char *v92; // rbx
  __int64 v93; // rax
  unsigned __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rax
  float v97; // xmm3_4
  float v98; // xmm2_4
  float r; // xmm4_4
  float g; // xmm5_4
  float b; // xmm1_4
  float a; // xmm0_4
  float v103; // xmm1_4
  unsigned int v104; // ebx
  __int64 v105; // r15
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rcx
  CBatchCommand *v109; // rcx
  unsigned int b_low; // edx
  CBatchCommand *v111; // rcx
  __int64 v112; // rax
  CBatchOptimizer *v113; // rcx
  unsigned int v114; // edx
  CBatchCommand *v115; // rax
  unsigned int v116; // ecx
  int v117; // eax
  unsigned int v118; // ecx
  __m128 v119; // xmm2
  float v120; // xmm3_4
  float v121; // xmm1_4
  float v122; // xmm0_4
  D3DVALUE v123; // xmm3_4
  D3DVALUE v124; // xmm0_4
  CDrawListPrimitive *v125; // rcx
  unsigned int v126; // edx
  int v127; // eax
  unsigned int v128; // ecx
  unsigned int v129; // edx
  unsigned int v130; // ecx
  int v131; // eax
  unsigned int v132; // ecx
  int v133; // ebx
  unsigned int v134; // ecx
  char v135; // [rsp+38h] [rbp-81h]
  char v136[7]; // [rsp+39h] [rbp-80h] BYREF
  CMegaRectBatchCommand *v137; // [rsp+40h] [rbp-79h] BYREF
  CBatchCommand *v138; // [rsp+48h] [rbp-71h] BYREF
  struct CDrawListEntryBatch *v139; // [rsp+50h] [rbp-69h] BYREF
  CBatchCommand *v140[2]; // [rsp+58h] [rbp-61h] BYREF
  struct _D3DCOLORVALUE v141; // [rsp+68h] [rbp-51h] BYREF
  char v142; // [rsp+78h] [rbp-41h]
  struct CHwLightCollectionBuffer *v143[2]; // [rsp+80h] [rbp-39h] BYREF
  CBatchCommand *v144[2]; // [rsp+90h] [rbp-29h] BYREF
  void *retaddr; // [rsp+110h] [rbp+57h]

  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = a4;
  v9 = a5;
  v140[0] = a3;
  v137 = 0LL;
  v143[0] = 0LL;
  v139 = 0LL;
  if ( (v5 & 0x2000) != 0 )
  {
    if ( *(float *)(a1 + 36) == 0.0 )
    {
      v9 = 15;
      if ( (v5 & 1) != 0 )
        v9 = 5;
    }
    else
    {
      v9 = 19;
    }
    v8 = *(float *)&FLOAT_1_0;
  }
  else if ( a4 == 1.0 && !a5 && (v5 & 1) != 0 )
  {
    v9 = 5;
  }
  v12 = *(__m128 **)(a1 + 16);
  if ( v12 )
  {
    v119 = v12[4];
    v120 = _mm_shuffle_ps(v119, v119, 255).m128_f32[0];
    v141.r = (float)(v119.m128_f32[0] * v120) * *(float *)(a1 + 24);
    v121 = v120 * _mm_shuffle_ps(v119, v119, 85).m128_f32[0];
    v122 = v120;
    v123 = v120 * *(float *)(a1 + 36);
    v141.g = v121 * *(float *)(a1 + 28);
    v141.a = v123;
    v124 = (float)(v122 * _mm_shuffle_ps(v119, v119, 170).m128_f32[0]) * *(float *)(a1 + 32);
    v125 = *(CDrawListPrimitive **)(a1 + 64);
    v141.b = v124;
    CDrawListPrimitive::UpdatePremultipliedColor(v125, &v141);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 48LL))(*(_QWORD *)(a1 + 72), a2);
  CurrentLightBufferForContextNoRef = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x6Cu, 0LL);
    goto LABEL_115;
  }
  v16 = 0;
  if ( *(_DWORD *)(v7 + 88) )
    goto LABEL_10;
  v115 = (CBatchCommand *)DefaultHeap::Alloc(0xB8uLL);
  v144[0] = v115;
  if ( v115 )
  {
    *(_DWORD *)v115 = 0;
    v138 = v115;
    v117 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v7 + 64, &v138, 1LL);
    v16 = v117;
    if ( v117 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0x16Fu, 0LL);
      CBatchCommand::`scalar deleting destructor'(v144[0], v126);
LABEL_13:
      LODWORD(v138) = v16;
      goto LABEL_14;
    }
LABEL_10:
    v17 = (unsigned int)(*(_DWORD *)(v7 + 88) - 1);
    v6 = *(CMegaRectBatchCommand **)(*(_QWORD *)(v7 + 64) + 8 * v17);
    v18 = *(_DWORD *)(v7 + 96);
    *(_DWORD *)(v7 + 88) = v17;
    if ( v18 >= (unsigned int)v17 )
      v18 = v17;
    *(_DWORD *)(v7 + 96) = v18;
    goto LABEL_13;
  }
  LODWORD(v138) = -2147024882;
  v16 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, -2147024882, 0x16Du, 0LL);
LABEL_14:
  v19 = v137;
  v137 = v6;
  if ( v19 )
  {
    CBatchCommand::`scalar deleting destructor'(v19, v17);
    v6 = v137;
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v16, 0x6Eu, 0LL);
    CurrentLightBufferForContextNoRef = (int)v138;
    goto LABEL_115;
  }
  v20 = *(_DWORD *)(a1 + 48);
  v21 = 1;
  if ( (v20 & 8) != 0 )
  {
    v22 = v140[0];
    if ( v9 == 5
      && (CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v140[0])
       || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v22)) )
    {
      v21 = 4;
    }
    v23 = v21 - 4;
    if ( !v23 )
    {
      *(_DWORD *)v6 = 4;
      *((_QWORD *)v6 + 1) = a1;
      (**(void (__fastcall ***)(__int64))a1)(a1);
      v90 = v140[0];
      *((_OWORD *)v6 + 1) = *(_OWORD *)v140[0];
      *((_OWORD *)v6 + 2) = *((_OWORD *)v90 + 1);
      *((_OWORD *)v6 + 3) = *((_OWORD *)v90 + 2);
      *((_OWORD *)v6 + 4) = *((_OWORD *)v90 + 3);
      LODWORD(v90) = *((_DWORD *)v90 + 16);
      *((float *)v6 + 22) = v8;
      *((_DWORD *)v6 + 20) = (_DWORD)v90;
      *((_DWORD *)v6 + 21) = v9;
      *((_BYTE *)v6 + 92) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) == 2;
      *((_QWORD *)v6 + 12) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
      *((_QWORD *)v6 + 14) = 0LL;
      goto LABEL_26;
    }
    if ( v23 != 1 )
    {
LABEL_25:
      *(_DWORD *)v6 = 1;
      *((_QWORD *)v6 + 1) = a1;
      (**(void (__fastcall ***)(__int64))a1)(a1);
      v24 = v140[0];
      *((_OWORD *)v6 + 1) = *(_OWORD *)v140[0];
      *((_OWORD *)v6 + 2) = *((_OWORD *)v24 + 1);
      *((_OWORD *)v6 + 3) = *((_OWORD *)v24 + 2);
      *((_OWORD *)v6 + 4) = *((_OWORD *)v24 + 3);
      LODWORD(v24) = *((_DWORD *)v24 + 16);
      *((float *)v6 + 22) = v8;
      *((_DWORD *)v6 + 20) = (_DWORD)v24;
      *((_DWORD *)v6 + 21) = v9;
      *((_BYTE *)v6 + 92) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) == 2;
      goto LABEL_26;
    }
  }
  else if ( (v20 & 0x1000) == 0 )
  {
    goto LABEL_25;
  }
  CCpuClipAntialiasBatchCommand::CCpuClipAntialiasBatchCommand(v6, a1, v9);
LABEL_26:
  if ( *(_DWORD *)v137 == 4 )
  {
    v84 = *(_QWORD *)(a2 + 8072);
    v144[1] = 0LL;
    v144[0] = 0LL;
    if ( v84 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 24LL))(a2 + 24) )
    {
      v40 = *(_DWORD *)v137 == 5;
      *(struct _D3DCOLORVALUE *)&v141.r = 0LL;
      if ( v40 )
      {
        CCpuClipAntialiasBatchCommand::GetWorldBounds(v137, &v141);
      }
      else
      {
        *(_OWORD *)v140 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v137 + 1) + 48LL))(*((_QWORD *)v137 + 1));
        CMILMatrix::Transform2DBoundsHelper<0>((CMegaRectBatchCommand *)((char *)v137 + 16), (struct MilRectF *)v140);
      }
      v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 24LL))(a2 + 24);
      v86 = *(_DWORD *)(v84 + 472);
      v87 = 0.0;
      v88 = 0;
      *(_OWORD *)v140 = 0LL;
      if ( v86 )
      {
        v89 = *(_QWORD *)(v84 + 448);
        do
        {
          if ( *(_DWORD *)(v89 + 36LL * v88 + 16) >= v85 )
            break;
          v97 = *(float *)(v89 + 36LL * v88 + 8);
          v98 = *(float *)(v89 + 36LL * v88);
          if ( v97 > v98 && *(float *)(v89 + 36LL * v88 + 12) > *(float *)(v89 + 36LL * v88 + 4) )
          {
            r = v141.r;
            g = v141.g;
            b = v141.b;
            if ( v98 > v141.r )
              r = *(float *)(v89 + 36LL * v88);
            if ( *(float *)(v89 + 36LL * v88 + 4) > v141.g )
              g = *(float *)(v89 + 36LL * v88 + 4);
            if ( v141.b > v97 )
              b = *(float *)(v89 + 36LL * v88 + 8);
            a = v141.a;
            if ( v141.a > *(float *)(v89 + 36LL * v88 + 12) )
              a = *(float *)(v89 + 36LL * v88 + 12);
            if ( b > r && a > g )
            {
              v103 = (float)(b - r) * (float)(a - g);
              if ( v103 > v87 )
              {
                v87 = v103;
                *(_OWORD *)v140 = *(_OWORD *)(v89 + 36LL * v88);
              }
            }
          }
          ++v88;
        }
        while ( v88 < v86 );
        if ( v87 > 0.0 )
          *(_OWORD *)v144 = *(_OWORD *)v140;
      }
    }
    *(_OWORD *)((char *)v137 + 104) = *(_OWORD *)v144;
  }
  if ( (*(_BYTE *)(a1 + 48) & 4) != 0 )
    *(_BYTE *)(a2 + 8095) = 1;
  if ( (*(_DWORD *)(a1 + 48) & 0x200) != 0 )
  {
    v77 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a2 + 332));
    (*(void (__fastcall **)(__int64, _QWORD))(v78 + 64))(v79, v77);
  }
  v25 = (CLightStack *)(a2 + 560);
  if ( !*(_DWORD *)(a2 + 656) )
  {
    if ( *(_DWORD *)(a2 + 584) )
    {
      CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                            v25,
                                            (struct CDrawingContext *)a2,
                                            (const struct CMILMatrix *)(a2 + 96),
                                            v143);
      if ( CurrentLightBufferForContextNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          (unsigned int)v25,
          0LL,
          0,
          CurrentLightBufferForContextNoRef,
          0x9Bu,
          0LL);
        goto LABEL_115;
      }
    }
  }
  v26 = *(_QWORD *)(a2 + 3424);
  if ( v26 && *(_QWORD *)(v26 + 256) )
    ClipPlaneInfo = CDrawingContext::TryGetClipPlaneInfo((CDrawingContext *)a2);
  else
    ClipPlaneInfo = v139;
  if ( !*(_BYTE *)(v7 + 453) )
  {
    v104 = 0;
    v105 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        16LL,
        0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 216) + 384LL))(*(_QWORD *)(v7 + 216));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        16LL,
        0LL);
    if ( *(_DWORD *)(v7 + 368) )
    {
      do
      {
        LODWORD(v25) = v104;
        v106 = *(_QWORD *)(*(_QWORD *)(v7 + 344) + 8LL * v104);
        if ( v105 )
          *(_BYTE *)(v105 + 73) = 0;
        if ( !*(_BYTE *)(v106 + 73) )
        {
          *(_QWORD *)(v106 + 16) = v7 + 16;
          CD2DContext::D2DSetTargetInternal((CD2DContext *)(v7 + 16), (struct CD2DTarget *)v106);
          *(_BYTE *)(v106 + 73) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v106);
        }
        ++v104;
        v105 = v106;
      }
      while ( v104 < *(_DWORD *)(v7 + 368) );
    }
    *(_BYTE *)(v7 + 453) = 1;
  }
  v28 = *(_QWORD *)(v7 + 152);
  *(_BYTE *)(v7 + 454) = 1;
  v139 = (struct CDrawListEntryBatch *)v28;
  if ( !v28 )
  {
    CurrentTargetNoRef = CD2DContext::GetCurrentTargetNoRef((CD2DContext *)(v7 + 16));
    v31 = CDrawListBatchManager::OpenDrawListEntryBatch(
            (CDrawListBatchManager *)(v7 + 24),
            *((struct IDeviceTarget **)CurrentTargetNoRef + 3),
            &v139);
    CurrentLightBufferForContextNoRef = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v31, 0x1E1u, 0LL);
    }
    else
    {
      v82 = v139;
      v31 = CDrawListEntryBatch::SetLightingCollection(v139, v143[0]);
      CurrentLightBufferForContextNoRef = v31;
      if ( v31 >= 0 )
      {
        if ( *((struct CDrawListEntryBatch **)v82 + 4) != ClipPlaneInfo )
        {
          if ( ClipPlaneInfo )
            (**(void (__fastcall ***)(struct CDrawListEntryBatch *))ClipPlaneInfo)(ClipPlaneInfo);
          v144[0] = *((CBatchCommand **)v82 + 4);
          *((_QWORD *)v82 + 4) = ClipPlaneInfo;
          Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v144);
        }
        goto LABEL_40;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v31, 0x1E3u, 0LL);
    }
LABEL_225:
    v32 = v31;
    goto LABEL_233;
  }
  if ( *(struct CDrawListEntryBatch **)(v28 + 32) == ClipPlaneInfo )
  {
    v29 = v143[0];
    v30 = 0;
    if ( v143[0] == *(struct CHwLightCollectionBuffer **)(v28 + 40) )
      goto LABEL_39;
    ++dword_1803E29DC;
    v108 = *(_QWORD *)(v28 + 24) + 64LL;
    v140[0] = 0LL;
    *(_QWORD *)&v141.r = v140;
    *(_QWORD *)&v141.b = 0LL;
    v142 = 1;
    v30 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v108, &v141.b);
    CurrentLightBufferForContextNoRef = v30;
    if ( v142 )
    {
      b_low = LODWORD(v141.b);
      v109 = **(CBatchCommand ***)&v141.r;
      **(_QWORD **)&v141.r = *(_QWORD *)&v141.b;
      if ( v109 )
        CBatchCommand::`scalar deleting destructor'(v109, b_low);
    }
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v109, 0LL, 0, v30, 0xC5u, 0LL);
      v25 = v140[0];
      if ( !v140[0] )
        goto LABEL_39;
    }
    else
    {
      v111 = v140[0];
      *(_DWORD *)v140[0] = 2;
      wil::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>(
        (char *)v111 + 8,
        v29);
      v112 = *(_QWORD *)(v28 + 24);
      v113 = *(CBatchOptimizer **)(v112 + 160);
      if ( v113 )
      {
        CBatchOptimizer::AddStateSettingCommand(v113, v140);
        goto LABEL_194;
      }
      v127 = CDrawListBatchManager::AddBatchCommand(v112 + 24, (__int64 *)v140);
      v30 = v127;
      CurrentLightBufferForContextNoRef = v127;
      if ( v127 >= 0 )
      {
LABEL_194:
        v25 = v140[0];
        *(_QWORD *)(v28 + 40) = v29;
        if ( v25 )
          CBatchCommand::`scalar deleting destructor'(v25, v114);
LABEL_39:
        v31 = v30;
        CurrentLightBufferForContextNoRef = v30;
        if ( v30 >= 0 )
          goto LABEL_40;
LABEL_232:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v30, 0x1F4u, 0LL);
        v32 = CurrentLightBufferForContextNoRef;
        goto LABEL_233;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0, v127, 0xCFu, 0LL);
      v25 = v140[0];
      if ( !v140[0] )
      {
LABEL_231:
        v31 = v30;
        goto LABEL_232;
      }
    }
    CBatchCommand::`scalar deleting destructor'(v25, v129);
    goto LABEL_231;
  }
  CD2DContext::FlushDrawList((CD2DContext *)(v7 + 16));
  v31 = CD2DContext::EnsureDrawListBatch((CD2DContext *)(v7 + 16), v143[0], ClipPlaneInfo);
  CurrentLightBufferForContextNoRef = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v31, 0x1F0u, 0LL);
    goto LABEL_225;
  }
LABEL_40:
  v32 = v31;
  CurrentLightBufferForContextNoRef = v31;
  if ( v31 < 0 )
  {
LABEL_233:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v31, 0x209u, 0LL);
LABEL_234:
    MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v32, 0xA6u, 0LL);
    goto LABEL_115;
  }
  v33 = *(struct CDrawListEntryBatch **)(v7 + 152);
  CurrentLightBufferForContextNoRef = 0;
  ++dword_1803E29D8;
  v34 = v137;
  v35 = v137;
  v139 = v33;
  v36 = *((_QWORD *)v33 + 3);
  v37 = *(_QWORD *)(v36 + 160);
  if ( *(_DWORD *)v137 != 4 )
    v35 = 0LL;
  v144[0] = v35;
  if ( !v37 )
  {
    v131 = CDrawListBatchManager::AddBatchCommand(v36 + 24, (__int64 *)&v137);
    CurrentLightBufferForContextNoRef = v131;
    v133 = v131;
    if ( v131 >= 0 )
      goto LABEL_114;
    MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v131, 0x83u, 0LL);
    v32 = v133;
    MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v133, 0x20Cu, 0LL);
    goto LABEL_234;
  }
  v38 = 0LL;
  if ( !*(_DWORD *)(v37 + 32) )
  {
    v83 = *(_OWORD *)(v37 + 16);
    *(_DWORD *)(v37 + 32) = 1;
    *(_OWORD *)(520LL * *(int *)(v37 + 48) + v37 + 80) = v83;
    v34 = v137;
  }
  switch ( *(_DWORD *)v34 )
  {
    case 1:
      if ( !*((_BYTE *)v34 + 92) )
      {
        v39 = *(float **)(*((_QWORD *)v34 + 1) + 64LL);
        if ( v39[21] > v39[19] && v39[22] > v39[20] )
          goto LABEL_50;
      }
      break;
    case 2:
      CStateSettingBatchCommand::ApplyRenderState(v34, (struct IDrawListStateSink *)v37);
      goto LABEL_51;
    case 3:
      CGroupBatchCommand::ApplyRenderState(v34, (struct IDrawListStateSink *)v37);
      goto LABEL_51;
    case 4:
      if ( !*((_BYTE *)v34 + 92) )
      {
        Primitive = (float *)CMegaRectBatchCommand::GetPrimitive(v34);
        v39 = Primitive;
        if ( Primitive[21] > Primitive[19] && Primitive[22] > Primitive[20] )
        {
LABEL_50:
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 8LL))(v37, *((unsigned int *)v34 + 21));
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 24LL))(v37, *((unsigned __int8 *)v39 + 72));
LABEL_51:
          v34 = v137;
        }
      }
      break;
    case 5:
      CRenderingBatchCommand::ApplyRenderState(v34, (struct IDrawListStateSink *)v37);
      goto LABEL_51;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v40 = *(_DWORD *)v34 == 5;
  *(struct _D3DCOLORVALUE *)&v141.r = 0LL;
  if ( v40 )
  {
    CCpuClipAntialiasBatchCommand::GetWorldBounds(v34, &v141);
  }
  else
  {
    *(_OWORD *)v143 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v34 + 1) + 48LL))(*((_QWORD *)v34 + 1));
    CMILMatrix::Transform2DBoundsHelper<0>((CMegaRectBatchCommand *)((char *)v34 + 16), (struct MilRectF *)v143);
  }
  v41 = *(_DWORD *)(v37 + 32);
  v42 = 1;
  v135 = 1;
  v43 = 0;
  LODWORD(v138) = v41;
  if ( !v41 )
    goto LABEL_118;
  v44 = v141.a;
  v45 = v141.b;
  while ( 1 )
  {
    v46 = v43;
    v47 = (int *)(v37 + 4 * (v43 + 12LL));
    if ( *(_DWORD *)(520LL * *v47 + v37 + 104) )
    {
      do
      {
        v107 = v47[1];
        ++v47;
        ++v46;
      }
      while ( *(_DWORD *)(520 * v107 + v37 + 104) );
    }
    v48 = v37 + 520LL * *(int *)(v37 + 4LL * v46 + 48);
    if ( *(_QWORD *)(v48 + 80) != *(_QWORD *)(v37 + 16) )
      goto LABEL_91;
    if ( *(_QWORD *)(v48 + 112) || (v49 = *(_DWORD *)(v48 + 100), v49 == 1) )
    {
      if ( *(_DWORD *)(v48 + 88) != *(_DWORD *)(v37 + 24) )
        goto LABEL_91;
      v50 = *(_BYTE *)(v48 + 92);
      if ( v50 != *(_BYTE *)(v37 + 28) || v50 == 2 )
        goto LABEL_91;
    }
    else if ( v49 )
    {
      goto LABEL_91;
    }
    if ( !v42 )
      break;
    v43 = v41 - 1;
    v51 = v41 - 1;
    if ( v51 == v46 )
      break;
    v52 = (int *)(v37 + 48 + 4LL * v43);
    while ( 1 )
    {
      v53 = 0LL;
      v54 = v37 + 520LL * *v52;
      v55 = *(int *)(v54 + 100);
      if ( *(_DWORD *)(v54 + 100) )
        break;
LABEL_79:
      --v43;
      --v51;
      --v52;
      if ( v51 == v46 )
        goto LABEL_80;
    }
    v56 = (float *)(v54 + 284);
    while ( v45 < *(v56 - 1) || v56[1] < v141.r || v44 < *v56 || v56[2] < v141.g )
    {
      ++v53;
      v56 += 4;
      if ( v53 == v55 )
        goto LABEL_79;
    }
    v57 = *(_DWORD *)(v37 + 32);
    v135 = 0;
    if ( v57 == 8
      && v43 == 7
      && *(_BYTE *)(v37 + 4240)
      && *(_DWORD *)(520LL * *(int *)(v37 + 4LL * v43 + 48) + v37 + 100) == 1 )
    {
      if ( CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v37) )
      {
        v41 = *(_DWORD *)(v37 + 32);
        LODWORD(v138) = v41;
        v43 = v41 - 1;
      }
      else
      {
        v41 = (int)v138;
      }
    }
LABEL_92:
    if ( v43 == v41 )
      goto LABEL_118;
    v42 = v135;
  }
LABEL_80:
  v58 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v34 + 1) + 40LL))(*((_QWORD *)v34 + 1));
  v59 = *(_QWORD *)(v48 + 112);
  v60 = (struct CHwLightCollectionBuffer *)v58;
  if ( v59
    || *(_DWORD *)(v48 + 100) == 1
    && (v61 = *(_QWORD *)(*(_QWORD *)(v48 + 8LL * (unsigned int)(*(_DWORD *)(v48 + 96) - 1) + 120) + 8LL),
        (v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 40LL))(v61)) != 0) )
  {
    (*(void (__fastcall **)(__int64, struct CHwLightCollectionBuffer **, struct CHwLightCollectionBuffer *, char *))(*(_QWORD *)v59 + 80LL))(
      v59,
      v143,
      v60,
      v136);
    if ( !v136[0] )
    {
      v62 = v143[0];
      v143[0] = 0LL;
      if ( v62 )
        (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v62 + 8LL))(v62);
    }
    v60 = v143[0];
    v143[0] = 0LL;
  }
  else if ( v60 )
  {
    (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v60)(v60);
  }
  v63 = v38;
  v38 = v60;
  if ( v63 )
    (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v63 + 8LL))(v63);
  if ( !v60 )
  {
    v41 = (int)v138;
LABEL_91:
    v43 = v46 + 1;
    goto LABEL_92;
  }
  if ( !*(_DWORD *)(v48 + 100) )
  {
    *(_DWORD *)(v48 + 88) = *(_DWORD *)(v37 + 24);
    *(_BYTE *)(v48 + 92) = *(_BYTE *)(v37 + 28);
  }
  if ( v46 == (_DWORD)v138 )
  {
LABEL_118:
    v73 = v38;
    v74 = (struct CHwLightCollectionBuffer *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v34 + 1) + 40LL))(*((_QWORD *)v34 + 1));
    v38 = v74;
    if ( v74 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))v74)(v74);
    if ( v73 )
      (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v73 + 8LL))(v73);
    if ( *(_DWORD *)(v37 + 32) == 8
      && (!*(_BYTE *)(v37 + 4240) || !CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v37)) )
    {
      CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v37);
      CBatchOptimizer::RecycleLayer((CBatchOptimizer *)v37, 0LL);
    }
    v75 = *(_OWORD *)(v37 + 16);
    v76 = *(_DWORD *)(v37 + 32) + 1;
    *(_DWORD *)(v37 + 32) = v76;
    *(_OWORD *)(520LL * *(int *)(v37 + 4LL * (v76 - 1) + 48) + v37 + 80) = v75;
    v46 = *(_DWORD *)(v37 + 32) - 1;
  }
  v64 = 520LL * *(int *)(v37 + 4LL * v46 + 48);
  v65 = v38;
  if ( !v38 )
    goto LABEL_106;
  if ( *(_DWORD *)(v64 + v37 + 100) )
  {
    v38 = 0LL;
    v67 = *(_QWORD *)(v64 + v37 + 112);
    *(_QWORD *)(v64 + v37 + 112) = v65;
    if ( !v67 )
      goto LABEL_106;
    goto LABEL_105;
  }
  if ( *(_QWORD *)(v64 + v37 + 112) )
    goto LABEL_106;
  if ( ((*(__int64 (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v38 + 72LL))(v38) & 0x10000) != 0 )
  {
    v67 = *(_QWORD *)(v64 + v37 + 112);
    *(_QWORD *)(v64 + v37 + 112) = v38;
    v38 = 0LL;
    if ( !v67 )
      goto LABEL_106;
LABEL_105:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 8LL))(v67);
    goto LABEL_106;
  }
  if ( v46 && !*(_DWORD *)(520LL * *(int *)(v37 + 4LL * v46 + 44) + v37 + 104) )
  {
    *(_BYTE *)(v37 + 4240) = 1;
    v66 = *(_DWORD *)(v64 + v37 + 96);
    goto LABEL_107;
  }
LABEL_106:
  v66 = *(_DWORD *)(v64 + v37 + 96);
  if ( v46 )
  {
LABEL_107:
    if ( *(_DWORD *)(v64 + v37 + 100) != 20 )
      goto LABEL_108;
LABEL_205:
    CBatchOptimizer::ContinueLayer((CBatchOptimizer *)v37, v46);
  }
  else
  {
LABEL_108:
    if ( v66 == 20 )
      goto LABEL_205;
  }
  v68 = (__int64)v137;
  v69 = v37 + 520LL * *(int *)(v37 + 4LL * v46 + 48);
  v137 = 0LL;
  v70 = *(unsigned int *)(v69 + 96);
  *(_DWORD *)(v69 + 96) = v70 + 1;
  *(_QWORD *)(v69 + 8 * v70 + 120) = v68;
  if ( v46 )
    *(struct _D3DCOLORVALUE *)(v69 + 16LL * *(unsigned int *)(v69 + 100) + 280) = *(struct _D3DCOLORVALUE *)&v141.r;
  ++*(_DWORD *)(v69 + 100);
  if ( v38 )
    (*(void (__fastcall **)(struct CHwLightCollectionBuffer *))(*(_QWORD *)v38 + 8LL))(v38);
  v33 = v139;
LABEL_114:
  v71 = v144[0];
  if ( v144[0] )
  {
    v92 = (char *)v33 + 112;
    if ( *((_QWORD *)v33 + 16) <= (unsigned __int64)(*((_QWORD *)v33 + 18) + 1LL) )
      std::deque<CMegaRect>::_Growmap((_QWORD *)v33 + 14);
    v68 = *((_QWORD *)v33 + 16) - 1LL;
    *((_QWORD *)v33 + 17) &= v68;
    v93 = *((_QWORD *)v33 + 15);
    v94 = v68 & (*((_QWORD *)v33 + 18) + *((_QWORD *)v33 + 17));
    if ( !*(_QWORD *)(v93 + 8 * v94) )
      *(_QWORD *)(*((_QWORD *)v92 + 1) + 8 * v94) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v95 = *(_QWORD *)(*((_QWORD *)v92 + 1) + 8 * v94);
    *(_QWORD *)v95 = v71;
    *(_QWORD *)(v95 + 8) = 0LL;
    *(_QWORD *)(v95 + 16) = 0LL;
    v96 = *((_QWORD *)v71 + 12);
    if ( !v96 )
      v96 = *(_QWORD *)(*((_QWORD *)v71 + 1) + 64LL);
    *(_DWORD *)(v95 + 24) = *(_DWORD *)(v96 + 16);
    ++*((_QWORD *)v92 + 4);
  }
LABEL_115:
  if ( v137 )
    CBatchCommand::`scalar deleting destructor'(v137, v68);
  return (unsigned int)CurrentLightBufferForContextNoRef;
}
