__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  struct D2D_SIZE_F *v6; // r12
  struct CDrawingContext *v7; // r13
  struct IBitmapRealization *v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  FLOAT height; // xmm0_4
  __int64 v13; // rax
  CVisual *v14; // rdi
  int v15; // eax
  float v16; // xmm1_4
  char v17; // r15
  char v18; // al
  __int64 v19; // rdi
  CVisual *v20; // rax
  CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v22; // r15
  __int64 v23; // rcx
  __int64 EffectInput; // rax
  int v25; // edi
  int v26; // r12d
  unsigned int v27; // r15d
  unsigned int v28; // edi
  __int64 v29; // r14
  __int64 v30; // r12
  unsigned int v31; // r13d
  __int64 v32; // r15
  const struct D2D_SIZE_F *v33; // rdi
  int v34; // xmm1_4
  unsigned int v35; // r15d
  unsigned __int64 v36; // r12
  unsigned int v37; // ebx
  __int64 v38; // rdi
  char *v39; // r15
  struct EffectInput *v40; // r15
  __int64 v41; // r12
  int BlurredWallpaperEffectInput; // eax
  CBrushRenderingGraph *v43; // rcx
  const struct _GUID *v44; // r8
  unsigned int v45; // edi
  unsigned int v46; // ebx
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rbx
  EffectInput *v50; // rsi
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int128 *v57; // rdx
  __int64 v58; // rdx
  unsigned int v59; // ecx
  const char **DebugString; // rax
  DwmDbg::DbgString *v61; // rdi
  DwmDbg::DbgString *v62; // rax
  void **v63; // rdi
  void **v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // rax
  float v67; // xmm1_4
  __int64 DestToTexSpaceTransform; // rax
  unsigned int v69; // [rsp+20h] [rbp-E0h]
  bool v70; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v71; // [rsp+44h] [rbp-BCh]
  __int64 v72; // [rsp+48h] [rbp-B8h] BYREF
  int v73[2]; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  const struct CVisualTreePath *v75; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v76[24]; // [rsp+68h] [rbp-98h] BYREF
  struct IBitmapRealization *v77; // [rsp+80h] [rbp-80h] BYREF
  struct CDrawingContext *v78; // [rsp+88h] [rbp-78h]
  __int64 v79[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-48h]
  void *lpMem; // [rsp+C0h] [rbp-40h] BYREF
  CVisual *v84; // [rsp+C8h] [rbp-38h]
  struct CDrawListCache *v85; // [rsp+D0h] [rbp-30h]
  struct CDrawListBrush *v86; // [rsp+D8h] [rbp-28h]
  char v87[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v88[40]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v89[64]; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+150h] [rbp+50h]
  int v91; // [rsp+160h] [rbp+60h]
  int v92; // [rsp+164h] [rbp+64h]
  FLOAT width; // [rsp+168h] [rbp+68h]
  FLOAT v94; // [rsp+16Ch] [rbp+6Ch]
  struct _GUID v95; // [rsp+170h] [rbp+70h] BYREF
  __int128 v96; // [rsp+180h] [rbp+80h] BYREF
  char v97; // [rsp+190h] [rbp+90h]
  __int128 v98; // [rsp+1B0h] [rbp+B0h]
  char v99; // [rsp+1E7h] [rbp+E7h]
  __int128 v100; // [rsp+1F0h] [rbp+F0h] BYREF
  char v101; // [rsp+200h] [rbp+100h]
  __int128 v102; // [rsp+220h] [rbp+120h]
  __int128 v103; // [rsp+260h] [rbp+160h] BYREF
  char v104; // [rsp+270h] [rbp+170h]
  __int128 v105; // [rsp+290h] [rbp+190h]
  unsigned int v106; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v107; // [rsp+2D4h] [rbp+1D4h]
  _QWORD v108[5]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v109; // [rsp+304h] [rbp+204h]
  char v110; // [rsp+305h] [rbp+205h]
  char v111; // [rsp+33Dh] [rbp+23Dh]
  char v112; // [rsp+478h] [rbp+378h] BYREF
  char v113[8]; // [rsp+480h] [rbp+380h] BYREF
  char v114[104]; // [rsp+488h] [rbp+388h] BYREF
  char v115[8]; // [rsp+4F0h] [rbp+3F0h] BYREF
  char v116[104]; // [rsp+4F8h] [rbp+3F8h] BYREF

  v6 = a3;
  v85 = a6;
  v7 = a2;
  v86 = a4;
  *(_QWORD *)v73 = a3;
  v78 = a2;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v9 = 0LL;
  v77 = 0LL;
  EffectStage::EffectStage((EffectStage *)&v106);
  v97 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v98 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v96);
  v104 = 0;
  v103 = 0LL;
  v105 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v103);
  v101 = 0;
  v100 = 0LL;
  v102 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v100);
  v90 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)v7 + 400), (struct CMILMatrix *)v89);
  v10 = *((_DWORD *)this + 10);
  v91 = 0;
  v92 = 0;
  v71 = v10;
  v11 = *((_DWORD *)this + 42) - 1;
  v82 = 0LL;
  *(_OWORD *)v81 = 0LL;
  v74 = v11;
  height = v6->height;
  v13 = *((_QWORD *)v7 + 3);
  *(_OWORD *)v79 = 0LL;
  v80 = 0LL;
  width = v6->width;
  v94 = height;
  v14 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(v13 + 32))((__int64)v7 + 24);
  v15 = *((_DWORD *)v7 + 812);
  if ( v15 )
    v16 = *(float *)(*((_QWORD *)v7 + 408) + 4LL * (unsigned int)(v15 - 1));
  else
    v16 = *(float *)&FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) >= 0.0000011920929 || (v17 = 1, *((_DWORD *)v7 + 85) > 1u) )
    v17 = 0;
  v72 = 0LL;
  if ( CVisual::HasSubtreeSurface(v14) )
    v72 = *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v14 + 216LL))(v14) + 8);
  if ( *((_QWORD *)this + 26) )
  {
    if ( (**((_DWORD **)v14 + 29) & 0x200000) != 0
      && (v58 = *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v14) + 39)) != 0 )
    {
      EffectInput::operator=((__int64)&v96, v58);
      v18 = 1;
      v99 = 1;
    }
    else
    {
      v18 = v99;
    }
    if ( !v18 )
    {
      v19 = v74;
      v70 = 0;
      CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v74, &v70);
      if ( v70
        && v17
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                           + 8 * v19)
                                                                               + 8LL)) )
      {
        v45 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(
          v59,
          &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          -2003304441,
          0x29Fu,
          0LL);
        goto LABEL_47;
      }
      v20 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v7 + 3) + 32LL))((__int64)v7 + 24);
      v75 = (const struct CVisualTreePath *)*((_QWORD *)v7 + 1010);
      v84 = v20;
      BackdropVisualImage = CVisual::GetBackdropVisualImage(v20, v75);
      v22 = BackdropVisualImage;
      if ( BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
      {
        EffectInput = CBackdropVisualImage::GenerateEffectInput(v23, (__int64)v115);
        v25 = 0;
        v26 = 1;
      }
      else
      {
        EffectInput = CDrawingContext::GetTransparentBlackEffectInput(v7, v113, v6);
        v26 = 0;
        v25 = 2;
      }
      EffectInput::operator=((__int64)&v96, EffectInput);
      if ( v25 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v114);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v113);
      }
      if ( v26 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v116);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v115);
      }
      if ( dword_1803E0760 )
      {
        if ( v22 )
        {
          if ( !CBackdropVisualImage::CanUseAsEffectInput(v22) )
          {
            v63 = (void **)DwmDbg::DbgString::DbgString((char **)v76, "CBrushRenderingGraph::RenderSubgraphs");
            v64 = (void **)DwmDbg::DbgString::DbgString((char **)&lpMem, "BVI-FallbackToTransparentBlack");
            CBackdropVisualImage::LogEtwEvent((__int64)v22, v64, v63);
          }
        }
        else
        {
          DebugString = (const char **)CVisualTreePath::GetDebugString(v75, &lpMem);
          v61 = DwmDbg::DbgString::DbgString((char **)&v75, "bviPath=[%s]", *DebugString);
          v62 = DwmDbg::DbgString::DbgString((char **)v76, "BrushRenderingGraph-FallbackToTransparentBlack-NoBVI");
          DwmDbg::Backdrops::LogBrushEtwEvent(v62, v84, v61);
          if ( lpMem )
            operator delete(lpMem);
        }
      }
      v6 = *(struct D2D_SIZE_F **)v73;
    }
  }
  if ( *((_BYTE *)this + 197) )
  {
    BlurredWallpaperEffectInput = CDrawingContext::GetBlurredWallpaperEffectInput(v7, v6, (struct EffectInput *)&v103);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v69 = 707;
      goto LABEL_99;
    }
  }
  if ( *((_BYTE *)this + 198) )
  {
    BlurredWallpaperEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                    v7,
                                    v6,
                                    (struct EffectInput *)&v100);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v69 = 713;
      goto LABEL_99;
    }
  }
  v27 = v71;
  std::vector<EffectInput>::reserve(v79, v71);
  v28 = 0;
  if ( v27 )
  {
    v29 = v72;
    v30 = 0LL;
    v31 = v71;
    while ( 1 )
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>(v79);
      v32 = v30 + v79[0];
      EffectInput::Reset((struct EffectInput *)(v30 + v79[0]));
      if ( CBrushRenderingGraph::IsBackdropInput(this, v28) )
      {
        v57 = &v96;
      }
      else if ( CBrushRenderingGraph::IsWindowBackdropInput(this, v28) )
      {
        v57 = &v100;
      }
      else
      {
        if ( !CBrushRenderingGraph::IsBlurredWallpaperBackdropInput(this, v28) )
        {
          if ( !v29 || CBrushRenderingGraph::GetNamedInput(this, v28) )
          {
            *(_DWORD *)(v32 + 48) = v28;
          }
          else
          {
            if ( !v9 )
            {
              v65 = *(_QWORD *)(v29 + 8);
              v72 = 0LL;
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v72, v65);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v72 + 8LL))(v72, 1LL);
              wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=<IRenderTargetBitmap,wil::err_returncode_policy,void>(
                &v77,
                &v72);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v72);
              v9 = v77;
            }
            v66 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v87, v9);
            CDrawListBitmap::operator=((__int64 *)v32, v66);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v88);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v87);
            *(_DWORD *)v76 = 0;
            *(_DWORD *)&v76[4] = 0;
            *(_BYTE *)(v32 + 44) = 1;
            v67 = (float)*(int *)(v29 + 28);
            *(float *)&v76[8] = (float)*(int *)(v29 + 24);
            *(float *)&v76[12] = v67;
            *(_OWORD *)(v32 + 84) = *(_OWORD *)v76;
            DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v29, v87, v28);
            *(_OWORD *)(v32 + 48) = *(_OWORD *)DestToTexSpaceTransform;
            *(_OWORD *)(v32 + 64) = *(_OWORD *)(DestToTexSpaceTransform + 16);
            *(_DWORD *)(v32 + 80) = *(_DWORD *)(DestToTexSpaceTransform + 32);
            *(_BYTE *)(v32 + 100) = 0;
          }
          goto LABEL_30;
        }
        v57 = &v103;
      }
      EffectInput::operator=(v32, (__int64)v57);
LABEL_30:
      ++v28;
      v30 += 104LL;
      if ( v28 >= v31 )
      {
        v7 = v78;
        break;
      }
    }
  }
  v33 = *(const struct D2D_SIZE_F **)v73;
  *(_OWORD *)&v76[8] = 0LL;
  v34 = *(_DWORD *)(*(_QWORD *)v73 + 4LL);
  *(_DWORD *)v76 = **(_DWORD **)v73;
  *(_DWORD *)&v76[4] = v34;
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v89, (float *)&v76[8], (float *)&v76[12]);
  v35 = v74;
  v78 = (struct CDrawingContext *)v74;
  v36 = v74;
  std::vector<EffectInput>::reserve(v81, v74);
  v37 = 0;
  if ( !v35 )
  {
LABEL_42:
    v107 = 0;
    v46 = 0;
    v106 = v35;
    while ( v46 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * v36) + 76LL) )
    {
      BlurredWallpaperEffectInput = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      v7,
                                      v33,
                                      v35,
                                      v46,
                                      v79,
                                      v81,
                                      (struct EffectInput *)&v108[13 * v46]);
      v45 = BlurredWallpaperEffectInput;
      if ( BlurredWallpaperEffectInput < 0 )
      {
        v69 = 898;
        goto LABEL_99;
      }
      ++v107;
      v33 = *(const struct D2D_SIZE_F **)v73;
      ++v46;
    }
    BlurredWallpaperEffectInput = CBrushRenderingGraph::UpdateDrawListCache(
                                    this,
                                    v7,
                                    v86,
                                    (struct EffectStage *)&v106,
                                    a5,
                                    v85);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput >= 0 )
      goto LABEL_47;
    v69 = 907;
    goto LABEL_99;
  }
  v38 = 0LL;
  v39 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  while ( 1 )
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>(v81);
    v40 = (struct EffectInput *)&v39[v81[0]];
    EffectInput::Reset(v40);
    *((_BYTE *)v40 + 44) = 1;
    *((_BYTE *)v40 + 100) = 1;
    v41 = *(_QWORD *)(v38 + *((_QWORD *)this + 18));
    v107 = 0;
    v106 = v37;
    if ( !CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v41, &v95) )
      break;
    if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v41 + 8)) )
      goto LABEL_62;
    BlurredWallpaperEffectInput = CBrushRenderingGraph::GetEffectStageInput(
                                    this,
                                    v7,
                                    *(const struct D2D_SIZE_F **)v73,
                                    v37,
                                    0,
                                    v79,
                                    v81,
                                    (struct EffectInput *)v108);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v69 = 815;
      goto LABEL_99;
    }
    v107 = 1;
    if ( v110 )
    {
      v38 = v72;
LABEL_62:
      v54 = *(_QWORD *)(v38 + *((_QWORD *)this + 18));
      v55 = 104LL * *(unsigned int *)(v54 + 84);
      if ( *(_BYTE *)(v54 + 88) )
        v56 = v81[0] + v55;
      else
        v56 = v79[0] + v55;
      EffectInput::operator=((__int64)v40, v56);
      goto LABEL_40;
    }
    BlurredWallpaperEffectInput = CBrushRenderingGraph::RenderExternalEffect(
                                    this,
                                    v7,
                                    v44,
                                    (const struct EffectStage *)&v106,
                                    (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v76,
                                    v40);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v69 = 824;
      goto LABEL_99;
    }
LABEL_39:
    v38 = v72;
LABEL_40:
    CBrushRenderingGraph::CleanupEffectStage(v43, (struct EffectStage *)&v106);
    v38 += 8LL;
    v39 = (char *)v75 + 104;
    v72 = v38;
    ++v37;
    v75 = (const struct CVisualTreePath *)((char *)v75 + 104);
    if ( v37 >= v74 )
    {
      v33 = *(const struct D2D_SIZE_F **)v73;
      v35 = v74;
      v36 = (unsigned __int64)v78;
      goto LABEL_42;
    }
  }
  v52 = v107;
  v53 = 0LL;
  v71 = 0;
  if ( !*(_DWORD *)(v41 + 76) )
  {
LABEL_58:
    if ( v109 && v52 == 1 && v111 && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v41 + 8)) )
      goto LABEL_62;
    BlurredWallpaperEffectInput = CBrushRenderingGraph::RenderInternalEffect(
                                    this,
                                    v7,
                                    (struct EffectStage *)&v106,
                                    (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v76,
                                    v40);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
    {
      v69 = 863;
      goto LABEL_99;
    }
    goto LABEL_39;
  }
  while ( 1 )
  {
    BlurredWallpaperEffectInput = CBrushRenderingGraph::GetEffectStageInput(
                                    this,
                                    v7,
                                    *(const struct D2D_SIZE_F **)v73,
                                    v37,
                                    v52,
                                    v79,
                                    v81,
                                    (struct EffectInput *)&v108[13 * v53]);
    v45 = BlurredWallpaperEffectInput;
    if ( BlurredWallpaperEffectInput < 0 )
      break;
    v52 = v107 + 1;
    v53 = v71 + 1;
    ++v107;
    v71 = v53;
    if ( (unsigned int)v53 >= *(_DWORD *)(v41 + 76) )
    {
      v38 = v72;
      goto LABEL_58;
    }
  }
  v69 = 844;
LABEL_99:
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)v43,
    &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    BlurredWallpaperEffectInput,
    v69,
    0LL);
LABEL_47:
  CBrushRenderingGraph::CleanupEffectStage(v43, (struct EffectStage *)&v106);
  v47 = v79[0];
  if ( v79[0] )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v79[0], v79[1]);
    std::_Deallocate<16,0>(v47, 8 * ((v80 - v47) >> 3));
  }
  v48 = v81[0];
  if ( v81[0] )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v81[0], v81[1]);
    std::_Deallocate<16,0>(v48, 8 * ((v82 - v48) >> 3));
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v100 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v100);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v103 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v103);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v96);
  v49 = 4LL;
  v50 = (EffectInput *)&v112;
  do
  {
    v50 = (EffectInput *)((char *)v50 - 104);
    EffectInput::~EffectInput(v50);
    --v49;
  }
  while ( v49 );
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v77);
  return v45;
}
