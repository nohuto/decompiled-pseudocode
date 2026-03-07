__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        struct CVisualTree *a2,
        float *a3,
        COcclusionContext *a4,
        int a5,
        char a6,
        struct CVisual *a7)
{
  struct CVisual *v7; // r15
  float *v9; // r9
  int v12; // ebx
  void *v13; // r13
  __int64 v14; // rax
  struct CVisual *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  void (__fastcall ***v18)(_QWORD, void **); // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, void **); // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  CVisualTreePath **v24; // rax
  unsigned int v25; // edx
  CVisualTreePath *v26; // rbx
  const struct CVisual *v27; // rax
  int v28; // eax
  unsigned int v29; // ecx
  HANDLE ProcessHeap; // rax
  char *v31; // rax
  detail::liberal_expansion_policy *v32; // rbx
  char *v33; // rax
  char *v34; // rax
  unsigned int v35; // edx
  CVisualTreePath **v36; // rax
  CVisualTreePath *v37; // rcx
  float *v38; // rdx
  float v39; // xmm0_4
  int v40; // ecx
  int v41; // eax
  bool v42; // cf
  bool v43; // zf
  char v44; // al
  bool v45; // r13
  int v46; // edi
  unsigned int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edi
  int v51; // eax
  int v52; // r9d
  void **v53; // rax
  char **v54; // rdi
  char *v55; // rsi
  __int64 v56; // rax
  HANDLE v57; // rax
  char v59; // r13
  const char **v60; // rax
  const void *v61; // rsi
  const char *v62; // rdi
  const char *v63; // rbx
  const char **v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  const char *v67; // rdx
  __int64 v68; // rbx
  __int64 v69; // rax
  CVisualTree *v70; // rcx
  int v71; // eax
  char v72; // r10
  int v73; // eax
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // [rsp+20h] [rbp-E0h]
  unsigned int v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+30h] [rbp-D0h]
  char v81; // [rsp+32h] [rbp-CEh]
  char v82; // [rsp+33h] [rbp-CDh]
  char v83; // [rsp+34h] [rbp-CCh]
  void *v84; // [rsp+38h] [rbp-C8h]
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  void *v86; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisual *v87; // [rsp+50h] [rbp-B0h]
  float *v88; // [rsp+58h] [rbp-A8h]
  void *v89; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v90; // [rsp+68h] [rbp-98h]
  __int64 v91; // [rsp+70h] [rbp-90h]
  __int64 v92; // [rsp+78h] [rbp-88h]
  _BYTE v93[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v94; // [rsp+88h] [rbp-78h]
  __int64 v95; // [rsp+90h] [rbp-70h]
  __int64 v96; // [rsp+98h] [rbp-68h]
  void *v97; // [rsp+A0h] [rbp-60h] BYREF
  int v98; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v99; // [rsp+ACh] [rbp-54h]
  __int128 v100; // [rsp+BCh] [rbp-44h]
  int v101; // [rsp+CCh] [rbp-34h]
  char v102[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v103; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v104; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v105; // [rsp+F8h] [rbp-8h] BYREF
  int v106; // [rsp+108h] [rbp+8h]
  int v107; // [rsp+10Ch] [rbp+Ch]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v7 = a7;
  v81 = *((_BYTE *)this + 8048);
  v9 = a3;
  v93[0] = v81;
  v82 = *((_BYTE *)this + 8049);
  v12 = 0;
  v93[1] = v82;
  v83 = *((_BYTE *)this + 8050);
  v93[2] = v83;
  v90 = *((_QWORD *)this + 1007);
  v94 = v90;
  v91 = *((_QWORD *)this + 1008);
  v95 = v91;
  v92 = *((_QWORD *)this + 1009);
  v96 = v92;
  v13 = (void *)*((_QWORD *)this + 1010);
  v84 = v13;
  v97 = v13;
  v88 = a3;
  *((_QWORD *)this + 1010) = 0LL;
  v80 = 0;
  if ( a4 )
  {
    if ( *((_QWORD *)a4 + 3) == GetCurrentFrameId() )
    {
      COcclusionContext::SetDeviceTransform(a4, (CDrawingContext *)((char *)this + 96));
      v9 = v88;
    }
    else
    {
      a4 = 0LL;
    }
  }
  if ( !a7 )
    v7 = (struct CVisual *)*((_QWORD *)a2 + 8);
  v14 = *((_QWORD *)this + 25);
  v87 = v7;
  if ( v14 )
  {
    v15 = *(struct CVisual **)(v14 + 1784);
    if ( *((_QWORD *)this + 26) )
      v15 = 0LL;
    v87 = v15;
  }
  v106 = 0;
  v107 = 0;
  *((_BYTE *)this + 8050) = a6;
  v105 = 0LL;
  *((_WORD *)this + 4024) = 1;
  *((_QWORD *)this + 1007) = a2;
  *((_QWORD *)this + 1008) = v7;
  *((_QWORD *)this + 1009) = a4;
  CMILMatrix::Transform3DBoundsHelper<1>((CDrawingContext *)((char *)this + 96), v9, (float *)&v105);
  v16 = *((_QWORD *)this + 4);
  v104 = v105;
  v17 = *(_QWORD *)(v16 + 8);
  v105 = 0LL;
  v18 = (void (__fastcall ***)(_QWORD, void **))(v16 + 8 + *(int *)(v17 + 16));
  (**v18)(v18, &lpMem);
  *(_QWORD *)&v103 = 0LL;
  v19 = *((_QWORD *)this + 113);
  *((float *)&v103 + 2) = (float)(int)lpMem;
  *((float *)&v103 + 3) = (float)SHIDWORD(lpMem);
  if ( v19 == *((_QWORD *)this + 112) || !*(_QWORD *)(v19 - 184) )
    v105 = v103;
  else
    CBaseClipStack::Top((char *)this + 3184, &v105);
  v20 = *((_QWORD *)this + 113);
  if ( v20 != *((_QWORD *)this + 112) && *(_QWORD *)(v20 - 168) )
  {
    v103 = 0LL;
    CBaseClipStack::Top((char *)this + 3216, &v103);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v105, &v103);
  }
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v104, &v105);
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v21 = (__int64 (__fastcall ***)(_QWORD, void **))(*((_QWORD *)this + 4)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
    v22 = (**v21)(v21, &v86);
    if ( *(_DWORD *)v22 > (unsigned int)CDebugVisualImage::s_renderTargetSize
      && *(_DWORD *)(v22 + 4) > HIDWORD(CDebugVisualImage::s_renderTargetSize) )
    {
      CDebugVisualImage::s_renderTargetSize = *(CDisplayManager **)v22;
    }
  }
  PixelAlign((int *)&v103, (float *)&v104);
  *(float *)&v104 = (float)(int)v103;
  *((float *)&v104 + 1) = (float)SDWORD1(v103);
  *((float *)&v104 + 2) = (float)SDWORD2(v103);
  *((float *)&v104 + 3) = (float)SHIDWORD(v103);
  if ( (float)SDWORD2(v103) > (float)(int)v103 && (float)SHIDWORD(v103) > (float)SDWORD1(v103) )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2);
    v23 = *((_QWORD *)this + 26);
    if ( v23 )
    {
      v24 = (CVisualTreePath **)std::make_unique<CVisualTreePath,CVisualTreePath &,0>(
                                  &lpMem,
                                  *(__int128 ***)(v23 + 8080));
      std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>(
        (CVisualTreePath **)this + 1010,
        v24);
      if ( lpMem )
        CVisualTreePath::`scalar deleting destructor'((CVisualTreePath *)lpMem, v25);
      v26 = (CVisualTreePath *)*((_QWORD *)this + 1010);
      v27 = (const struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 26) + 24LL)
                                                                       + 32LL))(*((_QWORD *)this + 26) + 24LL);
      v28 = CVisualTreePath::Append(v26, v27, a2);
      v12 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x13E7u, 0LL);
        goto LABEL_59;
      }
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v31 = (char *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
      v32 = (detail::liberal_expansion_policy *)v31;
      if ( !v31 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v33 = v31 + 24;
      *(_QWORD *)&v103 = 0LL;
      *(_QWORD *)v32 = v33;
      *((_QWORD *)v32 + 1) = v33;
      *((_QWORD *)&v103 + 1) = a2;
      *((_QWORD *)v32 + 2) = (char *)v32 + 56;
      v34 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
              v32,
              0LL,
              1uLL);
      *(_OWORD *)v34 = v103;
      v36 = (CVisualTreePath **)((char *)this + 8080);
      if ( (void **)((char *)this + 8080) == &v86 )
      {
        v37 = v32;
      }
      else
      {
        v37 = *v36;
        *v36 = v32;
        if ( !v37 )
          goto LABEL_35;
      }
      CVisualTreePath::`scalar deleting destructor'(v37, v35);
    }
LABEL_35:
    if ( v7 == *((struct CVisual **)a2 + 8) )
    {
      if ( *((_QWORD *)a2 + 8) )
        v38 = (float *)((char *)a2 + 72);
      else
        v38 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      v38 = (float *)((char *)v7 + 148);
    }
    v39 = v38[5];
    v40 = (v39 <= v38[4]) + 1;
    if ( v38[2] > *v38 )
      v40 = v39 <= v38[4];
    v41 = v40 + 1;
    if ( v38[3] > v38[1] )
      v41 = v40;
    v42 = v41 == 0;
    v43 = v41 == 1;
    v44 = 0;
    v45 = !v42 && !v43;
    if ( *((_BYTE *)g_pComposition + 1274) )
      v44 = *((_BYTE *)g_pComposition + 1275);
    if ( v44 )
    {
      *((_DWORD *)this + 23) = 1065353216;
      *((_DWORD *)this + 20) = 0;
      v46 = 2;
      *(_QWORD *)((char *)this + 84) = 0LL;
      v45 = 1;
    }
    else
    {
      v46 = a5;
    }
    v12 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 96), 1, 1);
    if ( v12 < 0 )
    {
      v79 = 5116;
      goto LABEL_71;
    }
    if ( *((_QWORD *)this + 26) )
    {
      LOBYTE(v49) = 0;
    }
    else
    {
      v12 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__int64)&v104, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      if ( v12 < 0 )
      {
        v79 = 5122;
LABEL_71:
        v52 = v12;
        goto LABEL_57;
      }
      v80 = 1;
      LOBYTE(v49) = 1;
      v50 = v46 - 1;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v51 = (**((__int64 (__fastcall ***)(char *, char *, __int64, __int64))this + 2))(
                  (char *)this + 16,
                  (char *)this + 80,
                  v48,
                  v49);
          v12 = v51;
          if ( v51 < 0 )
          {
            v79 = 5132;
LABEL_56:
            v52 = v51;
LABEL_57:
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v52, v79, 0LL);
LABEL_58:
            v13 = v84;
            goto LABEL_59;
          }
          LOBYTE(v49) = 1;
        }
      }
      else
      {
        CDrawingContext::DiscardIfOccluded((__int64)this, (float *)&v104);
        LOBYTE(v49) = 1;
      }
    }
    if ( v45 )
    {
      v59 = 0;
      if ( v12 < 0 )
        goto LABEL_58;
LABEL_105:
      v72 = 1;
      if ( v59 )
        CDrawingContext::PopRenderOptionsInternal(this, 1);
      if ( (_BYTE)v49 )
      {
        v73 = *((_DWORD *)this + 796);
        if ( v73 )
          *((_DWORD *)this + 796) = v73 - 1;
        --*(_QWORD *)(*((_QWORD *)this + 113) - 184LL);
        *((_BYTE *)this + 8169) = v72;
      }
      v74 = *((_DWORD *)this + 92);
      if ( v74 )
      {
        v75 = (unsigned int)(v74 - 1);
        *((_DWORD *)this + 92) = v75;
        v105 = *(_OWORD *)(*((_QWORD *)this + 48) + 16 * v75);
      }
      if ( *((_QWORD *)&v105 + 1) )
        CWatermarkStack<unsigned int,64,2,10>::Pop((char *)this + 464);
      v76 = *((_DWORD *)this + 100);
      if ( v76 )
        *((_DWORD *)this + 100) = v76 - 1;
      v77 = *((_DWORD *)this + 108);
      v13 = v84;
      if ( v77 )
        *((_DWORD *)this + 108) = v77 - 1;
      goto LABEL_59;
    }
    *((_DWORD *)this + 2022) = 0;
    if ( a6 )
    {
      v98 = 3;
      v99 = 0LL;
      HIDWORD(v99) = 1;
      LODWORD(v99) = -16777210;
      v101 = 0;
      v100 = 0LL;
      v51 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)&v98, 1);
      v12 = v51;
      if ( v51 < 0 )
      {
        v79 = 5158;
        goto LABEL_56;
      }
      v59 = 1;
    }
    else
    {
      v59 = 0;
    }
    *((_BYTE *)this + 8049) = 1;
    *((_BYTE *)this + 193) = 0;
    if ( dword_1803E0760 && ((*((_BYTE *)v7 + 272) & 5) != 0 || *((int *)v7 + 66) > 0 || *((int *)v7 + 67) > 0) )
    {
      v60 = (const char **)DwmDbg::DbgString::DbgString(
                             (DwmDbg::DbgString *)&v86,
                             (CDrawingContext *)((char *)this + 96));
      v61 = (const void *)*((_QWORD *)this + 25);
      v62 = *v60;
      v63 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v89, (const struct MilRectF *)&v104);
      v64 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, (const struct MilRectF *)&v105);
      v65 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)v102,
              "rcTargetBounds=[%s], rcRenderBounds=[%s], m_pCutoffBVI=0x%p, m_deviceTransform=[%s]",
              *v64,
              v63,
              v61,
              v62);
      v66 = *((_QWORD *)this + 1010);
      v67 = "Render-StartWalk-Backdrop";
      v68 = v65;
      if ( !*((_QWORD *)this + 25) )
        v67 = "Render-StartWalk-Normal";
      v69 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v103, v67);
      DwmDbg::Backdrops::LogTreeWalkEtwEvent(v69, v7, a2, v66, v68);
      if ( lpMem )
        operator delete(lpMem);
      if ( v89 )
        operator delete(v89);
      if ( v86 )
        operator delete(v86);
    }
    v70 = (CVisualTree *)*((_QWORD *)this + 1007);
    *((_QWORD *)this + 422) = v70;
    if ( v7 )
    {
      if ( v7 != *((struct CVisual **)v70 + 8) )
      {
        v71 = CVisualTree::EnsureVisualTransform(v70, v7);
        v12 = v71;
        if ( v71 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA1,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\engine\\TreeIterator.h",
            (const char *)(unsigned int)v71,
            v78);
LABEL_101:
          v79 = 5187;
          goto LABEL_71;
        }
      }
    }
    else
    {
      v7 = (struct CVisual *)*((_QWORD *)v70 + 8);
    }
    v12 = CVisualTreeIterator::WalkSubtree<CDrawingContext>((char *)this + 3312, v7, v87, this, 3);
    if ( v12 >= 0 )
    {
      v43 = !g_ShowDirtyRegions;
      *((_BYTE *)this + 8049) = 0;
      if ( !v43 )
      {
        v51 = CDrawingContext::DrawRectangleOverlay(this, v88);
        v12 = v51;
        if ( v51 < 0 )
        {
          v79 = 5194;
          goto LABEL_56;
        }
      }
      LOBYTE(v49) = v80;
      goto LABEL_105;
    }
    goto LABEL_101;
  }
LABEL_59:
  *((_BYTE *)this + 8048) = v81;
  *((_BYTE *)this + 8049) = v82;
  *((_BYTE *)this + 8050) = v83;
  *((_QWORD *)this + 1007) = v90;
  *((_QWORD *)this + 1008) = v91;
  *((_QWORD *)this + 1009) = v92;
  v53 = (void **)((char *)this + 8080);
  if ( (void **)((char *)this + 8080) != &v97 )
  {
    v54 = (char **)*v53;
    v97 = 0LL;
    *v53 = v13;
    if ( v54 )
    {
      v55 = *v54;
      v56 = (v54[1] - *v54) >> 4;
      if ( v56 )
        v54[1] -= 16 * v56;
      *v54 = 0LL;
      if ( v55 == (char *)(v54 + 3) )
        v55 = 0LL;
      if ( v55 )
      {
        v57 = GetProcessHeap();
        HeapFree(v57, 0, v55);
      }
      operator delete(v54, 0x38uLL);
    }
  }
  CDrawingContext::DrawVisualTreeData::~DrawVisualTreeData((CDrawingContext::DrawVisualTreeData *)v93);
  return (unsigned int)v12;
}
