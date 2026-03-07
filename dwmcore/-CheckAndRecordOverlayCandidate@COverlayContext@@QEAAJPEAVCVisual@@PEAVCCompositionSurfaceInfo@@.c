__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        struct ISwapChainRealization *a4,
        float *a5,
        float *a6,
        _DWORD *a7,
        enum DXGI_MODE_ROTATION a8,
        int a9,
        bool a10,
        char a11)
{
  const struct CCompositionSurfaceInfo *v11; // r12
  COverlayContext *v12; // r15
  struct ISwapChainRealization *v13; // r14
  __int64 v14; // rax
  struct ISwapChainRealization *v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, struct tagRECT *); // rcx
  int v17; // ebx
  char *v18; // rcx
  _DWORD *v19; // rax
  float v20; // xmm0_4
  float v21; // eax
  double v22; // xmm0_8
  int v23; // eax
  double v24; // xmm0_8
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  double v28; // xmm0_8
  int v29; // eax
  double v30; // xmm0_8
  int v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  double v34; // xmm0_8
  int v35; // eax
  LONG v36; // eax
  int v37; // eax
  int v38; // eax
  struct ISwapChainRealization *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 (__fastcall ***v42)(_QWORD, struct tagRECT *); // rcx
  __int64 v43; // rax
  bool v44; // cc
  int v45; // ebx
  int **v46; // r13
  char v47; // al
  __int64 (__fastcall ***v48)(_QWORD, struct tagRECT *); // rcx
  _DWORD *v49; // rdi
  __int64 v50; // r8
  _DWORD *v51; // rax
  char *v52; // rcx
  char *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 (__fastcall ***v57)(_QWORD, struct tagRECT *); // rcx
  int v58; // r13d
  struct ISwapChainRealization *v59; // rcx
  int v60; // r12d
  struct ISwapChainRealization *v61; // rcx
  int v62; // r15d
  char v63; // al
  struct ISwapChainRealization *v64; // rbx
  char v65; // r14
  char v66; // di
  char v67; // si
  _DWORD *v68; // rax
  bool v69; // si
  unsigned int v70; // eax
  _QWORD *v71; // rax
  int v72; // edi
  __int64 v73; // r9
  __int64 v74; // rsi
  __int64 (__fastcall *v75)(__int64, _DWORD *); // rdi
  int v76; // ebx
  _DWORD *v77; // rax
  char v78; // cl
  int RectangleCount; // ebx
  _DWORD *v80; // rax
  void *v81; // rdx
  _DWORD *v82; // rax
  int v83; // edx
  int v84; // r9d
  __int64 v85; // rcx
  __int64 v86; // rax
  LONG v87; // ecx
  LONG v88; // eax
  unsigned int v89; // eax
  __int64 v90; // rax
  __int64 (__fastcall ***v91)(_QWORD, struct tagRECT *); // rcx
  bool v92; // zf
  __int64 v93; // rax
  __int64 (__fastcall ***v94)(_QWORD, struct tagRECT *); // rcx
  __int64 *v95; // rax
  int v96; // eax
  int v97; // eax
  char v98; // bl
  __int64 v99; // rax
  __int64 (__fastcall ***v100)(_QWORD, struct tagRECT *); // rcx
  int v101; // esi
  struct ISwapChainRealization *v102; // rcx
  int v103; // edi
  struct ISwapChainRealization *v104; // rcx
  int v105; // ebx
  _DWORD *v106; // rax
  int v107; // edx
  __int64 v108; // rcx
  int v110; // [rsp+20h] [rbp-140h]
  float v111; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int8 v112; // [rsp+E4h] [rbp-7Ch]
  char v113; // [rsp+E5h] [rbp-7Bh]
  bool IsIntelWorkaroundNeeded; // [rsp+E6h] [rbp-7Ah]
  __int64 (__fastcall ***v115)(_QWORD); // [rsp+E8h] [rbp-78h] BYREF
  __int64 v116; // [rsp+F0h] [rbp-70h] BYREF
  struct ISwapChainRealization *v117; // [rsp+F8h] [rbp-68h]
  struct CVisual *v118; // [rsp+100h] [rbp-60h]
  FastRegion::CRegion *v119[2]; // [rsp+110h] [rbp-50h] BYREF
  COverlayContext *v120; // [rsp+120h] [rbp-40h]
  const struct CCompositionSurfaceInfo *v121; // [rsp+128h] [rbp-38h]
  int **v122; // [rsp+130h] [rbp-30h]
  _DWORD *v123; // [rsp+138h] [rbp-28h]
  char v124[8]; // [rsp+140h] [rbp-20h] BYREF
  char v125[8]; // [rsp+148h] [rbp-18h] BYREF
  struct tagRECT v126; // [rsp+150h] [rbp-10h] BYREF
  _DWORD v127[6]; // [rsp+168h] [rbp+8h] BYREF
  int v128; // [rsp+180h] [rbp+20h] BYREF
  struct tagRECT v129; // [rsp+184h] [rbp+24h] BYREF
  struct tagRECT v130; // [rsp+194h] [rbp+34h] BYREF
  struct tagRECT v131; // [rsp+1A4h] [rbp+44h] BYREF
  enum DXGI_MODE_ROTATION v132; // [rsp+1B4h] [rbp+54h]
  BOOL v133; // [rsp+1B8h] [rbp+58h]
  int v134; // [rsp+1CCh] [rbp+6Ch]
  int v135; // [rsp+1E0h] [rbp+80h]
  int v136; // [rsp+1E8h] [rbp+88h]
  struct FastRegion::Internal::CRgnData *v137[10]; // [rsp+1F0h] [rbp+90h] BYREF
  void *retaddr; // [rsp+288h] [rbp+128h]

  v11 = a3;
  v12 = this;
  v13 = a4;
  v118 = a2;
  v121 = a3;
  v120 = this;
  v117 = a4;
  v123 = a7;
  memset_0(&v128, 0, 0x70uLL);
  v14 = *((_QWORD *)v13 + 1);
  *(_OWORD *)v119 = 0LL;
  v15 = (struct ISwapChainRealization *)((char *)v13 + *(int *)(v14 + 12) + 8);
  if ( *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v15)(v15, v127) + 4) != 1 )
  {
    v16 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)v12
                                                             + 8LL
                                                             + *(int *)(*(_QWORD *)(*(_QWORD *)v12 + 8LL) + 12LL));
    v17 = *(_DWORD *)((**v16)(v16, &v126) + 8);
    v18 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8;
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(char *, float *))(*(_QWORD *)v18 + 16LL))(v18, &v111);
    if ( *v19 == DisplayId::None || *v19 == v17 || v17 == DisplayId::All )
    {
      v20 = *a5 + 6291456.25;
      v111 = v20;
      v21 = v20;
      v22 = a5[1];
      v129.left = (int)(LODWORD(v21) << 10) >> 11;
      *(float *)&v22 = v22 + 6291456.25;
      v111 = *(float *)&v22;
      v23 = LODWORD(v22);
      v24 = a5[2];
      v129.top = v23 << 10 >> 11;
      *(float *)&v24 = v24 + 6291456.25;
      v111 = *(float *)&v24;
      v25 = LODWORD(v24);
      v26 = a5[3];
      v129.right = v25 << 10 >> 11;
      *(float *)&v26 = v26 + 6291456.25;
      v111 = *(float *)&v26;
      v27 = LODWORD(v26);
      v28 = *a6;
      v129.bottom = v27 << 10 >> 11;
      *(float *)&v28 = v28 + 6291456.25;
      v111 = *(float *)&v28;
      v29 = LODWORD(v28);
      v30 = a6[1];
      v130.left = v29 << 10 >> 11;
      *(float *)&v30 = v30 + 6291456.25;
      v111 = *(float *)&v30;
      v31 = LODWORD(v30);
      v32 = a6[2];
      v130.top = v31 << 10 >> 11;
      *(float *)&v32 = v32 + 6291456.25;
      v111 = *(float *)&v32;
      v33 = LODWORD(v32);
      v34 = a6[3];
      v130.right = v33 << 10 >> 11;
      *(float *)&v34 = v34 + 6291456.25;
      v111 = *(float *)&v34;
      v35 = LODWORD(v34);
      LODWORD(v34) = *a7;
      v130.bottom = v35 << 10 >> 11;
      *(float *)&v34 = *(float *)&v34 + 6291456.25;
      v111 = *(float *)&v34;
      v36 = (int)(LODWORD(v34) << 10) >> 11;
      LODWORD(v34) = a7[1];
      v131.left = v36;
      *(float *)&v34 = *(float *)&v34 + 6291456.25;
      v111 = *(float *)&v34;
      v37 = LODWORD(v34);
      LODWORD(v34) = a7[2];
      v131.top = v37 << 10 >> 11;
      *(float *)&v34 = *(float *)&v34 + 6291456.25;
      v111 = *(float *)&v34;
      v38 = LODWORD(v34);
      LODWORD(v34) = a7[3];
      v131.right = v38 << 10 >> 11;
      v111 = *(float *)&v34 + 6291456.25;
      v131.bottom = (int)(LODWORD(v111) << 10) >> 11;
      v39 = (struct ISwapChainRealization *)((char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 12LL) + 8);
      v40 = (**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v39)(v39, v127);
      v41 = *(_QWORD *)v12;
      v134 = *(_DWORD *)(v40 + 8);
      v45 = v134;
      v42 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(v41 + 8 + *(int *)(*(_QWORD *)(v41 + 8) + 12LL));
      v43 = (**v42)(v42, &v126);
      v136 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v43 + 16), v45);
      v44 = *((_DWORD *)v12 + 2821) < 2000;
      LOBYTE(v45) = 0;
      v111 = *(float *)&v45;
      if ( v44 && (a9 & 3) != 0 )
      {
        v45 = (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
                                 &v131,
                                 &v130) == 0;
        v111 = *(float *)&v45;
      }
      IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(v12, &v129, &v130, &v131);
      COverlayContext::UpdateVisitedContentRegion(v12);
      v46 = (int **)((char *)v12 + 11176);
      v122 = (int **)((char *)v12 + 11176);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v137, &v131);
      if ( !**((_DWORD **)v12 + 1397)
        || !*(_DWORD *)v137[0]
        || (v47 = FastRegion::Internal::CRgnData::Intersects(
                    *((const struct FastRegion::Internal::CRgnData **)v12 + 1397),
                    v137[0]),
            v112 = 0,
            !v47) )
      {
        v112 = 1;
      }
      FastRegion::CRegion::FreeMemory((void **)v137);
      v48 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)v12
                                                               + 8LL
                                                               + *(int *)(*(_QWORD *)(*(_QWORD *)v12 + 8LL) + 12LL));
      v49 = (_DWORD *)(**v48)(v48, &v126);
      v50 = *(int *)(*((_QWORD *)v13 + 1) + 8LL);
      v51 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)((char *)v13 + v50 + 8) + 32LL))(
                        (__int64)v13 + v50 + 8,
                        &v116);
      if ( *v51 == *v49 && v51[1] == v49[1] )
      {
        v52 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 8LL) + 8;
        if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v52 + 24LL))(v52)
          || (v53 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 8LL) + 8,
              v54 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v53 + 8LL))(v53),
              !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v54 + 16))) )
        {
          v55 = *(int *)(*((_QWORD *)v13 + 1) + 4LL) + 8LL;
          v116 = 0LL;
          (**(void (__fastcall ***)(char *, GUID *, __int64 *))((char *)v13 + v55))(
            (char *)v13 + v55,
            &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
            &v116);
          v56 = *(int *)(*((_QWORD *)v13 + 1) + 4LL) + 8LL;
          v115 = 0LL;
          (**(void (__fastcall ***)(char *, GUID *, __int64 (__fastcall ****)(_QWORD)))((char *)v13 + v56))(
            (char *)v13 + v56,
            &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
            &v115);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            v57 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v13
                                                                     + *(int *)(*((_QWORD *)v13 + 1) + 12LL)
                                                                     + 8);
            v58 = *(_DWORD *)(**v57)(v57, &v126);
            v59 = (struct ISwapChainRealization *)((char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8);
            v60 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v59)(v59, v124) + 4);
            v61 = (struct ISwapChainRealization *)((char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8);
            v62 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v61)(v61, v125);
            v63 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v13 + 72LL))(v13);
            v64 = v117;
            v65 = v63;
            v66 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v117 + 64LL))(v117);
            v67 = v115 != 0LL;
            v45 = (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v64 + 88LL))(v64);
            v68 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v117 + 40LL))(
                              v117,
                              v127);
            McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
              *v68,
              v112,
              *v68,
              v45,
              v67,
              v66,
              v65,
              v112,
              v62,
              v60,
              v58,
              v128,
              v129.left,
              v129.top,
              v129.right,
              v129.bottom,
              v130.left,
              v130.top,
              v130.right,
              v130.bottom,
              v131.left,
              v131.top,
              v131.right,
              v131.bottom,
              v132,
              v133,
              v134);
            v13 = v117;
            v12 = v120;
            v11 = v121;
            v46 = v122;
            LOBYTE(v45) = LOBYTE(v111);
          }
          v69 = a10;
          if ( v116
            || (v70 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 72LL))(v11),
                !COverlayContext::IsCandidateDirectFlipCompatible(
                   v12,
                   v11,
                   v13,
                   (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v128,
                   a8,
                   v70,
                   a9,
                   a10))
            || CCommonRegistryData::m_dwOverlayTestMode != 5
            && *((_DWORD *)v12 + 12) > 1u
            && *((int *)v12 + 2821) >= 2200 )
          {
            if ( COverlayContext::OverlaysEnabled(v12) )
            {
              v113 = 0;
              if ( v115 )
                v113 = (**v115)(v115);
              if ( !(*(unsigned __int8 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 128LL))(v11)
                && !(_BYTE)v45
                && !IsIntelWorkaroundNeeded
                && !v113 )
              {
                if ( a10 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 56LL))(*(_QWORD *)v12) )
                {
                  if ( v130.left < 0 || v130.top < 0 )
                  {
                    v69 = 0;
                  }
                  else
                  {
                    v127[0] = v130.left;
                    v127[2] = v130.right;
                    v127[1] = v130.top;
                    v85 = *(_QWORD *)v12;
                    v127[3] = v130.bottom;
                    v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 160LL))(v85);
                    if ( *((_BYTE *)v12 + 11025) )
                    {
                      v87 = *(_DWORD *)(v86 + 36);
                      v126.left = 0;
                      v88 = *(_DWORD *)(v86 + 40);
                      v126.top = 0;
                      v126.bottom = v88;
                      v126.right = v87;
                    }
                    else
                    {
                      v126 = *(struct tagRECT *)(v86 + 20);
                    }
                    v69 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
                            (__int64)&v126,
                            (__int64)v127)
                       && a10;
                  }
                }
                v89 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 72LL))(v11);
                if ( COverlayContext::IsCandidateOverlayCompatible(
                       v12,
                       v118,
                       v11,
                       v13,
                       (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v128,
                       a8,
                       v89,
                       v69) )
                {
                  v128 = a9;
                  v90 = *((_QWORD *)v13 + 1);
                  v132 = a8;
                  v91 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v13 + *(int *)(v90 + 12) + 8);
                  v92 = *(_DWORD *)((**v91)(v91, &v126) + 4) == 1;
                  v93 = *((_QWORD *)v13 + 1);
                  v135 = 2;
                  v133 = v92;
                  v94 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v13 + *(int *)(v93 + 12) + 8);
                  v134 = *(_DWORD *)((**v94)(v94, &v126) + 8);
                  v95 = std::make_shared<CRegion,>(&v126);
                  std::shared_ptr<CRegion>::operator=(v119, v95);
                  if ( *(_QWORD *)&v126.right )
                    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v126.right);
                  v96 = FastRegion::CRegion::Copy((int **)v119[0], v46);
                  if ( v96 < 0 )
                    ModuleFailFastForHRESULT((unsigned int)v96, retaddr);
                  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v137, &v131);
                  v97 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v119[0], v137);
                  if ( v97 < 0 )
                    ModuleFailFastForHRESULT((unsigned int)v97, retaddr);
                  FastRegion::CRegion::FreeMemory((void **)v137);
                  v98 = v116 != 0;
                  v99 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 64LL))(v11);
                  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(
                    (__int64)v12 + 88,
                    (int)v12,
                    (char)v118,
                    (char)v11,
                    v99,
                    (__int64)&v128,
                    (__int64)v123,
                    v119,
                    v98,
                    v69,
                    a11,
                    v112);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                  {
                    v100 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v13
                                                                              + *(int *)(*((_QWORD *)v13 + 1) + 12LL)
                                                                              + 8);
                    v101 = *(_DWORD *)(**v100)(v100, &v126);
                    v102 = (struct ISwapChainRealization *)((char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8);
                    v103 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v102)(
                                         v102,
                                         v127)
                                     + 4);
                    v104 = (struct ISwapChainRealization *)((char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8);
                    v105 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v104)(
                                        v104,
                                        v125);
                    v106 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, char *))(*(_QWORD *)v13 + 40LL))(
                                       v13,
                                       v124);
                    McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                      *v106,
                      v107,
                      *v106,
                      v105,
                      v103,
                      v101,
                      v128,
                      v129.left,
                      v129.top,
                      v129.right,
                      v129.bottom,
                      v130.left,
                      v130.top,
                      v130.right,
                      v130.bottom,
                      v131.left,
                      v131.top,
                      v131.right,
                      v131.bottom,
                      v132,
                      v133,
                      v134);
                  }
                }
              }
            }
            goto LABEL_65;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v71 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v13 + 40LL))(
                              v13,
                              v127);
            McTemplateU0x_EventWriteTransfer(
              *(unsigned int *)v71,
              (__int64)&EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
              *(unsigned int *)v71 | (unsigned __int64)((__int64)(int)HIDWORD(*v71) << 32));
          }
          v72 = 2;
          if ( v112 )
            goto LABEL_39;
          if ( v115 )
          {
            v73 = *(int *)(*((_QWORD *)v13 + 1) + 12LL);
            v74 = *(_QWORD *)v12 + *(int *)(*(_QWORD *)(*(_QWORD *)v12 + 8LL) + 8LL);
            v75 = **(__int64 (__fastcall ***)(__int64, _DWORD *))(v74 + 8);
            v76 = *(_DWORD *)(**(__int64 (__fastcall ***)(__int64, struct tagRECT *))((char *)v13 + v73 + 8))(
                               (__int64)v13 + v73 + 8,
                               &v126);
            v77 = (_DWORD *)v75(v74 + 8, v127);
            v78 = *((_BYTE *)v12 + 11311);
            if ( v76 == *v77 )
            {
              if ( v78 )
              {
                v72 = 4;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                  goto LABEL_39;
                v126 = 0LL;
                FastRegion::CRegion::GetBoundingRect(v46, &v126);
                RectangleCount = FastRegion::CRegion::GetRectangleCount(v46);
                v80 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v13 + 40LL))(
                                  v13,
                                  v127);
                v81 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
              }
              else
              {
                v72 = 3;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                {
LABEL_39:
                  CDirectFlipInfo::Init((char *)v12 + 11040, *(_QWORD *)v12, v118, v11, v72, v46);
LABEL_65:
                  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v115);
                  if ( v116 )
                  {
                    v108 = *(int *)(*(_QWORD *)(v116 + 8) + 4LL) + v116 + 8;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
                  }
                  return 0LL;
                }
                v126 = 0LL;
                FastRegion::CRegion::GetBoundingRect(v46, &v126);
                RectangleCount = FastRegion::CRegion::GetRectangleCount(v46);
                v80 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v13 + 40LL))(
                                  v13,
                                  v127);
                v81 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
              }
              McTemplateU0xddddd_EventWriteTransfer(
                *v80,
                (_DWORD)v81,
                *v80,
                RectangleCount,
                v126.left,
                v126.top,
                v126.right,
                v126.bottom);
              goto LABEL_39;
            }
            if ( !v78 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              {
                v126 = 0LL;
                FastRegion::CRegion::GetBoundingRect(v46, &v126);
                v82 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v13 + 40LL))(
                                  v13,
                                  v127);
                McTemplateU0xqqdddd_EventWriteTransfer(
                  *v82,
                  v83,
                  *v82,
                  v84,
                  v110,
                  v126.left,
                  v126.top,
                  v126.right,
                  v126.bottom);
              }
              goto LABEL_65;
            }
          }
          else if ( !*((_BYTE *)v12 + 11311) )
          {
            goto LABEL_65;
          }
          v72 = 1;
          goto LABEL_39;
        }
      }
    }
  }
  return 0LL;
}
