/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800608A8 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180091F48 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801D30F4 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x1800093F0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021BF8 (-PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_.c)
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021D18 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A530 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B424 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180074368 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180078A28 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18007E934 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800908A0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D9FD8 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800DBB68 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800E29EC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?SetCachedTotalCpuClip@CCpuClippingData@@QEAAX$$QEAVCShapePtr@@@Z @ 0x1800F3B20 (-SetCachedTotalCpuClip@CCpuClippingData@@QEAAX$$QEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801D7918 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        unsigned __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v4; // r12
  unsigned int v5; // edi
  _BYTE *v6; // r15
  __int64 v9; // rcx
  __int64 v10; // r11
  char v11; // al
  __int64 v12; // r9
  __int64 v13; // r9
  const struct CShape *v14; // rdi
  const struct CShape *v15; // r12
  enum D2D1_ANTIALIAS_MODE v16; // ecx
  char v17; // r13
  struct CCpuClipAntialiasSink *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // ebx
  __int64 v22; // rax
  void *v23; // rbx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  CShape *v27; // rbx
  __int64 v28; // rdx
  void (__fastcall ***v29)(_QWORD, __int128 *); // rcx
  float v30; // xmm9_4
  float v31; // xmm8_4
  float v32; // xmm7_4
  float v33; // xmm6_4
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ecx
  __m128 v37; // xmm1
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm4_4
  int v42; // eax
  float v43; // xmm6_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  int v46; // eax
  float v47; // xmm2_4
  __int64 v49; // rcx
  int v50; // r15d
  int v51; // eax
  int v52; // r15d
  CVisual *v53; // rax
  char v54; // r13
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // ebx
  __int64 v58; // rax
  float v59; // xmm4_4
  float v60; // xmm5_4
  float v61; // xmm7_4
  float v62; // xmm6_4
  int v63; // eax
  __m128 v64; // xmm3
  float v65; // xmm1_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  int v68; // eax
  unsigned int v69; // ecx
  bool v70; // zf
  float v71; // xmm0_4
  const struct CVisual *v72; // rax
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // ebx
  int v76; // eax
  __int64 v77; // rdx
  unsigned int v78; // ecx
  int v79; // xmm6_4
  char v80; // r15
  __int64 v81; // rdx
  int v82; // eax
  unsigned int v83; // ecx
  __int64 *v84; // rax
  int v85; // xmm1_4
  unsigned int v86; // xmm0_4
  int v87; // xmm1_4
  int v88; // eax
  unsigned int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rcx
  void (__fastcall ***v92)(_QWORD); // rcx
  __int64 v93; // rax
  __int64 v94; // rbx
  int v95; // eax
  unsigned int v96; // ecx
  int v97; // eax
  unsigned int v98; // ecx
  int v99; // eax
  unsigned int v100; // ecx
  void *v101; // rbx
  __int64 v102; // rcx
  int v103; // eax
  unsigned int v104; // ecx
  int v105; // r9d
  float v106; // xmm5_4
  unsigned __int64 v107; // rax
  int v108; // eax
  unsigned int v109; // ecx
  unsigned __int64 v110; // rax
  void *v111; // rbx
  __int32 v112; // eax
  HANDLE ProcessHeap; // rax
  __int64 v114; // rax
  unsigned int v115; // ecx
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  int v118; // eax
  __int64 v119; // r8
  unsigned int v120; // ecx
  __int64 v121; // r8
  unsigned int v122; // [rsp+28h] [rbp-E0h]
  bool v123[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v124; // [rsp+50h] [rbp-B8h] BYREF
  void *v125; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v126; // [rsp+60h] [rbp-A8h]
  _BYTE *v127; // [rsp+68h] [rbp-A0h]
  __m128 v128; // [rsp+70h] [rbp-98h] BYREF
  __int128 v129; // [rsp+80h] [rbp-88h] BYREF
  __m128 v130; // [rsp+90h] [rbp-78h]
  __int64 v131[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v132; // [rsp+B0h] [rbp-58h]
  int v133; // [rsp+B4h] [rbp-54h]

  v4 = 0LL;
  v127 = a4;
  v5 = 0;
  v130.m128_u64[0] = a2;
  v6 = a4;
  v124 = 0LL;
  if ( !*(_QWORD *)(a3 + 8) )
    goto LABEL_54;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
  {
    if ( CShapePtr::IsAxisAlignedRectangle((CShape **)(a3 + 8)) )
      *(_DWORD *)(a3 + 188) |= 1u;
    if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(a3 + 116)) )
      *(_DWORD *)(a3 + 188) |= 4u;
  }
  v9 = *(_QWORD *)(a3 + 8);
  if ( !v9
    || !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 64LL))(v9, &v125)
    || (_DWORD)v125 != 1 )
  {
    v10 = a3 + 116;
LABEL_88:
    v4 = *(_QWORD *)(a3 + 8);
    v124 = v4;
    goto LABEL_8;
  }
  v10 = a3 + 116;
  v11 = *(char *)(a3 + 180) >> 6;
  if ( !v11 )
  {
    if ( CMILMatrix::IsAffine<1>(a3 + 116, 1)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v10 + 4) - v106) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v10 + 16) - v106) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(v10 + 64) &= 0x3Fu;
      *(_BYTE *)(v10 + 64) |= 0x40u;
      goto LABEL_8;
    }
    *(_BYTE *)(v10 + 64) |= 0xC0u;
    goto LABEL_137;
  }
  if ( v11 != 1 )
  {
LABEL_137:
    if ( (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v10) )
      goto LABEL_8;
    goto LABEL_88;
  }
LABEL_8:
  if ( *(_BYTE *)(a3 + 192) && *(_BYTE *)(*((_QWORD *)this + 113) - 8LL) )
  {
    v12 = *(_QWORD *)(a3 + 24);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 64);
      v14 = *(const struct CShape **)(v13 + 72);
      if ( !v14 )
        v14 = *(const struct CShape **)(a3 + 8);
      v15 = *(const struct CShape **)(v13 + 96);
      v16 = *(_DWORD *)(v13 + 112);
      v17 = *(_BYTE *)(v13 + 128);
      v18 = *(struct CCpuClipAntialiasSink **)(v13 + 120);
    }
    else
    {
      v15 = 0LL;
      v14 = *(const struct CShape **)(a3 + 8);
      v13 = *((_QWORD *)CVisual::FindTreeData(*(CVisual **)a3, *((const struct CVisualTree **)this + 1007)) + 16);
      v16 = *((_DWORD *)this + 84) != 0;
      v17 = 0;
      v18 = 0LL;
    }
    v131[1] = *(_QWORD *)a3;
    *(_QWORD *)&v129 = v18;
    LODWORD(v131[0]) = 2;
    v123[0] = 0;
    v19 = CScopedClipStack::PushCpuClipToScope(
            (CDrawingContext *)((char *)this + 896),
            v14,
            v15,
            (const struct CMILMatrix *)v13,
            v16,
            v17,
            v18,
            v123);
    v21 = v19;
    v5 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC4Cu, 0LL);
      goto LABEL_152;
    }
    v22 = *((unsigned int *)this + 93);
    v23 = 0LL;
    v5 = 0;
    v125 = 0LL;
    if ( *((_DWORD *)this + 92) != (_DWORD)v22 )
      goto LABEL_16;
    v107 = 2 * v22;
    if ( v107 > 0xFFFFFFFF )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
    }
    else
    {
      if ( (unsigned int)v107 <= 0x40 )
        v107 = 64LL;
      v128.m128_u64[0] = v107;
      v108 = HrMalloc(0x10uLL, (unsigned int)v107, &v125);
      v5 = v108;
      if ( v108 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v108, 0x6Bu, 0LL);
        v23 = v125;
      }
      else
      {
        v110 = 16LL * *((unsigned int *)this + 92);
        if ( v110 <= 0xFFFFFFFF )
        {
          v111 = v125;
          v5 = 0;
          memcpy_0(v125, *((const void **)this + 48), (unsigned int)v110);
          operator delete(*((void **)this + 48));
          v112 = v128.m128_i32[0];
          *((_QWORD *)this + 48) = v111;
          v23 = 0LL;
          *((_DWORD *)this + 93) = v112;
LABEL_16:
          *(_OWORD *)(*((_QWORD *)this + 48) + 16LL * *((unsigned int *)this + 92)) = *(_OWORD *)v131;
          v24 = *((_DWORD *)this + 98);
          v25 = ++*((_DWORD *)this + 92);
          if ( v24 <= v25 )
            v24 = *((_DWORD *)this + 92);
          *((_DWORD *)this + 98) = v24;
          goto LABEL_19;
        }
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v23 = v125;
      }
    }
LABEL_19:
    if ( v23 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v23);
    }
    if ( (v5 & 0x80000000) == 0 )
    {
      if ( v123[0] )
        *((_BYTE *)this + 8170) = 1;
      if ( *(_QWORD *)(a3 + 24) )
      {
        if ( !v15 )
        {
          v26 = *((_QWORD *)this + 113);
          if ( v26 != *((_QWORD *)this + 112) )
          {
            if ( *(_QWORD *)(v26 - 176) )
            {
              v27 = *(CShape **)(*((_QWORD *)this + 346) - 40LL);
              if ( v27 )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(CShape *, void **))(*(_QWORD *)v27 + 64LL))(v27, &v125)
                  || (_DWORD)v125 != 1 )
                {
                  v99 = CShape::CopyShape(v27, 0LL, (struct CShape **)&v128);
                  v5 = v99;
                  if ( v99 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, v99, 0x1129u, 0LL);
                    return v5;
                  }
                  v101 = (void *)v128.m128_u64[0];
                  v125 = 0LL;
                  LOBYTE(v126) = 0;
                  CShapePtr::Release((CShapePtr *)&v125);
                  v102 = *(_QWORD *)(a3 + 24);
                  v125 = v101;
                  LOBYTE(v126) = 1;
                  CCpuClippingData::SetCachedTotalCpuClip(v102, &v125);
                  CShapePtr::Release((CShapePtr *)&v125);
                }
              }
            }
          }
        }
        if ( v17 && !(_QWORD)v129 )
        {
          v90 = *(_QWORD *)(a3 + 24);
          v91 = *(_QWORD *)(*((_QWORD *)this + 113) - 16LL);
          if ( *(_QWORD *)(v91 + 24) == *(_QWORD *)(v91 + 16) )
          {
            v114 = *(_QWORD *)(v90 + 64);
            v94 = *(_QWORD *)(v114 + 120);
            *(_QWORD *)(v114 + 120) = 0LL;
          }
          else
          {
            v92 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(v91 + 24) - 432LL);
            v93 = *(_QWORD *)(v90 + 64);
            v94 = *(_QWORD *)(v93 + 120);
            *(_QWORD *)(v93 + 120) = v92;
            if ( v92 )
              (**v92)(v92);
          }
          if ( v94 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 8LL))(v94);
        }
      }
      goto LABEL_32;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v5, 0xC4Fu, 0LL);
    CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 896), this, v123);
    v21 = v5;
LABEL_152:
    MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0, v21, 0x111Bu, 0LL);
    return v5;
  }
  if ( !v4 )
  {
    v49 = *(_QWORD *)(a3 + 8);
    v50 = -2003292412;
    v129 = 0LL;
    if ( v49
      && (v51 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v49 + 48LL))(v49, &v129, a3 + 116),
          v50 = v51,
          v5 = v51,
          v51 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v51, 0x140u, 0LL);
    }
    else
    {
      v5 = v50;
      if ( v50 >= 0 )
      {
        v52 = *((_DWORD *)this + 84);
        v53 = *(CVisual **)a3;
        v54 = 0;
        if ( *(_QWORD *)a3 )
        {
          LODWORD(v131[0]) = 1;
          v131[1] = (__int64)v53;
          v55 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, v131);
          v57 = v55;
          v5 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xBBFu, 0LL);
            goto LABEL_162;
          }
          v54 = 1;
        }
        v58 = *((_QWORD *)this + 113);
        if ( v58 == *((_QWORD *)this + 112) || !*(_QWORD *)(v58 - 184) )
        {
          v118 = CD2DClipStack::PushExact(
                   (CDrawingContext *)((char *)this + 3184),
                   (const struct MilRectF *)&v129,
                   (enum D2D1_ANTIALIAS_MODE)(v52 != 0));
          v57 = v118;
          v5 = v118;
          if ( v118 >= 0 )
            goto LABEL_83;
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v118, 0xCEu, 0LL);
        }
        else
        {
          v128 = 0LL;
          if ( v52 )
          {
            RoundWithHalvesDown(&v129, &v128);
            v59 = v128.m128_f32[1];
            v60 = v128.m128_f32[0];
            v61 = v128.m128_f32[3];
            v62 = v128.m128_f32[2];
          }
          else
          {
            v60 = *(float *)&v129;
            v59 = *((float *)&v129 + 1);
            v62 = *((float *)&v129 + 2);
            v61 = *((float *)&v129 + 3);
          }
          v63 = *((_DWORD *)this + 796);
          v128 = 0LL;
          if ( v63 )
          {
            v64 = *(__m128 *)(*((_QWORD *)this + 400) + 16LL * (unsigned int)(v63 - 1));
            v128 = v64;
          }
          else
          {
            v64.m128_i32[0] = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v128 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          }
          if ( v60 > v64.m128_f32[0] )
          {
            v128.m128_f32[0] = v60;
            v64.m128_f32[0] = v60;
          }
          v65 = v128.m128_f32[1];
          if ( v59 > v128.m128_f32[1] )
          {
            v128.m128_f32[1] = v59;
            v65 = v59;
          }
          v66 = v128.m128_f32[2];
          if ( v128.m128_f32[2] > v62 )
          {
            v128.m128_f32[2] = v62;
            v66 = v62;
          }
          v67 = v128.m128_f32[3];
          if ( v128.m128_f32[3] > v61 )
          {
            v128.m128_f32[3] = v61;
            v67 = v61;
          }
          if ( v66 <= v64.m128_f32[0] || v67 <= v65 )
            v128 = 0uLL;
          v68 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                  (char *)this + 3184,
                  &v128);
          v5 = v68;
          if ( v68 >= 0 )
          {
            v57 = v68;
LABEL_83:
            ++*(_QWORD *)(*((_QWORD *)this + 113) - 184LL);
            *((_BYTE *)this + 8169) = 1;
LABEL_84:
            v5 = v57;
            if ( v57 >= 0 )
            {
              v6 = v127;
LABEL_32:
              v4 = v124;
              goto LABEL_33;
            }
LABEL_162:
            MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v57, 0x1143u, 0LL);
            return v5;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x31u, 0LL);
          v57 = v5;
          MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, v5, 0xD2u, 0LL);
        }
        MilInstrumentationCheckHR_MaybeFailFast(v117, 0LL, 0, v57, 0xBC4u, 0LL);
        v57 = v5;
        if ( v54 )
        {
          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, 0LL, v119);
          goto LABEL_162;
        }
        goto LABEL_84;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v50, 0x113Eu, 0LL);
    return v5;
  }
  v103 = CDrawingContext::PushClipBounds(
           this,
           *(const struct CVisual **)a3,
           *(const struct CShape **)(a3 + 8),
           (const struct CMILMatrix *)v10,
           (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 84) != 0));
  v5 = v103;
  if ( v103 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v103, 0x1151u, 0LL);
    return v5;
  }
LABEL_33:
  v28 = *((_QWORD *)this + 4);
  v128 = 0LL;
  v29 = (void (__fastcall ***)(_QWORD, __int128 *))(v28 + 8 + *(int *)(*(_QWORD *)(v28 + 8) + 16LL));
  (**v29)(v29, &v129);
  v30 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v31 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v33 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v130.m128_u64[0] = 0LL;
  v34 = *((_QWORD *)this + 113);
  v130.m128_f32[2] = (float)(int)v129;
  v130.m128_f32[3] = (float)SDWORD1(v129);
  v35 = v34 - *((_QWORD *)this + 112);
  if ( v35 && *(_QWORD *)(v34 - 184) )
  {
    v36 = *((_DWORD *)this + 796);
    if ( !v36 )
    {
      v39 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v40 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v41 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v38 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      goto LABEL_38;
    }
    v37 = *(__m128 *)(*((_QWORD *)this + 400) + 16LL * (unsigned int)(v36 - 1));
    LODWORD(v38) = _mm_shuffle_ps(v37, v37, 255).m128_u32[0];
    v128 = v37;
  }
  else
  {
    v128 = v130;
    v38 = v130.m128_f32[3];
    if ( !v35 )
    {
      v41 = v128.m128_f32[2];
      v40 = v128.m128_f32[1];
      v39 = v128.m128_f32[0];
      goto LABEL_51;
    }
  }
  v39 = v128.m128_f32[0];
  v40 = v128.m128_f32[1];
  v41 = v128.m128_f32[2];
LABEL_38:
  if ( *(_QWORD *)(v34 - 168) )
  {
    v42 = *((_DWORD *)this + 804);
    v128 = 0LL;
    if ( v42 )
    {
      v128 = *(__m128 *)(*((_QWORD *)this + 404) + 16LL * (unsigned int)(v42 - 1));
      v33 = v128.m128_f32[0];
      v32 = v128.m128_f32[1];
      v31 = v128.m128_f32[2];
      LODWORD(v30) = _mm_shuffle_ps(v128, v128, 255).m128_u32[0];
    }
    if ( v33 > v39 )
      v39 = v33;
    v43 = v40;
    if ( v32 > v40 )
    {
      v40 = v32;
      v43 = v32;
    }
    v44 = v41;
    if ( v41 > v31 )
    {
      v41 = v31;
      v44 = v31;
    }
    v45 = v38;
    if ( v38 > v30 )
    {
      v38 = v30;
      v45 = v30;
    }
    if ( v44 <= v39 || v45 <= v43 )
      goto LABEL_112;
  }
LABEL_51:
  if ( v41 <= v39 || v38 <= v40 )
  {
LABEL_112:
    *v6 = 1;
    return v5;
  }
  if ( v4 )
    goto LABEL_89;
LABEL_54:
  v46 = *(_DWORD *)(a3 + 36);
  if ( v46 == 2 )
  {
LABEL_89:
    v70 = *(_DWORD *)(a3 + 36) == 1;
    v71 = *(float *)(a3 + 44);
    v72 = *(const struct CVisual **)a3;
    v124 = 0LL;
    if ( !v70 )
    {
      *(float *)&v125 = v71;
      LODWORD(v131[0]) = 8;
      v131[1] = (__int64)v72;
      v73 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, v131);
      v75 = v73;
      v5 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x11C7u, 0LL);
      }
      else
      {
        v76 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3248, &v125);
        v75 = v76;
        if ( v76 >= 0 )
        {
          v79 = *(_DWORD *)(a3 + 32);
          goto LABEL_93;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v76, 0x11CBu, 0LL);
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, 0LL, v121);
        v5 = v75;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v75, 0x1177u, 0LL);
      goto LABEL_102;
    }
    v88 = CDrawingContext::PushEffectiveAlphaForNode(this, v72, v71 * *(float *)(a3 + 32), 1);
    v5 = v88;
    if ( v88 < 0 )
    {
      v122 = 4463;
      goto LABEL_171;
    }
    v79 = (int)FLOAT_1_0;
LABEL_93:
    if ( !v4 )
      goto LABEL_122;
    if ( v124 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 16LL))(v124);
    LOBYTE(v77) = 1;
    v124 = 0LL;
    if ( CMILMatrix::Is2DAffine<1>(a3 + 116, v77) )
    {
      v80 = 0;
      v81 = 0LL;
    }
    else
    {
      v80 = 1;
      v81 = a3 + 116;
    }
    v82 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, v81, &v124);
    v5 = v82;
    if ( v82 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x977u, 0LL);
      if ( v5 == -2003238895 )
      {
        v5 = 0;
        *v127 = 1;
        goto LABEL_102;
      }
      v105 = v5;
      v122 = 4492;
      goto LABEL_127;
    }
    if ( v80 )
    {
LABEL_122:
      v84 = 0LL;
    }
    else
    {
      v84 = v131;
      v85 = *(_DWORD *)(a3 + 120);
      LODWORD(v131[0]) = *(_DWORD *)(a3 + 116);
      v86 = *(_DWORD *)(a3 + 132);
      HIDWORD(v131[0]) = v85;
      v131[1] = __PAIR64__(*(_DWORD *)(a3 + 136), v86);
      v87 = *(_DWORD *)(a3 + 168);
      v132 = *(_DWORD *)(a3 + 164);
      v133 = v87;
    }
    v88 = CDrawingContext::PushD2DLayer(this, (__int64)v84, v79, *(_BYTE *)(a3 + 192), *(_DWORD *)(a3 + 188));
    v5 = v88;
    if ( v88 >= 0 )
    {
LABEL_102:
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v124);
      return v5;
    }
    v122 = 4507;
LABEL_171:
    v105 = v88;
LABEL_127:
    MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v105, v122, 0LL);
    goto LABEL_102;
  }
  v47 = *(float *)(a3 + 44);
  if ( v46 == 1 )
  {
    v95 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a3, v47 * *(float *)(a3 + 32), 1);
    v5 = v95;
    if ( v95 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, v95, 0x11ABu, 0LL);
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v47 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v97 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a3, v47, 1);
    v5 = v97;
    if ( v97 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v98, 0LL, 0, v97, 0x11B3u, 0LL);
  }
  return v5;
}
