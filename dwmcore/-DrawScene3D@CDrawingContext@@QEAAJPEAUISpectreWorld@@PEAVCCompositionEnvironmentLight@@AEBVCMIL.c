/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180260464 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18000EF44 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18001303C (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034C80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006D880 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180073854 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18007E934 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18008CF30 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090D28 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800DFB38 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801B9E78 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CF82C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x1801CFE34 (_lambda_2c23dc335d575e6068a59f43383614b1_--operator().c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801FA830 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x18021645C (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GetD2D1Matrix4x4@CMILMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x18026CACC (-GetD2D1Matrix4x4@CMILMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 */

__int64 __fastcall CDrawingContext::DrawScene3D(
        CDrawingContext *this,
        struct ISpectreWorld *a2,
        struct CCompositionEnvironmentLight *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  struct ISpectreRenderer *SpectreRenderer; // r14
  int v18; // eax
  __int64 v19; // rcx
  float v20; // xmm7_4
  struct D2D_VECTOR_3F *v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  float v27; // xmm7_4
  char v28; // r14
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  gsl::details *v32; // rcx
  unsigned int D2D1Matrix4x4; // eax
  __int64 v34; // r8
  int v35; // r9d
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdi
  struct CD3DDevice *v41; // rbx
  int v42; // eax
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rcx
  CDeviceManager *v45; // rcx
  int ExistingDevice; // eax
  __int64 v47; // rcx
  float v48; // xmm7_4
  __m128 v49; // xmm2
  float v50; // xmm8_4
  CD3DDevice *v51; // rdi
  int v52; // eax
  __m128 v53; // xmm1
  __m128 v54; // xmm0
  int v55; // eax
  __int64 v56; // rcx
  CDrawingContext *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rsi
  char *v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v67; // r8
  char v68; // r12
  char *v69; // r14
  _BYTE *v70; // rdx
  unsigned __int64 v71; // rcx
  size_t v72; // rsi
  unsigned __int64 v73; // r12
  __int64 v74; // r14
  void (__fastcall *v75)(__int64, __int64); // rsi
  __int64 v76; // rax
  void (__fastcall *v77)(__int64, __int64); // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  struct D2D_MATRIX_4X4_F *v80; // rax
  __int64 v81; // r9
  __int64 (__fastcall *v82)(__int64, struct ISpectreWorld *, struct D2D_MATRIX_4X4_F *, __int64, int); // r11
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rcx
  CD3DDevice *v92; // rcx
  int v94; // [rsp+28h] [rbp-E0h]
  CDrawingContext *v95; // [rsp+48h] [rbp-C0h] BYREF
  struct CD3DDevice *v96; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+58h] [rbp-B0h]
  struct D2D_VECTOR_3F v98; // [rsp+60h] [rbp-A8h] BYREF
  struct _LUID v99[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v100; // [rsp+88h] [rbp-80h]
  __int128 v101; // [rsp+98h] [rbp-70h]
  __int128 v102; // [rsp+A8h] [rbp-60h]
  int v103; // [rsp+B8h] [rbp-50h]
  _QWORD v104[2]; // [rsp+C8h] [rbp-40h] BYREF
  char v105; // [rsp+D8h] [rbp-30h]
  void *v106[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v107; // [rsp+F0h] [rbp-18h]
  __int128 v108; // [rsp+F8h] [rbp-10h] BYREF
  float v109; // [rsp+108h] [rbp+0h] BYREF
  float v110; // [rsp+10Ch] [rbp+4h]
  float v111; // [rsp+110h] [rbp+8h]
  struct D2D_VECTOR_3F v112; // [rsp+118h] [rbp+10h] BYREF
  float v113; // [rsp+124h] [rbp+1Ch]
  __int128 v114; // [rsp+128h] [rbp+20h] BYREF
  float v115; // [rsp+138h] [rbp+30h] BYREF
  float v116; // [rsp+13Ch] [rbp+34h]
  float v117; // [rsp+140h] [rbp+38h]
  float v118; // [rsp+148h] [rbp+40h] BYREF
  float v119; // [rsp+14Ch] [rbp+44h]
  float v120; // [rsp+150h] [rbp+48h]
  _QWORD v121[2]; // [rsp+158h] [rbp+50h] BYREF
  int v122; // [rsp+168h] [rbp+60h]
  int v123; // [rsp+16Ch] [rbp+64h]
  unsigned int v124; // [rsp+170h] [rbp+68h]
  _QWORD v125[3]; // [rsp+178h] [rbp+70h] BYREF
  float v126[6]; // [rsp+190h] [rbp+88h] BYREF
  struct D2D_MATRIX_4X4_F v127; // [rsp+1A8h] [rbp+A0h] BYREF
  int v128; // [rsp+1E8h] [rbp+E0h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  if ( *(_QWORD *)(v9 + 712) > *(_QWORD *)(*(_QWORD *)(v9 + 16) + 296LL) )
  {
    dword_1803E29F4 |= 4u;
    *(_BYTE *)(**((_QWORD **)g_pComposition + 61) + 173LL) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
    v11 = *(_OWORD *)a4;
    v12 = *((_OWORD *)a4 + 1);
    v103 = *((_DWORD *)a4 + 16);
    *(_OWORD *)&v99[1].LowPart = v11;
    v13 = *((_OWORD *)a4 + 2);
    v100 = v12;
    v14 = *((_OWORD *)a4 + 3);
    v101 = v13;
    v102 = v14;
    CMILMatrix::Multiply((CMILMatrix *)&v99[1], TopByReference);
    v125[0] = a3;
    v121[1] = v125;
    v15 = v125;
    v121[0] = v125;
    v122 = 3;
    v124 = 1;
    v123 = 3;
    v16 = 0;
    while ( 1 )
    {
      CCompositionLight::UpdateSceneLightInfo((CCompositionLight *)v15[v16++], this);
      if ( v16 >= v124 )
        break;
      v15 = (_QWORD *)v121[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 36));
    if ( !SpectreRenderer )
      goto LABEL_85;
    (*(void (__fastcall **)(struct ISpectreWorld *, float *, float *))(*(_QWORD *)a2 + 48LL))(a2, &v118, &v115);
    v107 = 0LL;
    v126[0] = v118;
    v126[4] = v120;
    v126[1] = v119;
    v126[3] = v116;
    v126[2] = v115;
    *(_OWORD *)v106 = 0LL;
    v126[5] = v117;
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)&v99[1], v126, (float *)v106);
    v18 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__int64)v106, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v8 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x42Cu, 0LL);
      goto LABEL_85;
    }
    if ( COERCE_FLOAT(HIDWORD(v102) & _xmm) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v102 + 3) - 1.0) & _xmm) < 0.000081380211 )
    {
      v20 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v20 = 1.0 / *((float *)&v102 + 3);
    }
    v110 = *((float *)&v102 + 1) * v20;
    v109 = *(float *)&v102 * v20;
    v98.x = fmaxf(COERCE_FLOAT(LODWORD(v115) & _xmm), COERCE_FLOAT(LODWORD(v118) & _xmm));
    v98.y = fmaxf(COERCE_FLOAT(LODWORD(v116) & _xmm), COERCE_FLOAT(LODWORD(v119) & _xmm));
    v98.z = fmaxf(COERCE_FLOAT(LODWORD(v117) & _xmm), COERCE_FLOAT(LODWORD(v120) & _xmm));
    v21 = CMILMatrix::Transform3DVector((CMILMatrix *)&v99[1], &v112, &v98);
    v22 = sqrtf_0(
            (float)((float)((float)(v20 * v21->y) * (float)(v20 * v21->y))
                  + (float)((float)(v20 * v21->x) * (float)(v20 * v21->x)))
          + (float)((float)(v20 * v21->z) * (float)(v20 * v21->z)));
    v23 = *(_QWORD *)SpectreRenderer;
    v111 = (float)((float)(v22 + 1.0) + (float)(v22 + 1.0)) + (float)(*((float *)&v102 + 2) * v20);
    (*(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(v23 + 24))(SpectreRenderer, v99);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v99[0].LowPart == *((_DWORD *)this + 14)
      && v99[0].HighPart == *((_DWORD *)this + 15)
      && !*((_DWORD *)this + 85) )
    {
      v95 = 0LL;
      v24 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(
              (__int64 *)&v95,
              (__int64)this,
              (__int64)v126,
              (const struct CMILMatrix *)&v99[1]);
      v8 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x45Au, 0LL);
      }
      else
      {
        v26 = *((_DWORD *)this + 812);
        if ( v26 )
          v27 = *(float *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v26 - 1));
        else
          v27 = *(float *)&FLOAT_1_0;
        v28 = 0;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) < 0.0000011920929 )
        {
LABEL_22:
          v31 = v121[0];
          v96 = 0LL;
          gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v108, v124);
          if ( (_QWORD)v108 == -1LL || !v31 && (_QWORD)v108 )
          {
            gsl::details::terminate(v32);
            __debugbreak();
          }
          D2D1Matrix4x4 = (unsigned int)CMILMatrix::GetD2D1Matrix4x4((CMILMatrix *)&v99[1], &v127);
          *(_QWORD *)&v108 = v34;
          *((_QWORD *)&v108 + 1) = v31;
          v36 = CSpectreCallbackRenderer::Create(
                  (_DWORD)a2,
                  D2D1Matrix4x4,
                  (unsigned int)&v109,
                  v35,
                  (float)(v22 + 1.0) * 4.0,
                  (__int64)&v108,
                  (__int64)&v96);
          v8 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x47Du, 0LL);
          }
          else
          {
            v38 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
            v8 = v38;
            if ( v38 >= 0 )
            {
              v40 = *((_QWORD *)this + 5);
              CD2DContext::FlushDrawList((CD2DContext *)(v40 + 16));
              v41 = v96;
              v42 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v40 + 16), v96);
              v8 = v42;
              if ( v42 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x480u, 0LL);
              if ( !v41 )
                goto LABEL_32;
              v44 = (volatile signed __int32 *)((char *)v41 + 8);
              goto LABEL_31;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x47Fu, 0LL);
          }
          if ( !v96 )
          {
LABEL_32:
            if ( v28 )
              CDrawingContext::PopLayer(this);
            goto LABEL_34;
          }
          v44 = (volatile signed __int32 *)((char *)v96 + 8);
LABEL_31:
          CMILRefCountBaseT<IMILRefCount>::InternalRelease(v44);
          goto LABEL_32;
        }
        v108 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v108);
        v29 = CDrawingContext::PushD2DLayer(this, 0LL, &v108, 0LL, 0LL, v27, 0, 0);
        v8 = v29;
        if ( v29 >= 0 )
        {
          v28 = 1;
          goto LABEL_22;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x472u, 0LL);
      }
LABEL_34:
      CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v95);
LABEL_75:
      CDrawingContext::PopGpuClipRectInternal(this, 0);
LABEL_85:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v121);
      return v8;
    }
    v114 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v114);
    v96 = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(v45, v99[0], &v96);
    v8 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, ExistingDevice, 0x48Au, 0LL);
      v92 = v96;
      if ( !v96 )
        goto LABEL_75;
      goto LABEL_74;
    }
    v48 = *((float *)&v114 + 2) - *(float *)&v114;
    v49 = 0LL;
    v50 = *((float *)&v114 + 3) - *((float *)&v114 + 1);
    *(_QWORD *)&v108 = 0LL;
    LODWORD(v107) = 0;
    *(_QWORD *)&v112.y = 1LL;
    v51 = v96;
    *((float *)&v108 + 2) = *((float *)&v114 + 2) - *(float *)&v114;
    *((float *)&v108 + 3) = *((float *)&v114 + 3) - *((float *)&v114 + 1);
    v52 = (int)(float)((float)(*((float *)&v114 + 2) - *(float *)&v114) - 0.0);
    LODWORD(v112.x) = 87;
    BYTE4(v107) = 0;
    v53.m128_f32[0] = (float)(*((float *)&v114 + 2) - *(float *)&v114) - 0.0;
    v54 = 0LL;
    v54.m128_f32[0] = (float)v52;
    LODWORD(v95) = _mm_cmplt_ss(v54, v53).m128_u32[0];
    v54.m128_f32[0] = (float)(*((float *)&v114 + 3) - *((float *)&v114 + 1)) - 0.0;
    LODWORD(v98.x) = v52 - (_DWORD)v95;
    v49.m128_f32[0] = (float)(int)v54.m128_f32[0];
    LODWORD(v95) = _mm_cmplt_ss(v49, v54).m128_u32[0];
    LODWORD(v98.y) = (int)v54.m128_f32[0] - (_DWORD)v95;
    v106[0] = *((void **)v96 + 112);
    v106[1] = (void *)DisplayId::None;
    v95 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v95);
    LODWORD(v97) = 12;
    v96 = (struct CD3DDevice *)"DWM DwmScene";
    v55 = CD3DDevice::CreateRenderTargetBitmap(
            v51,
            (const struct CResourceTag *)&v96,
            (const struct D2D_SIZE_U *)&v98,
            (const struct PixelFormatInfo *)&v112,
            (struct RenderTargetInfo *)v106,
            3,
            &v95);
    v8 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x4A6u, 0LL);
      goto LABEL_73;
    }
    v57 = v95;
    v96 = 0LL;
    v58 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v95 + 64LL))(v95);
    v59 = v58 + *(int *)(*(_QWORD *)(v58 + 8) + 4LL);
    if ( v96 )
    {
      v60 = (char *)v96 + *(int *)(*((_QWORD *)v96 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v61 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct CD3DDevice **))(v59 + 8))(
            v59 + 8,
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            &v96);
    v8 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x4ABu, 0LL);
LABEL_79:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
LABEL_73:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v95);
      v92 = v51;
LABEL_74:
      CD3DDevice::Release(v92);
      goto LABEL_75;
    }
    CMILMatrix::Translate((CMILMatrix *)&v99[1], COERCE_FLOAT(v114 ^ _xmm), COERCE_FLOAT(DWORD1(v114) ^ _xmm));
    v63 = *(_QWORD *)SpectreRenderer;
    v109 = v109 - *(float *)&v114;
    v110 = v110 - *((float *)&v114 + 1);
    v64 = (*(__int64 (__fastcall **)(struct ISpectreRenderer *))(v63 + 40))(SpectreRenderer);
    v107 = 0LL;
    *(_OWORD *)v106 = 0LL;
    v65 = v64;
    *(_QWORD *)&v98.x = v64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
    v104[1] = v106;
    v68 = 1;
    v104[0] = v65;
    v105 = 1;
    if ( !v124
      || (*(_OWORD *)&v127._11 = *(_OWORD *)&v99[1].LowPart,
          *(_OWORD *)&v127.m[1][0] = v100,
          *(_OWORD *)&v127.m[2][0] = v101,
          *(_OWORD *)&v127.m[3][0] = v102,
          v128 = v103,
          !CMILMatrix::Invert((CMILMatrix *)&v127, v66, v67)) )
    {
LABEL_61:
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v65 + 16LL))(v65, &v109);
      v77 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 24LL);
      v78 = (**(__int64 (__fastcall ***)(struct CD3DDevice *))v96)(v96);
      v77(v65, v78);
      v112.x = 0.0;
      v112.y = 0.0;
      v79 = *(_QWORD *)v65;
      v112.z = v48;
      v113 = v50;
      (*(void (__fastcall **)(__int64, struct D2D_VECTOR_3F *))(v79 + 32))(v65, &v112);
      v80 = CMILMatrix::GetD2D1Matrix4x4((CMILMatrix *)&v99[1], &v127);
      LOBYTE(v94) = v68;
      LOBYTE(v81) = 1;
      v83 = v82(v65, a2, v80, v81, v94);
      v8 = v83;
      if ( v83 >= 0 )
      {
        lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v104);
        if ( v106[0] )
        {
          std::_Deallocate<16,0>(v106[0], (v107 - (unsigned __int64)v106[0]) & 0xFFFFFFFFFFFFFFF8uLL);
          v107 = 0LL;
          *(_OWORD *)v106 = 0LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v85 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v57 + 64LL))(v57);
          v86 = *(int *)(*(_QWORD *)(v85 + 8) + 16LL) + v85 + 8;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v86 + 24LL))(
            v86,
            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
        }
        v87 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v8 = v87;
        if ( v87 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x4EBu, 0LL);
        }
        else
        {
          if ( v57 )
            v89 = (__int64)v57 + *(int *)(*((_QWORD *)v57 + 1) + 16LL) + 8;
          else
            v89 = 0LL;
          v90 = CDrawingContext::DrawBitmapRealization(
                  (__int64)this,
                  v89,
                  (__int64)&v108,
                  (__int64)&v114,
                  0,
                  0,
                  (int)FLOAT_1_0);
          v8 = v90;
          if ( v90 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0x4F4u, 0LL);
          CDrawingContext::PopTransformInternal(this, 1);
        }
        goto LABEL_73;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0x4E0u, 0LL);
      lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v104);
      if ( v106[0] )
      {
        std::_Deallocate<16,0>(v106[0], (v107 - (unsigned __int64)v106[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        v107 = 0LL;
        *(_OWORD *)v106 = 0LL;
      }
      goto LABEL_79;
    }
    v69 = (char *)v106[1];
    v70 = v106[0];
    v71 = ((char *)v106[1] - (char *)v106[0]) >> 3;
    if ( v124 < v71 )
    {
      v69 = (char *)v106[0] + 8 * v124;
LABEL_55:
      v106[1] = v69;
      goto LABEL_56;
    }
    if ( v124 > v71 )
    {
      if ( v124 <= (unsigned __int64)((signed __int64)(v107 - (unsigned __int64)v106[0]) >> 3) )
      {
        v72 = 8 * (v124 - v71);
        memset_0(v106[1], 0, v72);
        v70 = v106[0];
        v69 += v72;
        goto LABEL_55;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((__int64)v106, v124);
      v70 = v106[0];
      v69 = (char *)v106[1];
    }
LABEL_56:
    v73 = 0LL;
    if ( (v69 - v70) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, struct D2D_MATRIX_4X4_F *, _BYTE *))(**(_QWORD **)(v121[0]
                                                                                             + 8LL * (unsigned int)v73)
                                                                               + 272LL))(
               *(_QWORD *)(v121[0] + 8LL * (unsigned int)v73),
               &v127,
               &v70[8 * v73]) >= 0 )
        {
          v74 = *((_QWORD *)v106[0] + v73);
          v75 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 24LL);
          v76 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v75(v74, v76);
        }
        ++v73;
        v70 = v106[0];
      }
      while ( v73 < ((char *)v106[1] - (char *)v106[0]) >> 3 );
    }
    v65 = *(_QWORD *)&v98.x;
    v68 = 0;
    goto LABEL_61;
  }
  return v8;
}
