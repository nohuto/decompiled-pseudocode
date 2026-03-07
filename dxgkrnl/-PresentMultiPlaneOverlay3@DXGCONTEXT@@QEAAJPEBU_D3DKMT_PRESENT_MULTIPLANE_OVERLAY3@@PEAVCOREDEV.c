__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  DXGCONTEXT *v5; // r13
  unsigned int v6; // r12d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 VidPnSourceId; // r10
  __int64 v11; // r9
  __int64 PresentPlaneCount; // rcx
  int v13; // eax
  __int64 v14; // r14
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321 Value; // r8d
  unsigned int v16; // ebx
  DXGALLOCATIONREFERENCE *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // r15
  unsigned int v29; // ebx
  unsigned __int8 *v30; // rdi
  int *v31; // rsi
  char v32; // r14
  __int64 v33; // rbx
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  bool v38; // r15
  __int64 v39; // rbx
  LONG *v40; // rcx
  LONG v41; // r10d
  LONG v42; // edi
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v43; // r14
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // r9
  unsigned __int8 v45; // r11
  int v46; // r9d
  bool v47; // di
  UINT v48; // eax
  unsigned int v49; // r10d
  struct _LOOKASIDE_LIST_EX *v50; // rbx
  __int64 Alignment_low; // r8
  __int64 v52; // rsi
  DXGALLOCATIONREFERENCE *v53; // r9
  unsigned int v54; // r15d
  struct _EX_RUNDOWN_REF **v55; // r14
  __int64 v56; // rsi
  unsigned int v57; // ebx
  unsigned int v58; // eax
  __int64 v59; // rdx
  int v60; // ecx
  struct _EX_RUNDOWN_REF *v61; // rdx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v63; // r8
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v71; // rdi
  struct DXGPROCESS *v72; // rbx
  char *v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // r8
  KIRQL CurrentIrql; // al
  struct _DXGKARG_PRESENT *v77; // r15
  struct DXGTHREAD *v78; // rbx
  int v79; // r14d
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r15
  _QWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  PALLOCATE_FUNCTION_EX AllocateEx; // rbx
  int v90; // r14d
  int v91; // ecx
  int v92; // r15d
  int v93; // r9d
  int v94; // ecx
  int v95; // edx
  int v96; // r8d
  int v97; // eax
  unsigned int v98; // r11d
  char v99; // r10
  __int64 v100; // r9
  int *v101; // rdx
  int v102; // r8d
  int v103; // edx
  int Next_high; // r9d
  unsigned int *v105; // rbx
  D3DDDI_HDR_METADATA_TYPE HDRMetaDataType; // esi
  __int64 v107; // r8
  unsigned int v108; // edi
  unsigned int v109; // r14d
  unsigned int v110; // r15d
  unsigned int v111; // r12d
  __int64 v112; // rax
  _DWORD *v113; // rdx
  __int64 v114; // rcx
  D3DDDI_FLIPINTERVAL_TYPE v115; // ebx
  int v116; // ecx
  __int16 v117; // ax
  __int64 v118; // rdi
  struct _LOOKASIDE_LIST_EX *v119; // rsi
  _QWORD *v120; // rbx
  __int64 v121; // rax
  int v122; // edx
  unsigned int v123; // eax
  __int64 v124; // rax
  int v125; // r8d
  int v126; // edx
  int v127; // ecx
  int v128; // edx
  unsigned int v129; // eax
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  int v133; // eax
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  int v137; // ecx
  int v138; // ecx
  int v139; // edx
  UINT Duration; // eax
  int hAdapter; // eax
  unsigned int v142; // r9d
  int v143; // r8d
  __int64 v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // rcx
  int v147; // eax
  bool v148; // si
  __int64 v149; // rdi
  int v150; // esi
  __int64 v151; // rsi
  __int64 v152; // rdi
  __int64 v153; // rcx
  unsigned int v154; // ecx
  __int64 v155; // rdi
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rax
  DXGALLOCATIONREFERENCE *v159; // r15
  __int64 v160; // rax
  __int64 v161; // rdi
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // rax
  unsigned int v165; // ecx
  __int64 v166; // rsi
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v167; // rdi
  int v168; // r14d
  DXGALLOCATIONREFERENCE *v169; // rbx
  D3DKMT_MULTIPLANE_OVERLAY3 *v170; // rdx
  __int64 LayerIndex; // r10
  __int64 v172; // rdi
  unsigned int *p_Flags; // rax
  const struct DXGALLOCATION *v174; // rdx
  const struct tagRECT *v175; // r8
  unsigned int v176; // r9d
  const struct tagRECT *v177; // r15
  unsigned int v178; // r11d
  const struct tagRECT *v179; // r12
  __int64 v180; // rdi
  __int64 v181; // rdi
  unsigned int v182; // ecx
  enum D3DDDI_COLOR_SPACE_TYPE v183; // eax
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v184; // r8
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdi
  __int64 v188; // r14
  __int64 v189; // rsi
  __int64 v190; // r15
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // rcx
  char v194; // r15
  int v195; // eax
  unsigned int v196; // r14d
  __int64 v197; // rsi
  __int64 v198; // rdi
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rcx
  char v202; // al
  __int64 v203; // rdi
  __int64 v204; // rcx
  int v205; // eax
  unsigned int v206; // ebx
  __int64 v208; // rdx
  DXGALLOCATIONREFERENCE *v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rdx
  const wchar_t *v212; // r9
  int v213; // r9d
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  __int64 v215; // r14
  D3DKMT_MULTIPLANE_OVERLAY3 *v216; // rsi
  D3DKMT_HANDLE v217; // ebx
  unsigned int v218; // eax
  __int64 v219; // rdx
  int v220; // ecx
  struct _EX_RUNDOWN_REF *v221; // rdx
  const wchar_t *v222; // r9
  __int64 v223; // rbx
  __int64 v224; // rcx
  int v225; // ecx
  __int64 v226; // rax
  bool v227; // cf
  unsigned __int64 v228; // rax
  __int64 v229; // rax
  struct _EX_RUNDOWN_REF *v230; // rdx
  int v231; // r9d
  __int64 v232; // rcx
  __int64 Rotation; // rax
  int left; // ecx
  LONG right; // edx
  LONG bottom; // eax
  __m128i SrcRect; // xmm0
  int v238; // ebx
  __int64 v239; // r9
  D3DKMT_MULTIPLANE_OVERLAY3 **v240; // rax
  const struct DXGALLOCATION *v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v247; // al
  _DWORD *v248; // rdx
  int v249; // edx
  int v250; // r9d
  int v251; // ecx
  int v252; // r8d
  int v253; // ecx
  PALLOCATE_FUNCTION_EX v254; // rax
  __int64 v255; // rdx
  __int64 v256; // r9
  __int64 v257; // rcx
  __int64 v258; // r8
  unsigned int v259; // ecx
  unsigned int v260; // ecx
  _OWORD *pHDRMetaData; // rax
  _QWORD *v262; // rax
  int v263; // eax
  char *v264; // rdx
  __int64 v265; // r8
  char *v266; // rdx
  int v267; // r9d
  __int64 v268; // rax
  enum _D3DDDIFORMAT v269; // ecx
  struct _POST_COMPOSITION_CONFIG *v270; // rcx
  unsigned __int8 v271; // dl
  int v272; // r9d
  int v273; // r9d
  __int64 v274; // rax
  _DWORD *v275; // rdi
  struct DXGPROCESS *v276; // rax
  __int64 v277; // rdx
  ADAPTER_DISPLAY *v278; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v280; // rax
  __int64 v281; // rcx
  __int64 *v282; // rax
  struct _DXGKARG_PRESENT *v283; // [rsp+20h] [rbp-130h]
  __int64 v284; // [rsp+30h] [rbp-120h]
  __int64 v285; // [rsp+38h] [rbp-118h]
  __int64 v286; // [rsp+40h] [rbp-110h]
  int v287; // [rsp+B0h] [rbp-A0h]
  enum D3DDDI_COLOR_SPACE_TYPE v288; // [rsp+D0h] [rbp-80h]
  enum D3DDDI_COLOR_SPACE_TYPE v289; // [rsp+D0h] [rbp-80h]
  unsigned int v290; // [rsp+D4h] [rbp-7Ch]
  unsigned int v291; // [rsp+D4h] [rbp-7Ch]
  char v292; // [rsp+D8h] [rbp-78h]
  unsigned __int8 v293; // [rsp+D9h] [rbp-77h]
  unsigned __int8 v294; // [rsp+DAh] [rbp-76h]
  char v295; // [rsp+DBh] [rbp-75h]
  char v296; // [rsp+DCh] [rbp-74h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v297; // [rsp+E0h] [rbp-70h]
  bool v298; // [rsp+E4h] [rbp-6Ch]
  bool v299; // [rsp+E5h] [rbp-6Bh]
  struct DXGALLOCATION *v300; // [rsp+E8h] [rbp-68h]
  int v301; // [rsp+E8h] [rbp-68h]
  int v302; // [rsp+E8h] [rbp-68h]
  struct DXGALLOCATION *v303; // [rsp+E8h] [rbp-68h]
  __int32 v304; // [rsp+F0h] [rbp-60h]
  UINT v305; // [rsp+F0h] [rbp-60h]
  int v306; // [rsp+F4h] [rbp-5Ch]
  unsigned int v307; // [rsp+F4h] [rbp-5Ch]
  int v308; // [rsp+F8h] [rbp-58h]
  LONG v309; // [rsp+FCh] [rbp-54h]
  int v310; // [rsp+FCh] [rbp-54h]
  enum _D3DDDI_ROTATION v311; // [rsp+100h] [rbp-50h]
  enum _D3DDDI_ROTATION v312; // [rsp+100h] [rbp-50h]
  PLOOKASIDE_LIST_EX Lookaside; // [rsp+108h] [rbp-48h]
  PLOOKASIDE_LIST_EX Lookasidea; // [rsp+108h] [rbp-48h]
  enum _D3DDDIFORMAT v315[2]; // [rsp+110h] [rbp-40h]
  enum _D3DDDIFORMAT v316[2]; // [rsp+110h] [rbp-40h]
  int v317; // [rsp+110h] [rbp-40h]
  unsigned int v318; // [rsp+110h] [rbp-40h]
  enum _D3DDDIFORMAT v319; // [rsp+110h] [rbp-40h]
  unsigned int v320; // [rsp+118h] [rbp-38h]
  int v321; // [rsp+11Ch] [rbp-34h]
  int v322; // [rsp+120h] [rbp-30h]
  int v323; // [rsp+120h] [rbp-30h]
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v324; // [rsp+124h] [rbp-2Ch]
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v325; // [rsp+124h] [rbp-2Ch]
  __int32 v326; // [rsp+128h] [rbp-28h]
  int v328; // [rsp+138h] [rbp-18h]
  __int64 v329; // [rsp+140h] [rbp-10h]
  DXGALLOCATIONREFERENCE *v331; // [rsp+148h] [rbp-8h]
  __int64 v332; // [rsp+150h] [rbp+0h]
  const struct tagRECT *v333; // [rsp+150h] [rbp+0h]
  __int64 v334; // [rsp+160h] [rbp+10h] BYREF
  char v335; // [rsp+168h] [rbp+18h]
  __int64 v336; // [rsp+170h] [rbp+20h] BYREF
  char v337; // [rsp+178h] [rbp+28h]
  unsigned int v338[2]; // [rsp+180h] [rbp+30h]
  __int64 v339; // [rsp+188h] [rbp+38h]
  char v340; // [rsp+190h] [rbp+40h]
  struct _EX_RUNDOWN_REF *v341; // [rsp+198h] [rbp+48h] BYREF
  int v342; // [rsp+1A0h] [rbp+50h] BYREF
  __int64 v343; // [rsp+1A8h] [rbp+58h]
  char v344; // [rsp+1B0h] [rbp+60h]
  _QWORD *v345; // [rsp+1B8h] [rbp+68h]
  struct DXGTHREAD *v346; // [rsp+1C0h] [rbp+70h] BYREF
  struct DXGTHREAD *v347; // [rsp+1C8h] [rbp+78h] BYREF
  struct _EX_RUNDOWN_REF *v348; // [rsp+1D0h] [rbp+80h] BYREF
  struct _EX_RUNDOWN_REF *v349; // [rsp+1D8h] [rbp+88h] BYREF
  struct _EX_RUNDOWN_REF *v350; // [rsp+1E0h] [rbp+90h] BYREF
  struct _EX_RUNDOWN_REF *v351; // [rsp+1E8h] [rbp+98h] BYREF
  __int128 v352; // [rsp+1F0h] [rbp+A0h] BYREF
  __int128 v353; // [rsp+200h] [rbp+B0h]
  __int128 v354; // [rsp+210h] [rbp+C0h]
  struct tagRECT v355; // [rsp+220h] [rbp+D0h] BYREF
  struct DXGCONTEXT **v356; // [rsp+230h] [rbp+E0h]
  struct tagRECT v357; // [rsp+238h] [rbp+E8h] BYREF
  __int128 v358; // [rsp+248h] [rbp+F8h] BYREF
  char v359[8]; // [rsp+258h] [rbp+108h] BYREF
  DXGPUSHLOCK *v360; // [rsp+260h] [rbp+110h]
  int v361; // [rsp+268h] [rbp+118h]
  __int128 v362; // [rsp+270h] [rbp+120h] BYREF
  __int128 v363; // [rsp+280h] [rbp+130h]
  DXGALLOCATIONREFERENCE *v364; // [rsp+2A8h] [rbp+158h]
  _BYTE v365[32]; // [rsp+2B0h] [rbp+160h] BYREF
  unsigned int v366; // [rsp+2D0h] [rbp+180h]
  char v367[8]; // [rsp+2D8h] [rbp+188h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E0h] [rbp+190h] BYREF
  struct _DXGKARG_PRESENT v369; // [rsp+310h] [rbp+1C0h] BYREF
  _D3DKMT_PRESENT v370; // [rsp+3C0h] [rbp+270h] BYREF
  enum _D3DDDIFORMAT v371[4]; // [rsp+9A0h] [rbp+850h] BYREF
  __int128 v372; // [rsp+9B0h] [rbp+860h]
  __int64 v373; // [rsp+9C0h] [rbp+870h]
  unsigned __int8 v374[16]; // [rsp+9C8h] [rbp+878h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = this;
  v6 = 0;
  v356 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 168)) )
  {
    WdLogSingleEntry1(1LL, 3155LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3155LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 16LL) )
  {
    WdLogSingleEntry1(1LL, 3156LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter() == GetRenderAdapter()",
      3156LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)v5 + 2);
  *((_BYTE *)v5 + 443) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v297 = a2->VidPnSourceId;
  v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 2760LL);
  PresentPlaneCount = a2->PresentPlaneCount;
  v320 = v11;
  if ( (unsigned int)PresentPlaneCount > (unsigned int)v11 )
  {
    WdLogSingleEntry3(3LL, PresentPlaneCount, v11, -1073741811LL);
    return 3221225485LL;
  }
  v13 = *(_DWORD *)(v9 + 4 * VidPnSourceId + 1240);
  v14 = (unsigned int)VidPnSourceId;
  *(_QWORD *)v338 = a2->VidPnSourceId;
  if ( (v13 & 0x200) == 0 )
  {
    v205 = DXGCONTEXT::CheckDevicePresentSettings(v5, 1, 0, VidPnSourceId);
    v206 = v205;
    if ( v205 >= 0 )
    {
      WdLogSingleEntry3(3LL, -1071775739LL, v5, v14);
      return 3223191557LL;
    }
    else
    {
      WdLogSingleEntry3(3LL, v205, v5, v14);
      return v206;
    }
  }
  Value = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 3) != 0 )
  {
    if ( (unsigned int)PresentPlaneCount > 1 )
    {
      LODWORD(v80) = -1073741811;
      WdLogSingleEntry2(2LL, v5, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkPresentMultiPlaneOverlay doesn't support Stereo on more than 1 plane. Context 0x%I64x, Returning 0x%I64x",
        (__int64)v5,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v80;
    }
    if ( (a2->Flags.Value & 3) == 3 )
    {
      WdLogSingleEntry1(2LL, 3219LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
        3219LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
    if ( (*(_BYTE *)&Value & 6) == 6 )
    {
      WdLogSingleEntry1(2LL, 3225LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
        3225LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
    ppPresentPlanes = a2->ppPresentPlanes;
    v215 = *(_QWORD *)(v9 + 40);
    v341 = 0LL;
    v216 = *ppPresentPlanes;
    v217 = *(*ppPresentPlanes)->pAllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v215 + 248));
    v218 = (v217 >> 6) & 0xFFFFFF;
    if ( v218 < *(_DWORD *)(v215 + 296) )
    {
      v219 = *(_QWORD *)(v215 + 280) + 16LL * v218;
      if ( ((v217 >> 25) & 0x60) == (*(_BYTE *)(v219 + 8) & 0x60) && (*(_DWORD *)(v219 + 8) & 0x2000) == 0 )
      {
        v220 = *(_DWORD *)(v219 + 8) & 0x1F;
        if ( v220 )
        {
          if ( v220 == 5 )
          {
            v221 = *(struct _EX_RUNDOWN_REF **)v219;
LABEL_364:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v350, v221);
            _InterlockedDecrement((volatile signed __int32 *)(v215 + 264));
            ExReleasePushLockSharedEx(v215 + 248, 0LL);
            KeLeaveCriticalRegion();
            DXGALLOCATIONREFERENCE::MoveAssign(&v341, &v350);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v350);
            LODWORD(v80) = -1073741811;
            if ( v341 )
            {
              if ( (*(_DWORD *)(v341[6].Count + 4) & 0x1000) != 0 )
              {
                v225 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL),
                                     a2->VidPnSourceId)
                       + 10);
                if ( (v225 & 0x10) != 0 )
                {
                  if ( (v225 & 0x20) != 0 || (*(_BYTE *)&a2->Flags.0 & 2) == 0 )
                  {
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v341);
                    v14 = *(_QWORD *)v338;
                    LODWORD(v11) = v320;
                    LODWORD(VidPnSourceId) = v338[0];
                    goto LABEL_9;
                  }
                  v223 = 3256LL;
                  WdLogSingleEntry1(2LL, 3256LL);
                  v222 = L"FlipStereoTemporaryMono flag is set but the current display mode does not support it. STATUS_GR"
                          "APHICS_PRESENT_MODE_CHANGED";
                }
                else
                {
                  v223 = 3250LL;
                  WdLogSingleEntry1(2LL, 3250LL);
                  v222 = L"Stereo flag is set but the current display mode does not support stereo. STATUS_GRAPHICS_PRESENT_MODE_CHANGED";
                }
                LODWORD(v80) = -1071775739;
              }
              else
              {
                v223 = 3243LL;
                WdLogSingleEntry1(2LL, 3243LL);
                v222 = L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_I"
                        "NVALID_PARAMETER";
              }
              v5 = 0LL;
              v224 = 0LL;
            }
            else
            {
              WdLogSingleEntry3(2LL, -1073741811LL, v5, *v216->pAllocationList);
              v222 = L"ret = 0x%I64x Context 0x%I64x: Invalid allocation handle for plane 0 specified: 0x%I64x";
              v223 = -1073741811LL;
              v224 = *v216->pAllocationList;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v222, v223, (__int64)v5, v224, 0LL, 0LL);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v341);
            return (unsigned int)v80;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v221 = 0LL;
    goto LABEL_364;
  }
LABEL_9:
  v364 = 0LL;
  v16 = a2->ContextCount * v11;
  v17 = 0LL;
  v366 = 0;
  if ( v16 <= 4 )
  {
    v17 = (DXGALLOCATIONREFERENCE *)v365;
    v364 = (DXGALLOCATIONREFERENCE *)v365;
    if ( !v16 )
    {
LABEL_14:
      v366 = v16;
      goto LABEL_15;
    }
    v18 = 0LL;
    v19 = v16;
    while ( 1 )
    {
      *(_QWORD *)((char *)v17 + v18) = 0LL;
      v18 += 8LL;
      if ( !--v19 )
        break;
      v17 = v364;
    }
LABEL_13:
    v17 = v364;
    goto LABEL_14;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v16 >= 8 )
  {
    v226 = 8LL * v16;
    if ( !is_mul_ok(v16, 8uLL) )
      v226 = -1LL;
    v227 = __CFADD__(v226, 8LL);
    v228 = v226 + 8;
    if ( v227 )
      v228 = -1LL;
    v229 = operator new[](v228, 0x4B677844u, 256LL);
    if ( v229 )
    {
      v17 = (DXGALLOCATIONREFERENCE *)(v229 + 8);
      *(_QWORD *)v229 = v16;
      `vector constructor iterator'(
        (char *)(v229 + 8),
        8LL,
        v16,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      LODWORD(v11) = v320;
      LODWORD(VidPnSourceId) = v297;
      v364 = v17;
      goto LABEL_14;
    }
    LODWORD(v11) = v320;
    LODWORD(VidPnSourceId) = v297;
    goto LABEL_13;
  }
LABEL_15:
  v20 = *((_QWORD *)v5 + 2);
  v21 = *(_QWORD *)(v20 + 1880);
  if ( v21 == *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
  {
    ADAPTER_DISPLAY::GetAllocationsForAllPlanes(*(ADAPTER_DISPLAY **)(v21 + 2920), VidPnSourceId, v17, v11);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v359, (struct _KTHREAD **)(v20 + 304), 0);
    DXGPUSHLOCK::AcquireExclusive(v360);
    v230 = *(struct _EX_RUNDOWN_REF **)(v20 + 8 * v14 + 1048);
    v361 = 2;
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v351, v230);
    DXGALLOCATIONREFERENCE::MoveAssign(v17, &v351);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v351);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v359);
  }
  v340 = 0;
  v22 = *((_QWORD *)v5 + 2);
  v345 = *(_QWORD **)v364;
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 1880) + 2920LL);
  v339 = v23 + 608;
  if ( v23 == -608 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v339 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v24 = v339;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v339 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v339 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v339 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v339 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v231 = *(_DWORD *)(v339 + 36);
        if ( v231 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, v231);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v339 + 16));
      ExAcquirePushLockExclusiveEx(v339 + 8, 0LL);
    }
    if ( *(_QWORD *)(v339 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v339 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v339 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v24 + 32) = 1;
  }
  v27 = *(_QWORD *)(v23 + 128);
  v340 = 1;
  v28 = 4000 * v14 + v27;
  v329 = 4000 * v14;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v28 + 8) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9527LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9527LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v29 = 0;
  v30 = v374;
  v31 = (int *)(v28 + 1144);
  do
  {
    v32 = 0;
    if ( v29 < *(_DWORD *)(v28 + 3760) )
    {
      if ( *v31 == -1 && v31[1] != -1 )
      {
        WdLogSingleEntry1(1LL, 9141LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
          9141LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v210 = *v31;
      if ( (_DWORD)v210 != -1 )
      {
        v211 = 80 * v210 + v28 + 168LL * v29 + 1152;
        if ( v211 )
        {
          if ( (*(_DWORD *)(v211 + 8) & 2) != 0 )
            v32 = 1;
        }
      }
    }
    *v30 = v32;
    ++v29;
    ++v30;
    v31 += 42;
  }
  while ( v29 < 0xA );
  if ( v340 )
  {
    v33 = v339;
    v340 = 0;
    if ( *(struct _KTHREAD **)(v339 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v339, 0LL, 0LL);
    if ( *(int *)(v339 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    v34 = (*(_DWORD *)(v339 + 32))-- == 1;
    if ( v34 )
    {
      *(_QWORD *)(v33 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v33 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v373 = 0LL;
  v35 = *((_QWORD *)v5 + 2);
  *(_OWORD *)v371 = 0LL;
  v372 = 0LL;
  v36 = *(_QWORD *)(v35 + 16);
  v37 = *(_QWORD *)(v36 + 16);
  v38 = *(_DWORD *)(v37 + 412) == 1297040209
     && *(int *)(v37 + 2820) <= 1300
     && (v232 = *(_QWORD *)(v37 + 216),
         v362 = 0LL,
         v363 = 0LL,
         DxgkGetAdapterMiracastInfo(v232, (__int64)&v362),
         (BYTE8(v363) & 4) != 0)
     || !*(_BYTE *)(*(_QWORD *)(v36 + 16) + 2756LL)
     || *(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 16LL);
  v298 = v38;
  v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL);
  if ( v297 >= *(_DWORD *)(v39 + 96) )
  {
    WdLogSingleEntry1(1LL, 5634LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      5634LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v40 = (LONG *)(*(_QWORD *)(v39 + 128) + v329 + 1008);
  if ( !v40 )
  {
    LODWORD(v80) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v5, *(_QWORD *)v338);
    v286 = 0LL;
    v212 = L"ret = 0x%I64x Context 0x%I64x Failed to obtain display mode, VidPnSourceId 0x%I64x";
    v285 = 0LL;
    v284 = *(_QWORD *)v338;
    goto LABEL_335;
  }
  v41 = *v40;
  v42 = v40[1];
  v43 = a2;
  v296 = 0;
  v304 = v42;
  v322 = 0;
  pPostComposition = a2->pPostComposition;
  v326 = 0;
  v309 = *v40;
  v308 = 0;
  v328 = 0;
  if ( pPostComposition )
  {
    Rotation = pPostComposition->Flags.Value;
    if ( (_DWORD)Rotation || (Rotation = pPostComposition->Rotation, (_DWORD)Rotation != 1) )
    {
      Alignment_low = Rotation;
LABEL_516:
      LODWORD(v80) = -1073741811;
      v255 = (__int64)v5;
      v256 = -1073741811LL;
LABEL_517:
      WdLogSingleEntry3(3LL, v255, Alignment_low, v256);
      goto LABEL_325;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
      || (left = pPostComposition->DstRect.left, right = pPostComposition->DstRect.right, left >= right)
      || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom)
      || left < 0
      || v41 < right
      || pPostComposition->DstRect.top < 0
      || v42 < bottom )
    {
      LODWORD(v80) = -1073741811;
      WdLogSingleEntry2(3LL, v5, -1073741811LL);
      goto LABEL_325;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 16LL) + 2866LL) || v38 )
    {
      LODWORD(v80) = -1073741811;
      WdLogSingleEntry2(3LL, -1073741811LL, v5);
      goto LABEL_325;
    }
    SrcRect = (__m128i)pPostComposition->SrcRect;
    v238 = _mm_cvtsi128_si32(SrcRect);
    v309 = *(_QWORD *)&pPostComposition->SrcRect.right;
    v322 = v238;
    if ( v238 || SrcRect.m128i_i32[2] != v41 || SrcRect.m128i_i32[1] || SrcRect.m128i_i32[3] != v42 )
    {
      v46 = 0;
      v304 = SrcRect.m128i_i32[3];
      v45 = 0;
      v293 = 0;
      v294 = 0;
      v292 = 0;
      v295 = 0;
      v296 = 1;
      v308 = SrcRect.m128i_i32[2] - v238;
      v328 = SrcRect.m128i_i32[3] - SrcRect.m128i_i32[1];
      v321 = -1;
      v288 = D3DDDI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      v326 = SrcRect.m128i_i32[1];
    }
    else
    {
      v45 = 0;
      v46 = 0;
      v293 = 0;
      v294 = 0;
      v292 = 0;
      v295 = 0;
      v321 = -1;
      v288 = D3DDDI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      v304 = SrcRect.m128i_i32[3];
      v326 = SrcRect.m128i_i32[1];
    }
    goto LABEL_50;
  }
  v45 = 0;
  v294 = 0;
  v293 = 0;
  v46 = 0;
  v292 = 0;
  v321 = -1;
  v288 = D3DDDI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v295 = 0;
  v296 = 0;
  v308 = 0;
  v328 = 0;
  if ( v38 )
  {
    v239 = a2->PresentPlaneCount;
    if ( (_DWORD)v239 == 1 )
    {
      v240 = a2->ppPresentPlanes;
      if ( !(*v240)->LayerIndex )
      {
        v296 = 0;
        v308 = 0;
        v328 = 0;
        if ( ((*v240)->InputFlags.Value & 1) != 0 )
        {
          v46 = 0;
          goto LABEL_50;
        }
      }
      LODWORD(v80) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v5, v239);
      v212 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and plane 0 is not enabled";
    }
    else
    {
      LODWORD(v80) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v5, v239);
      v212 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and 0x%I64x planes are specified";
    }
    v286 = 0LL;
    v285 = 0LL;
    v284 = a2->PresentPlaneCount;
    goto LABEL_335;
  }
LABEL_50:
  v324 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE;
  v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 16LL) + 2820LL) >= 3000;
  v48 = 0;
  v299 = v47;
  v290 = 0;
  if ( !a2->PresentPlaneCount )
    goto LABEL_518;
  while ( 1 )
  {
    v49 = v320;
    v50 = (struct _LOOKASIDE_LIST_EX *)v43->ppPresentPlanes[v48];
    Lookaside = v50;
    Alignment_low = LODWORD(v50->L.ListHead.Alignment);
    v311 = (int)Alignment_low;
    if ( (unsigned int)Alignment_low >= v320 )
      goto LABEL_516;
    _mm_lfence();
    if ( ((1 << Alignment_low) & v46) != 0 )
      goto LABEL_516;
    v52 = 8 * Alignment_low;
    v306 = (1 << Alignment_low) | v46;
    v332 = 8 * Alignment_low;
    if ( (HIDWORD(v50->L.SingleListHead.Next) & 1) != 0 )
    {
      v53 = v364;
      if ( *(_QWORD *)((char *)v364 + v52) || v374[Alignment_low] )
        v293 = v45 + 1;
      else
        ++v294;
      v54 = 0;
      if ( *(_DWORD *)&v50->L.Depth )
      {
        while ( 1 )
        {
          *(_QWORD *)v315 = 8LL * ((unsigned int)Alignment_low + v49 * v54);
          v55 = (struct _EX_RUNDOWN_REF **)((char *)v53 + *(_QWORD *)v315);
          v56 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 40LL);
          v300 = (struct DXGALLOCATION *)(4LL * v54);
          v57 = *(_DWORD *)((char *)v300 + *(_QWORD *)&v50->L.AllocateMisses);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v56 + 248));
          v58 = (v57 >> 6) & 0xFFFFFF;
          if ( v58 >= *(_DWORD *)(v56 + 296) )
            goto LABEL_336;
          v59 = *(_QWORD *)(v56 + 280) + 16LL * v58;
          if ( ((v57 >> 25) & 0x60) != (*(_BYTE *)(v59 + 8) & 0x60) )
            goto LABEL_336;
          if ( (*(_DWORD *)(v59 + 8) & 0x2000) != 0 )
            goto LABEL_336;
          v60 = *(_DWORD *)(v59 + 8) & 0x1F;
          if ( !v60 )
            goto LABEL_336;
          if ( v60 != 5 )
            break;
          v61 = *(struct _EX_RUNDOWN_REF **)v59;
LABEL_63:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v348, v61);
          _InterlockedDecrement((volatile signed __int32 *)(v56 + 264));
          ExReleasePushLockSharedEx(v56 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( *v55 )
            ExReleaseRundownProtection(*v55 + 11);
          *v55 = v348;
          v348 = 0LL;
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
          {
            v347 = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v347) >= 0 )
            {
              DxgThread = v347;
              if ( v347 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v347 = DxgThread) != 0LL) )
              {
                if ( *((_DWORD *)DxgThread + 12) )
                  WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
              }
            }
          }
          v53 = v364;
          v63 = *(_QWORD *)((char *)v364 + *(_QWORD *)v315);
          if ( !v63 )
          {
            LODWORD(v80) = -1073741811;
            Alignment_low = (__int64)v5;
            v255 = -1073741811LL;
            v256 = *(unsigned int *)((char *)v300 + *(_QWORD *)&Lookaside->L.AllocateMisses);
            goto LABEL_517;
          }
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 8) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL)
                                                                                         + 16LL) )
          {
            LODWORD(v80) = -1073741811;
            WdLogSingleEntry3(2LL, *((_QWORD *)v5 + 2), v63, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)v5 + 2),
              *(_QWORD *)((char *)v364 + *(_QWORD *)v315),
              -1073741811LL,
              0LL,
              0LL);
            goto LABEL_325;
          }
          v50 = Lookaside;
          ++v54;
          Alignment_low = (unsigned int)v311;
          v49 = v320;
          if ( v54 >= *(_DWORD *)&Lookaside->L.Depth )
          {
            v52 = v332;
            goto LABEL_74;
          }
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_336:
        v61 = 0LL;
        goto LABEL_63;
      }
LABEL_74:
      _mm_lfence();
      v34 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL) + 4LL) & 0x2000) == 0;
      _mm_lfence();
      if ( v34 )
      {
        v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL) + 4LL);
        _mm_lfence();
        if ( (v64 & 0xB) == 0 )
        {
          LODWORD(v80) = -1073741811;
          WdLogSingleEntry5(
            2LL,
            -1073741811LL,
            v5,
            *(_QWORD *)((char *)v364 + v52),
            *(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL),
            **(unsigned int **)&v50->L.AllocateMisses);
          v212 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
          v286 = **(unsigned int **)&v50->L.AllocateMisses;
          v285 = *(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL);
          v284 = *(_QWORD *)((char *)v364 + v52);
          goto LABEL_335;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL) + 4LL) & 1) != 0 )
          v321 = Alignment_low;
      }
      else
      {
        v241 = *(const struct DXGALLOCATION **)((char *)v364 + v52);
        if ( (*(_DWORD *)(*((_QWORD *)v241 + 6) + 4LL) & 0x20) == 0
          && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)v5 + 2), v241) )
        {
          _mm_lfence();
          WdLogSingleEntry5(
            4LL,
            -1071775739LL,
            v5,
            *(_QWORD *)((char *)v364 + v52),
            *(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL),
            **(unsigned int **)&v50->L.AllocateMisses);
          LODWORD(v80) = -1071775720;
          goto LABEL_325;
        }
      }
      _mm_lfence();
      v352 = 0LL;
      v342 = -1;
      v353 = 0LL;
      v343 = 0LL;
      v354 = 0LL;
      v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL) + 16LL);
      v66 = *((_QWORD *)v5 + 2);
      *(_QWORD *)&v352 = v65;
      v67 = *(_QWORD *)(v66 + 16);
      *(_QWORD *)v316 = v67;
      if ( (qword_1C013A870 & 2) != 0 )
      {
        v344 = 1;
        v342 = 5003;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerEnter, Alignment_low, 5003);
      }
      else
      {
        v344 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v342, 5003);
      v68 = v352;
      if ( !(_QWORD)v352 )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v342);
        if ( v344 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v257, &EventProfilerExit, v258, v342);
        LODWORD(v80) = -1073741811;
        goto LABEL_514;
      }
      if ( *(_BYTE *)(*(_QWORD *)(v67 + 16) + 209LL) )
      {
        v352 = *(_OWORD *)(v352 + 64);
        v353 = *(_OWORD *)(v68 + 80);
        v354 = *(_OWORD *)(v68 + 96);
        HIDWORD(v354) = -1;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v342);
        if ( v344 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v242, &EventProfilerExit, v243, v342);
        goto LABEL_108;
      }
      CurrentProcess = PsGetCurrentProcess(v352);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v71 = (struct DXGPROCESS *)ProcessDxgProcess;
      if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
      {
        Current = DXGTHREAD::GetCurrent();
        if ( Current )
        {
          v72 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
          if ( v72 )
            goto LABEL_85;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          v72 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
          if ( v72 )
            goto LABEL_85;
          WdLogSingleEntry1(2LL, 2923LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find DXGPROCESS",
            2923LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v72 = v71;
      if ( !v71 )
      {
        v73 = 0LL;
        v301 = 0;
        goto LABEL_91;
      }
LABEL_85:
      v73 = (char *)v72 + 152;
      v301 = 0;
      if ( v72 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v72 + 20) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1453LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1453LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v72 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v72 + 152, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v213 = *((_DWORD *)v72 + 44);
            if ( v213 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v74, (const EVENT_DESCRIPTOR *)"g", v75, v213);
          }
          ExAcquirePushLockExclusiveEx((char *)v72 + 152, 0LL);
        }
        *((_QWORD *)v72 + 20) = KeGetCurrentThread();
        v301 = 2;
      }
LABEL_91:
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v67 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v67 + 16) + 4612LL));
      CurrentIrql = KeGetCurrentIrql();
      v77 = (struct _DXGKARG_PRESENT *)CurrentIrql;
      v78 = 0LL;
      if ( CurrentIrql < 2u
        && (v346 = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &v346) >= 0)
        && ((v78 = v346) != 0LL || (v346 = DxgkThreadObjectCreateDxgThread(1), (v78 = v346) != 0LL)) )
      {
        v79 = *((_DWORD *)v78 + 12);
      }
      else
      {
        v79 = 0;
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v367,
        *(struct DXGADAPTER **)(*(_QWORD *)v316 + 16LL));
      v80 = (*(int (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(*(_QWORD *)v316 + 16LL) + 480LL))(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v316 + 16LL) + 280LL),
              &v352);
      if ( v367[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v77 == KeGetCurrentIrql() )
      {
        v85 = *(_QWORD *)v316;
      }
      else
      {
        v247 = KeGetCurrentIrql();
        v283 = v77;
        v85 = *(_QWORD *)v316;
        WdLogSingleEntry5(0LL, 275LL, 16LL, *(_QWORD *)v316, v283, v247);
      }
      if ( v78 )
      {
        v82 = *((int *)v78 + 12);
        if ( (_DWORD)v82 != v79 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v78 + 12), v79, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v85 + 16) + 4612LL));
      v86 = (_QWORD *)WdLogNewEntry5_WdTrace(v82, v81, v83, v84);
      v86[3] = v80;
      v86[4] = v352;
      v86[5] = DWORD2(v352);
      v86[6] = HIDWORD(v352);
      v86[7] = (int)v353;
      if ( (_DWORD)v80 )
      {
        WdLogSingleEntry1(2LL, v80);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v80,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v85 + 16));
      if ( v301 == 2 )
      {
        *((_QWORD *)v73 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v73, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v342);
      if ( v344 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v87, &EventProfilerExit, v88, v342);
      if ( (int)v80 < 0 )
      {
        v52 = v332;
LABEL_514:
        _mm_lfence();
        WdLogSingleEntry4(
          2LL,
          (int)v80,
          v5,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL) + 16LL),
          *(_QWORD *)((char *)v364 + v52));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
          (int)v80,
          (__int64)v5,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v52) + 48LL) + 16LL),
          *(_QWORD *)((char *)v364 + v52),
          0LL);
        goto LABEL_325;
      }
LABEL_108:
      v371[v311] = v353;
      AllocateEx = Lookaside->L.AllocateEx;
      v90 = *((_DWORD *)AllocateEx + 1);
      v91 = *((_DWORD *)AllocateEx + 3);
      if ( v90 >= v91 || *((_DWORD *)AllocateEx + 2) >= *((_DWORD *)AllocateEx + 4) )
      {
LABEL_508:
        LODWORD(v80) = -1073741811;
        WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
        v286 = 0LL;
        v212 = L"ret = 0x%I64x Context 0x%I64x Source rect is invalid, index 0x%I64x";
        v285 = 0LL;
        v284 = v290;
      }
      else
      {
        v92 = HIDWORD(v352);
        v302 = DWORD2(v352);
        if ( v90 < 0
          || SDWORD2(v352) < v91
          || *((int *)AllocateEx + 2) < 0
          || SHIDWORD(v352) < *((_DWORD *)AllocateEx + 4) )
        {
LABEL_507:
          LODWORD(v80) = -1073741811;
          WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
          v286 = 0LL;
          v212 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
          v285 = 0LL;
          v284 = v290;
        }
        else
        {
          v93 = *((_DWORD *)AllocateEx + 9);
          v94 = *((_DWORD *)AllocateEx + 11);
          v317 = v93;
          if ( v93 >= v94 || *((_DWORD *)AllocateEx + 10) >= *((_DWORD *)AllocateEx + 12) )
          {
            LODWORD(v80) = -1073741811;
            WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
            v286 = 0LL;
            v212 = L"ret = 0x%I64x Context 0x%I64x Clip rect is invalid, index 0x%I64x";
            v285 = 0LL;
            v284 = v290;
          }
          else
          {
            v95 = *((_DWORD *)AllocateEx + 5);
            v96 = *((_DWORD *)AllocateEx + 7);
            if ( v95 >= v96 || *((_DWORD *)AllocateEx + 6) >= *((_DWORD *)AllocateEx + 8) )
            {
              LODWORD(v80) = -1073741811;
              WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
              v286 = 0LL;
              v212 = L"ret = 0x%I64x Context 0x%I64x Destination rect is invalid, index 0x%I64x";
              v285 = 0LL;
              v284 = v290;
            }
            else if ( v322 > v93
                   || v309 < v94
                   || v326 > *((_DWORD *)AllocateEx + 10)
                   || v304 < *((_DWORD *)AllocateEx + 12)
                   || v95 > v93
                   || v96 < v94
                   || *((_DWORD *)AllocateEx + 6) > *((_DWORD *)AllocateEx + 10)
                   || *((_DWORD *)AllocateEx + 8) < *((_DWORD *)AllocateEx + 12) )
            {
              LODWORD(v80) = -1073741811;
              WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
              v286 = 0LL;
              v212 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
              v285 = 0LL;
              v284 = v290;
            }
            else
            {
              v97 = *((_DWORD *)AllocateEx + 13);
              if ( v97 != 1 )
              {
                if ( v97 )
                {
                  if ( v97 != 2 && (unsigned int)(v97 - 3) >= 2 )
                  {
                    LODWORD(v80) = -1073741811;
                    WdLogSingleEntry4(2LL, -1073741811LL, v5, v290, *((int *)AllocateEx + 13));
                    v212 = L"ret = 0x%I64x Context 0x%I64x rotation is not valid, index 0x%I64x, rotation 0xI64x";
                    v286 = 0LL;
                    v285 = *((int *)Lookaside->L.AllocateEx + 13);
                    v284 = v290;
                    goto LABEL_335;
                  }
                }
                else
                {
                  *((_DWORD *)AllocateEx + 13) = 1;
                }
              }
              v98 = *((_DWORD *)AllocateEx + 15);
              v99 = 1;
              v100 = 0LL;
              if ( v98 )
              {
                while ( v99 )
                {
                  v101 = (int *)(*((_QWORD *)AllocateEx + 8) + 16LL * (unsigned int)v100);
                  v102 = v101[2];
                  if ( *v101 >= v102 || v101[1] >= v101[3] )
                    v99 = 0;
                  if ( v90 > *v101
                    || *((_DWORD *)AllocateEx + 3) < v102
                    || *((_DWORD *)AllocateEx + 2) > v101[1]
                    || *((_DWORD *)AllocateEx + 4) < v101[3] )
                  {
                    v99 = 0;
                  }
                  v100 = (unsigned int)(v100 + 1);
                  if ( (unsigned int)v100 >= v98 )
                  {
                    if ( v99 )
                      goto LABEL_137;
                    break;
                  }
                }
                *((_DWORD *)AllocateEx + 15) = 0;
              }
LABEL_137:
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2834LL) )
              {
                v248 = Lookaside->L.AllocateEx;
                if ( v248[5] != v248[9] || v248[7] != v248[11] || v248[6] != v248[10] || v248[8] != v248[12] )
                {
                  v358 = 0LL;
                  InverseXformMPORect3(&v358, v248, v248 + 9, v100);
                  *(_OWORD *)((char *)AllocateEx + 4) = v358;
                  *(_OWORD *)((char *)AllocateEx + 20) = *(_OWORD *)((char *)Lookaside->L.AllocateEx + 36);
                  v249 = *((_DWORD *)AllocateEx + 1);
                  v250 = *((_DWORD *)AllocateEx + 3);
                  if ( v249 >= v250 || *((_DWORD *)AllocateEx + 2) >= *((_DWORD *)AllocateEx + 4) )
                    goto LABEL_508;
                  v251 = *((_DWORD *)AllocateEx + 5);
                  v252 = *((_DWORD *)AllocateEx + 7);
                  if ( v251 >= v252 || *((_DWORD *)AllocateEx + 6) >= *((_DWORD *)AllocateEx + 8) )
                  {
                    LODWORD(v80) = -1073741811;
                    WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
                    v286 = 0LL;
                    v212 = L"ret = 0x%I64x Context 0x%I64x Dest rect is invalid, index 0x%I64x";
                    v285 = 0LL;
                    v284 = v290;
                    goto LABEL_335;
                  }
                  if ( v249 < 0 || v302 < v250 || *((int *)AllocateEx + 2) < 0 || v92 < *((_DWORD *)AllocateEx + 4) )
                    goto LABEL_507;
                  if ( v322 > v251
                    || v309 < v252
                    || v326 > *((_DWORD *)AllocateEx + 6)
                    || v304 < *((_DWORD *)AllocateEx + 8) )
                  {
                    LODWORD(v80) = -1073741811;
                    WdLogSingleEntry3(2LL, -1073741811LL, v5, v290);
                    v286 = 0LL;
                    v212 = L"ret = 0x%I64x Context 0x%I64x Dest rect is outside of screen rect, index 0x%I64x";
                    v285 = 0LL;
                    v284 = v290;
                    goto LABEL_335;
                  }
                }
              }
              if ( !v311 )
              {
                if ( v345 )
                {
                  if ( (v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v364 + 48LL) + 4LL) & 0x2000) != 0
                    && (*(_DWORD *)(v345[6] + 4LL) & 0x2000) == 0
                    || !v103 && (*(_DWORD *)(v345[6] + 4LL) & 0x2000) != 0 )
                  {
                    v295 = 1;
                  }
                }
                if ( (*((_DWORD *)AllocateEx + 7) - *((_DWORD *)AllocateEx + 5) != *((_DWORD *)AllocateEx + 3)
                                                                                 - *((_DWORD *)AllocateEx + 1)
                   || *((_DWORD *)AllocateEx + 8) - *((_DWORD *)AllocateEx + 6) != *((_DWORD *)AllocateEx + 4)
                                                                                 - *((_DWORD *)AllocateEx + 2))
                  && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2786LL) )
                {
                  v328 = *((_DWORD *)AllocateEx + 4) - *((_DWORD *)AllocateEx + 2);
                  v296 = 1;
                  v308 = *((_DWORD *)AllocateEx + 3) - *((_DWORD *)AllocateEx + 1);
                }
              }
              if ( !v298 )
              {
                v50 = Lookaside;
LABEL_147:
                v43 = a2;
                v47 = v299;
                goto LABEL_148;
              }
              v253 = *((_DWORD *)AllocateEx + 5);
              if ( v253 == *((_DWORD *)AllocateEx + 1)
                && *((_DWORD *)AllocateEx + 7) == *((_DWORD *)AllocateEx + 3)
                && *((_DWORD *)AllocateEx + 6) == *((_DWORD *)AllocateEx + 2)
                && *((_DWORD *)AllocateEx + 8) == *((_DWORD *)AllocateEx + 4)
                && v253 == v317
                && *((_DWORD *)AllocateEx + 7) == *((_DWORD *)AllocateEx + 11)
                && *((_DWORD *)AllocateEx + 6) == *((_DWORD *)AllocateEx + 10)
                && *((_DWORD *)AllocateEx + 8) == *((_DWORD *)AllocateEx + 12) )
              {
                v50 = Lookaside;
                v254 = Lookaside->L.AllocateEx;
                if ( *((_DWORD *)v254 + 13) == 1 )
                {
                  _mm_lfence();
                  if ( v297 != ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v332) + 48LL) + 4LL) >> 6) & 0xF) )
                  {
                    _mm_lfence();
                    LODWORD(v80) = -1073741811;
                    WdLogSingleEntry4(
                      2LL,
                      -1073741811LL,
                      v5,
                      *(_QWORD *)v338,
                      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v332) + 48LL) + 4LL) >> 6) & 0xF);
                    v212 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and VidPnSour"
                            "ceId (0x%I64x) doesn't match the surface VidPnSOurceId (0x%I64x)";
                    v286 = 0LL;
                    v285 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v364 + v332) + 48LL) + 4LL) >> 6) & 0xF;
                    v284 = *(_QWORD *)v338;
                    goto LABEL_335;
                  }
                  goto LABEL_147;
                }
                LODWORD(v80) = -1073741811;
                WdLogSingleEntry3(2LL, -1073741811LL, v5, *((unsigned int *)v254 + 13));
                v212 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and rotation 0x%I"
                        "64x is specified";
                v286 = 0LL;
                v285 = 0LL;
                v284 = *((unsigned int *)Lookaside->L.AllocateEx + 13);
              }
              else
              {
                LODWORD(v80) = -1073741811;
                WdLogSingleEntry2(2LL, -1073741811LL, v5);
                v286 = 0LL;
                v212 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and Source/Dest/C"
                        "lip rects are not identical";
                v285 = 0LL;
                v284 = 0LL;
              }
            }
          }
        }
      }
LABEL_335:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v212, -1073741811LL, (__int64)v5, v284, v285, v286);
      goto LABEL_325;
    }
    if ( *(_QWORD *)((char *)v364 + v52) || v374[Alignment_low] )
      ++v292;
    v349 = 0LL;
    DXGALLOCATIONREFERENCE::MoveAssign((char *)v364 + v52, &v349);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
LABEL_148:
    if ( (HIDWORD(v50->L.SingleListHead.Next) & 1) != 0
      || (LOBYTE(Next_high) = HIDWORD(v50->L.SingleListHead.Next), v47) )
    {
      Alignment_low = *((int *)&v50->L.SingleListHead + 2);
      LOBYTE(Next_high) = HIDWORD(v50->L.SingleListHead.Next);
      if ( (_DWORD)Alignment_low )
      {
        if ( (_DWORD)Alignment_low != 1 )
          goto LABEL_516;
        v324 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND;
      }
    }
    if ( bTracingEnabled )
    {
      v105 = (unsigned int *)v50->L.AllocateEx;
      HDRMetaDataType = v43->HDRMetaDataType;
      v107 = *v105;
      v108 = v105[20];
      v109 = v105[18];
      v110 = v105[14];
      v111 = v105[13];
      v318 = *v105;
      if ( **(_DWORD **)&Lookaside->L.AllocateMisses )
      {
        v112 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL)
                                                                         + 760LL)
                                                             + 8LL)
                                                 + 336LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 768LL));
        v113 = Lookaside;
        v114 = v112;
        v107 = v318;
        Next_high = HIDWORD(Lookaside->L.SingleListHead.Next);
      }
      else
      {
        v113 = Lookaside;
        v114 = 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer(
          v114,
          (__int64)v113,
          v107,
          v297,
          *v113,
          Next_high & 1,
          v114,
          v107,
          v105[1],
          v105[3],
          v105[2],
          v105[4],
          v105[5],
          v105[7],
          v105[6],
          v105[8],
          v105[9],
          v105[11],
          v105[10],
          v105[12],
          v111,
          v110,
          v287,
          v109,
          HDRMetaDataType,
          v108);
      v43 = a2;
      v6 = 0;
    }
    v48 = v290 + 1;
    v290 = v48;
    if ( v48 >= v43->PresentPlaneCount )
      break;
    v46 = v306;
    v47 = v299;
    v45 = v293;
  }
  v38 = v298;
  if ( v324 )
    goto LABEL_160;
LABEL_518:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 16LL) + 2866LL) )
  {
    v115 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
    v288 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  }
  else
  {
    WdLogSingleEntry1(3LL, 3787LL);
LABEL_160:
    v115 = D3DDDI_FLIPINTERVAL_ONE;
  }
  if ( !v293 && !v294 && !v292 )
  {
    WdLogSingleEntry2(4LL, 0LL, v5);
    LODWORD(v80) = 0;
    goto LABEL_325;
  }
  memset(&v369, 0, sizeof(v369));
  v116 = 4;
  if ( !v38 )
    v116 = 4100;
  v117 = v116 ^ ((unsigned __int16)*(_DWORD *)&v43->Flags.0 << 8);
  v369.FlipInterval = v115;
  v369.Flags.Value = v116 ^ v117 & 0x700 | 8;
  v118 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL);
  v119 = (struct _LOOKASIDE_LIST_EX *)(v118 + 1424);
  Lookasidea = (PLOOKASIDE_LIST_EX)(v118 + 1424);
  v345 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v118 + 1424));
  v120 = v345;
  if ( !v345 )
  {
    WdLogSingleEntry1(6LL, 3823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      3823LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v150 = -1073741801;
    goto LABEL_628;
  }
  v121 = *(_QWORD *)(v118 + 16);
  if ( *(int *)(v121 + 2552) >= 0x2000 )
  {
    v122 = *(_DWORD *)(v121 + 288);
    goto LABEL_167;
  }
  v122 = 1;
  if ( *(_BYTE *)(v121 + 2852) )
LABEL_167:
    v123 = *(_DWORD *)(v121 + 2760) * ((v122 << 6) + ((8 * v122 + 231) & 0xFFFFFFF8)) + 8 * (v122 + 77);
  else
    v123 = 1304;
  memset(v345, 0, v123);
  v124 = *(_QWORD *)(v118 + 16);
  v125 = *(_DWORD *)(v124 + 2760);
  if ( *(int *)(v124 + 2552) >= 0x2000 )
  {
    v126 = *(_DWORD *)(v124 + 288);
    goto LABEL_170;
  }
  v126 = 1;
  if ( *(_BYTE *)(v124 + 2852) )
  {
LABEL_170:
    v127 = 8 * v126;
    *((_BYTE *)v120 + 356) = 1;
    *((_DWORD *)v120 + 152) = v126;
    v128 = v126 << 6;
    *((_DWORD *)v120 + 151) = v125;
    *((_DWORD *)v120 + 153) = v125 * (v128 + ((v127 + 231) & 0xFFFFFFF8)) + 16;
    v129 = v125 * (v128 + ((v127 + 231) & 0xFFFFFFF8)) + 616;
    *((_DWORD *)v120 + 138) = v129;
    *((_DWORD *)v120 + 139) = v127 + v129;
  }
  else
  {
    *((_BYTE *)v120 + 356) = 0;
  }
  v130 = *(_DWORD *)v120 | 0x30020;
  *(_DWORD *)v120 = v130;
  v131 = v130 | 1;
  *((_DWORD *)v120 + 28) = v43->PresentCount;
  if ( v295 )
    v131 |= 0x400000u;
  v132 = v131 | 4;
  *(_DWORD *)v120 = v132;
  v133 = v132;
  if ( !v38 && v43->ContextCount <= 1 )
  {
    v133 = v132 | 0x800000;
    *(_DWORD *)v120 = v132 | 0x800000;
  }
  v134 = v133 ^ ((unsigned __int8)v133 ^ (unsigned __int8)(v43->Flags.Value >> 1)) & 8;
  *(_DWORD *)v120 = v134;
  v135 = ((unsigned __int8)v134 ^ (unsigned __int8)(v43->Flags.Value >> 1)) & 0x10 ^ v134;
  *(_DWORD *)v120 = v135;
  v136 = (v135 ^ (v43->Flags.Value << 19)) & 0x80000 ^ v135;
  *(_DWORD *)v120 = v136;
  v137 = (v136 ^ (v43->Flags.Value << 19)) & 0x100000 ^ v136;
  *(_DWORD *)v120 = v137;
  v138 = (v137 ^ (v43->Flags.Value << 19)) & 0x200000 ^ v137;
  *(_DWORD *)v120 = v138;
  v139 = v138 ^ (v138 ^ (v43->Flags.Value << 21)) & 0x20000000;
  *(_DWORD *)v120 = v139;
  if ( (v43->Flags.Value & 0x40) != 0 )
    Duration = v43->Duration;
  else
    Duration = 0;
  *((_DWORD *)v120 + 36) = Duration;
  if ( (v43->Flags.Value & 0x40) != 0 )
    hAdapter = v43[1].hAdapter;
  else
    hAdapter = 1;
  v142 = v297;
  v143 = v139;
  *((_DWORD *)v120 + 29) = v297;
  *((_DWORD *)v120 + 31) = v288;
  *((_DWORD *)v120 + 38) = hAdapter;
  *((_DWORD *)v120 + 30) = 5;
  if ( (v43->Flags.Value & 0x200) != 0 && v288 == D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    v143 = v139 | 0x10000000;
    *(_DWORD *)v120 = v139 | 0x10000000;
  }
  v144 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL);
  if ( (*(_DWORD *)(v144 + 24) & 0x10) != 0 )
  {
    if ( v297 >= *(_DWORD *)(v144 + 96) )
    {
      WdLogSingleEntry1(1LL, 5914LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        5914LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v142 = v297;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v144 + 128) + v329 + 764) )
    {
      *(_DWORD *)v120 |= 0x40000000u;
      *((_DWORD *)v120 + 90) = 0;
      goto LABEL_186;
    }
    v143 = *(_DWORD *)v120 ^ (*(_DWORD *)v120 ^ (v43->Flags.Value << 23)) & 0x40000000;
    *(_DWORD *)v120 = v143;
    *((_DWORD *)v120 + 90) = v43->HDRMetaDataType;
    v259 = v43->HDRMetaDataType;
    if ( (v143 & 0x40000000) != 0 )
    {
      if ( v259 )
      {
        v260 = v259 - 1;
        if ( v260 )
        {
          if ( v260 == 1 )
          {
            pHDRMetaData = v43->pHDRMetaData;
            *(_OWORD *)((char *)v120 + 364) = *pHDRMetaData;
            *(_OWORD *)((char *)v120 + 380) = pHDRMetaData[1];
            *(_OWORD *)((char *)v120 + 396) = pHDRMetaData[2];
            *(_OWORD *)((char *)v120 + 412) = pHDRMetaData[3];
            *(_QWORD *)((char *)v120 + 428) = *((_QWORD *)pHDRMetaData + 8);
          }
          else
          {
            WdLogSingleEntry1(1LL, 3899LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 3899LL, 0LL, 0LL, 0LL, 0LL);
            *(_DWORD *)v120 &= ~0x40000000u;
            v142 = v297;
LABEL_186:
            v143 = *(_DWORD *)v120;
          }
        }
        else
        {
          v262 = v43->pHDRMetaData;
          *(_OWORD *)((char *)v120 + 364) = *(_OWORD *)v262;
          *(_QWORD *)((char *)v120 + 380) = v262[2];
          *((_DWORD *)v120 + 97) = *((_DWORD *)v262 + 6);
        }
      }
    }
    else
    {
      if ( v259 > 2 )
      {
        WdLogSingleEntry1(1LL, 3909LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pArgs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10PLUS == pAr"
                    "gs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pArgs->HDRMetaDataType",
          3909LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v142 = v297;
      }
      if ( v43->pHDRMetaData || v43->HDRMetaDataSize )
      {
        WdLogSingleEntry1(1LL, 3912LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NULL == pArgs->pHDRMetaData && NULL == pArgs->HDRMetaDataSize",
          3912LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v142 = v297;
      }
      v143 = *(_DWORD *)v120 | 0x40000000;
      *(_DWORD *)v120 = v143;
      if ( v43->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        *((_DWORD *)v120 + 90) = 134217729;
      }
      else if ( v43->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        *((_DWORD *)v120 + 90) = -2147483646;
      }
    }
  }
  if ( v43->pPostComposition )
  {
    *(_DWORD *)v120 = v143 | 0x80000000;
    *(RECT *)((char *)v120 + 436) = v43->pPostComposition->SrcRect;
    *(RECT *)((char *)v120 + 452) = v43->pPostComposition->DstRect;
  }
  v145 = *((_QWORD *)v5 + 2);
  v146 = *(_QWORD *)(v145 + 1880);
  if ( v146 != *(_QWORD *)(*(_QWORD *)(v145 + 16) + 16LL) )
  {
    if ( !v146 )
    {
      WdLogSingleEntry2(1LL, v145, -1073741822LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
        *((_QWORD *)v5 + 2),
        -1073741822LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v80) = -1073741811;
      goto LABEL_323;
    }
    v282 = (__int64 *)v43->ppPresentPlanes;
    v80 = *v282;
    if ( *(_DWORD *)*v282 )
    {
      WdLogSingleEntry1(1LL, 4063LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPlane0->LayerIndex == 0", 4063LL, 0LL, 0LL, 0LL, 0LL);
    }
    memset(&v370, 0, sizeof(v370));
    ConvertMPOThunkToLegacyPresentThunk(&v370, v43, (const struct _D3DKMT_MULTIPLANE_OVERLAY3 *)v80);
    LODWORD(v80) = DXGCONTEXT::DisplayOnlyPresent(v5, &v370, *(struct DXGALLOCATION **)v364, v297, &v369, a3);
    UpdatePostComposition(
      v297,
      0,
      0,
      0,
      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL));
    goto LABEL_313;
  }
  v147 = *(_DWORD *)(v145 + 4LL * *(_QWORD *)v338 + 1816);
  if ( *((_DWORD *)v120 + 30) != v147 && v147 )
  {
    if ( (v43->Flags.Value & 8) != 0 )
    {
      v150 = -1071775739;
      WdLogSingleEntry1(4LL, -1071775739LL);
      goto LABEL_628;
    }
    WdLogSingleEntry1(4LL, v145);
    COREDEVICEACCESS::Release(a3);
    DXGDEVICE::FlushScheduler(*((_QWORD *)v5 + 2), 3LL, v338[0]);
    v263 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
    v150 = v263;
    if ( v263 < 0 )
    {
      WdLogSingleEntry1(4LL, v263);
      COREDEVICEACCESS::AcquireSharedUncheck(a3, v264);
      goto LABEL_628;
    }
    v142 = v338[0];
  }
  v148 = (v43->Flags.Value & 8) == 0;
  if ( *((_BYTE *)v5 + 442) )
  {
LABEL_195:
    v151 = *((_QWORD *)v5 + 2);
    v152 = *(_QWORD *)(*(_QWORD *)(v151 + 1880) + 2920LL);
    v153 = *(_QWORD *)(v152 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v153 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v153 + 168)) )
    {
      WdLogSingleEntry1(1LL, 6189LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6189LL, 0LL, 0LL, 0LL, 0LL);
    }
    v154 = v338[0];
    if ( v338[0] >= *(_DWORD *)(v152 + 96) )
    {
      WdLogSingleEntry1(1LL, 6190LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6190LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v154 = v338[0];
    }
    if ( v154 < *(_DWORD *)(v152 + 96) && v151 == *(_QWORD *)(*(_QWORD *)(v152 + 128) + v329 + 728) )
    {
      v155 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL);
      if ( v155 )
      {
        if ( !*(_QWORD *)(v155 + 2920) )
        {
          WdLogSingleEntry1(1LL, 10367LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10367LL, 0LL, 0LL, 0LL, 0LL);
          v154 = v338[0];
        }
        v156 = *(_QWORD *)(v155 + 2920);
        if ( !v156 )
          goto LABEL_319;
        if ( v154 >= *(_DWORD *)(v156 + 96) )
        {
          WdLogSingleEntry1(1LL, 6227LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"VidPnSourceId < m_NumVidPnSources",
            6227LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v157 = v329;
        if ( !*(_BYTE *)(*(_QWORD *)(v156 + 128) + v329 + 760) )
        {
LABEL_319:
          if ( *(_DWORD *)(*((_QWORD *)v5 + 2) + 464LL) != 1 )
          {
            WdLogSingleEntry3(4LL, 0LL, v5, *(_QWORD *)v338);
            WdLogSingleEntry2(4LL, -1071774920LL, v5);
            DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(v5, v43, v364, v371, v321, *((_DWORD *)v120 + 34));
            v150 = 0;
            *(_DWORD *)(*((_QWORD *)v5 + 2) + 4LL * *(_QWORD *)v338 + 1816) = *((_DWORD *)v120 + 30);
            goto LABEL_628;
          }
          LODWORD(v80) = -1071775738;
          WdLogSingleEntry3(4LL, -1071775738LL, v5, *(_QWORD *)v338);
          v208 = -1071775738LL;
          goto LABEL_321;
        }
      }
      else
      {
        v157 = v329;
      }
      v158 = *((_QWORD *)v5 + 2);
      if ( *(_DWORD *)(v158 + 464) != 1 || (*(_DWORD *)(v158 + 4LL * *(_QWORD *)v338 + 1240) & 0x100) != 0 )
      {
        if ( *((_QWORD *)v5 + 45) )
        {
          WdLogSingleEntry1(1LL, 4022LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pPresentDmaBuffer == NULL",
            4022LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v310 = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                 v5,
                 v43,
                 v294,
                 v293,
                 v292,
                 v364,
                 v374,
                 &v369,
                 (struct VIDSCH_SUBMIT_DATA_BASE *)v120,
                 v356);
        LODWORD(v80) = v310;
        if ( v310 < 0 )
          goto LABEL_312;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL) + 128LL)
                       + v157
                       + 1088) == -1 )
        {
          WdLogSingleEntry1(1LL, 4039LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"!NT_SUCCESS(Status) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnSourceToVidPnTa"
                      "rget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
            4039LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v159 = v364;
        v323 = *((_DWORD *)v120 + 34);
        v331 = v364;
        v160 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL);
        v335 = 0;
        v334 = v160 + 608;
        if ( v160 == -608 )
        {
          WdLogSingleEntry1(1LL, 592LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(struct _KTHREAD **)(v334 + 24) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 599LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
        }
        v161 = v334;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v334 + 24) == KeGetCurrentThread() )
        {
          if ( *(int *)(v334 + 32) <= 0 )
          {
            WdLogSingleEntry1(1LL, 491LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*(_DWORD *)(v334 + 32);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v334 + 8, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v267 = *(_DWORD *)(v334 + 36);
              if ( v267 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v162, (const EVENT_DESCRIPTOR *)"g", v163, v267);
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v334 + 16));
            ExAcquirePushLockExclusiveEx(v334 + 8, 0LL);
          }
          if ( *(_QWORD *)(v334 + 24) )
          {
            WdLogSingleEntry1(1LL, 515LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *(_DWORD *)(v334 + 32) )
          {
            WdLogSingleEntry1(1LL, 516LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
          }
          *(_QWORD *)(v334 + 24) = KeGetCurrentThread();
          *(_DWORD *)(v161 + 32) = 1;
        }
        v164 = *((_QWORD *)v5 + 2);
        v335 = 1;
        v165 = 0;
        v166 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v164 + 1880) + 2920LL) + 128LL) + 4000LL * v43->VidPnSourceId;
        if ( *(_DWORD *)(v166 + 3764) )
        {
          do
          {
            v268 = v165++;
            *(_BYTE *)(v268 + v166 + 2904) = 0;
          }
          while ( v165 < *(_DWORD *)(v166 + 3764) );
        }
        v167 = a2;
        v168 = 0;
        *(_DWORD *)(v166 + 3764) = 0;
        *(_BYTE *)(v166 + 3720) = 0;
        if ( a2->PresentPlaneCount )
        {
          v169 = v159;
          while ( 1 )
          {
            v170 = v167->ppPresentPlanes[v168];
            LayerIndex = v170->LayerIndex;
            v305 = v170->LayerIndex;
            if ( (v170->InputFlags.Value & 1) == 0 )
            {
              v357 = 0LL;
              DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
                (DISPLAY_SOURCE *)v166,
                LayerIndex,
                0LL,
                0,
                0,
                &v357,
                &v357,
                &v357,
                D3DDDI_ROTATION_IDENTITY,
                D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
                D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                0,
                D3DDDIFMT_UNKNOWN,
                0);
              goto LABEL_260;
            }
            v172 = (unsigned int)LayerIndex;
            v319 = v371[LayerIndex];
            p_Flags = &v170->pPlaneAttributes->Flags;
            v174 = (const struct DXGALLOCATION *)*((_QWORD *)v169 + LayerIndex);
            v303 = v174;
            v175 = (const struct tagRECT *)(p_Flags + 1);
            v176 = p_Flags[20];
            v177 = (const struct tagRECT *)(p_Flags + 9);
            v178 = *p_Flags;
            v179 = (const struct tagRECT *)(p_Flags + 5);
            v289 = p_Flags[18];
            v325 = p_Flags[14];
            v312 = p_Flags[13];
            v291 = v176;
            v333 = (const struct tagRECT *)(p_Flags + 1);
            v307 = *p_Flags;
            if ( *(struct _KTHREAD **)(*(_QWORD *)(v166 + 8) + 632LL) != KeGetCurrentThread() )
            {
              WdLogSingleEntry1(1LL, 9397LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
                9397LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v175 = v333;
              LODWORD(LayerIndex) = v172;
              v178 = v307;
              v174 = v303;
              v176 = v291;
            }
            if ( !v174 )
            {
              WdLogSingleEntry1(1LL, 9398LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!Enabled || pAllocation != NULL",
                9398LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v175 = v333;
              LODWORD(LayerIndex) = v172;
              v178 = v307;
              v174 = v303;
              v176 = v291;
            }
            if ( (unsigned int)LayerIndex >= *(_DWORD *)(v166 + 3760) )
              goto LABEL_576;
            v180 = 168 * v172;
            if ( *(_DWORD *)(v180 + v166 + 1144) == -1 )
            {
              if ( *(_DWORD *)(v180 + v166 + 1148) != -1 )
              {
                WdLogSingleEntry1(1LL, 9141LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
                  9141LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v175 = v333;
                LODWORD(LayerIndex) = v305;
                v178 = v307;
                v174 = v303;
                v176 = v291;
              }
              if ( *(_DWORD *)(v180 + v166 + 1144) == -1 )
              {
LABEL_576:
                v181 = 0LL;
                goto LABEL_580;
              }
            }
            _mm_lfence();
            v181 = v166 + 80LL * *(int *)(v180 + v166 + 1144) + 1152 + v180;
            if ( !v181 )
              goto LABEL_580;
            v182 = *(_DWORD *)(v181 + 8);
            if ( ((v182 >> 4) & 1) != ((v178 & 1) != 0)
              || ((v182 >> 5) & 1) != ((v178 & 2) != 0)
              || *(_DWORD *)(v181 + 12) != v175->left
              || *(_DWORD *)(v181 + 20) != v175->right
              || *(_DWORD *)(v181 + 16) != v175->top
              || *(_DWORD *)(v181 + 24) != v175->bottom
              || *(_DWORD *)(v181 + 28) != v179->left
              || *(_DWORD *)(v181 + 36) != v179->right
              || *(_DWORD *)(v181 + 32) != v179->top
              || *(_DWORD *)(v181 + 40) != v179->bottom
              || *(_DWORD *)(v181 + 44) != v177->left
              || *(_DWORD *)(v181 + 52) != v177->right
              || *(_DWORD *)(v181 + 48) != v177->top
              || *(_DWORD *)(v181 + 56) != v177->bottom
              || *(_DWORD *)(v181 + 60) != v312 )
            {
              break;
            }
            v176 = v291;
            v183 = v289;
            if ( ((v182 >> 2) & 1) != (v325 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
              || *(_DWORD *)(v181 + 64) != v289
              || *(_DWORD *)(v181 + 68) != v291 )
            {
              v174 = v303;
              goto LABEL_581;
            }
            if ( *(_DWORD *)(v166 + 3760) <= (unsigned int)LayerIndex )
            {
              WdLogSingleEntry1(1LL, 9406LL);
              v6 = 0;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_MaxPlanesUsed > PlaneIndex",
                9406LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              v6 = 0;
            }
            *(_DWORD *)(v181 + 8) |= 3u;
            *(_QWORD *)v181 = v303;
LABEL_259:
            v167 = a2;
LABEL_260:
            if ( ++v168 >= v167->PresentPlaneCount )
            {
              v120 = v345;
              v159 = v331;
              goto LABEL_262;
            }
          }
          v176 = v291;
          v174 = v303;
LABEL_580:
          v183 = v289;
LABEL_581:
          v269 = v319;
          if ( v319 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v181 )
            v269 = *(_DWORD *)(v181 + 72);
          DISPLAY_SOURCE::CreateNewPlaneConfig(
            (DISPLAY_SOURCE *)v166,
            LayerIndex,
            v174,
            1,
            v178,
            v175,
            v179,
            v177,
            v312,
            v325,
            v183,
            v176,
            v269,
            0);
          if ( v305 >= *(_DWORD *)(v166 + 3760) )
            *(_DWORD *)(v166 + 3760) = v305 + 1;
          v6 = 0;
          if ( v305 )
            *(_BYTE *)(v166 + 3768) = 1;
          goto LABEL_259;
        }
LABEL_262:
        v184 = v167->pPostComposition;
        if ( v184 )
        {
          DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v166, 1u, &v184->SrcRect, &v184->DstRect);
        }
        else
        {
          v185 = *(_QWORD *)(v166 + 8);
          v355 = 0LL;
          if ( *(struct _KTHREAD **)(v185 + 632) != KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 9460LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
              9460LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(v166 + 2824) == -1 && *(_DWORD *)(v166 + 2828) != -1 )
          {
            WdLogSingleEntry1(1LL, 9155LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
              9155LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v186 = *(int *)(v166 + 2824);
          if ( (_DWORD)v186 != -1 )
          {
            v270 = (struct _POST_COMPOSITION_CONFIG *)(v166 + 4 * (v186 + 8 * v186 + 708));
            if ( v270 )
            {
              if ( !PostCompositionConfigsMatch(v270, 0, &v355, &v355) )
                DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v166, v271, &v355, &v355);
            }
          }
        }
        if ( !v335 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, &v334, 0LL, 0LL);
        v187 = v334;
        v335 = 0;
        if ( *(struct _KTHREAD **)(v334 + 24) != KeGetCurrentThread() )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v334, 0LL, 0LL);
        if ( *(int *)(v187 + 32) <= 0 )
        {
          WdLogSingleEntry1(1LL, 535LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
        }
        v34 = (*(_DWORD *)(v187 + 32))-- == 1;
        if ( v34 )
        {
          *(_QWORD *)(v187 + 24) = 0LL;
          ExReleasePushLockExclusiveEx(v187 + 8, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v321 > -1 )
        {
          v188 = *((_QWORD *)v159 + v321);
          v189 = *((_QWORD *)v5 + 2);
          v190 = a2->VidPnSourceId;
          if ( v189 != -304 && *(struct _KTHREAD **)(v189 + 312) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 1453LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
              1453LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v189 + 304, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v272 = *(_DWORD *)(v189 + 328);
              if ( v272 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v191, (const EVENT_DESCRIPTOR *)"g", v192, v272);
            }
            ExAcquirePushLockExclusiveEx(v189 + 304, 0LL);
          }
          *(_QWORD *)(v189 + 8 * v190 + 1048) = v188;
          *(_DWORD *)(v189 + 4 * v190 + 1176) = v323;
          *(_QWORD *)(v189 + 312) = 0LL;
          ExReleasePushLockExclusiveEx(v189 + 304, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v335 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v334);
        v193 = *((_QWORD *)v5 + 2);
        v194 = 0;
        v195 = *((_DWORD *)v120 + 30);
        v196 = v338[0];
        v337 = 0;
        *(_DWORD *)(v193 + 4LL * *(_QWORD *)v338 + 1816) = v195;
        v197 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL);
        v336 = v197 + 464;
        if ( v197 == -464 )
        {
          WdLogSingleEntry1(1LL, 592LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(struct _KTHREAD **)(v336 + 24) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 599LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v337 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, &v336, 0LL, 0LL);
        v198 = v336;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v198 + 24) == KeGetCurrentThread() )
        {
          if ( *(int *)(v198 + 32) <= 0 )
          {
            WdLogSingleEntry1(1LL, 491LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*(_DWORD *)(v198 + 32);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v198 + 8, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v273 = *(_DWORD *)(v198 + 36);
              if ( v273 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v199, (const EVENT_DESCRIPTOR *)"g", v200, v273);
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v198 + 16));
            ExAcquirePushLockExclusiveEx(v198 + 8, 0LL);
          }
          if ( *(_QWORD *)(v198 + 24) )
          {
            WdLogSingleEntry1(1LL, 515LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *(_DWORD *)(v198 + 32) )
          {
            WdLogSingleEntry1(1LL, 516LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
          }
          *(_QWORD *)(v198 + 24) = KeGetCurrentThread();
          *(_DWORD *)(v198 + 32) = 1;
        }
        v201 = v329 + *(_QWORD *)(v197 + 128);
        v337 = 1;
        v202 = *(_BYTE *)(v201 + 704);
        if ( v296 )
        {
          if ( v202 && *(_DWORD *)(v201 + 708) == v308 && *(_DWORD *)(v201 + 712) == v328 )
            goto LABEL_300;
          *(_DWORD *)(v201 + 708) = v308;
          *(_DWORD *)(v329 + *(_QWORD *)(v197 + 128) + 712) = v328;
          *(_BYTE *)(v329 + *(_QWORD *)(v197 + 128) + 704) = v296;
        }
        else
        {
          if ( !v202 )
          {
LABEL_300:
            if ( !v337 )
              WdLogSingleEntry5(0LL, 275LL, 4LL, &v336, 0LL, 0LL);
            v203 = v336;
            v337 = 0;
            if ( *(struct _KTHREAD **)(v336 + 24) != KeGetCurrentThread() )
              WdLogSingleEntry5(0LL, 275LL, 4LL, v336, 0LL, 0LL);
            if ( *(int *)(v203 + 32) <= 0 )
            {
              WdLogSingleEntry1(1LL, 535LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_OwnerAcquireCount > 0",
                535LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v34 = (*(_DWORD *)(v203 + 32))-- == 1;
            if ( v34 )
            {
              *(_QWORD *)(v203 + 24) = 0LL;
              ExReleasePushLockExclusiveEx(v203 + 8, 0LL);
            }
            KeLeaveCriticalRegion();
            if ( v194 )
            {
              v274 = operator new[](0x18uLL, 0x4B677844u, 256LL);
              v275 = (_DWORD *)v274;
              if ( v274 )
              {
                *(_QWORD *)(v274 + 8) = 0LL;
                *(_QWORD *)(v274 + 16) = 0LL;
                *(_QWORD *)v274 = 0LL;
                DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v274, *(struct DXGADAPTER **)(v197 + 16));
                v275[4] = v196;
                v276 = DXGPROCESS::GetCurrent();
                DXGWORKQUEUE::QueueWork(
                  (PLIST_ENTRY)(*((_QWORD *)v276 + 8) + 104LL),
                  (void (*)(void *))lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
                  v275);
              }
            }
            if ( v337 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v336);
            LODWORD(v80) = v310;
LABEL_312:
            v119 = Lookasidea;
LABEL_313:
            v204 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 16LL);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v204 + 184)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v204 + 168))
              && (_DWORD)v80 != -1073741130 )
            {
              WdLogSingleEntry1(1LL, 4085LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner() || Status == STATUS_DEVICE_REMOVED",
                4085LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_QWORD *)v5 + 45) )
            {
              WdLogSingleEntry1(1LL, 4086LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pPresentDmaBuffer == NULL",
                4086LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_324;
          }
          *(_DWORD *)(v201 + 708) = 0;
          *(_DWORD *)(v329 + *(_QWORD *)(v197 + 128) + 712) = 0;
          *(_BYTE *)(v329 + *(_QWORD *)(v197 + 128) + 704) = 0;
        }
        v194 = 1;
        goto LABEL_300;
      }
      WdLogSingleEntry3(4LL, -1071775739LL, v5, *(_QWORD *)v338);
      v208 = -1071775739LL;
      LODWORD(v80) = -1071775739;
    }
    else
    {
      WdLogSingleEntry3(3LL, -1071775744LL, v5, *(_QWORD *)v338);
      v277 = *((_QWORD *)v5 + 2);
      if ( (*(_DWORD *)(*(_QWORD *)(v277 + 40) + 424LL) & 4) != 0
        && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(v277 + 1880) + 2920LL),
                           v338[0]) == 1 )
      {
        v278 = *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL);
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v278 + 16) + v329 + 752) + 424LL) & 4) != 0 )
        {
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v278, v338[0]);
          WdLogSingleEntry3(2LL, *((_QWORD *)v5 + 2), *(_QWORD *)v338, VidPnSourceOwner);
          v280 = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1880LL) + 2920LL),
                   v338[0]);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM device (0x%"
                      "I64x) has shared ownership, likely Dwm device leak",
            *((_QWORD *)v5 + 2),
            *(__int64 *)v338,
            (__int64)v280,
            0LL,
            0LL);
          LOBYTE(v281) = 1;
          *(_BYTE *)(*((_QWORD *)v5 + 2) + 1938LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v281) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
        }
      }
      LODWORD(v80) = -1071775744;
      v208 = -1071775744LL;
    }
LABEL_321:
    WdLogSingleEntry2(4LL, v208, v5);
    goto LABEL_322;
  }
  LODWORD(v149) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL)
                                                                                            + 736LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                    *(_QWORD *)(*((_QWORD *)v5 + 2) + 800LL),
                    v142,
                    0LL);
  if ( (_DWORD)v149 != -1071775486 )
    goto LABEL_193;
  if ( !v148 )
  {
LABEL_556:
    WdLogSingleEntry2(4LL, (int)v149, v5);
    if ( (_DWORD)v149 != -1071775486 && (_DWORD)v149 != -1073741130 && (_DWORD)v149 != -1071775232 )
    {
      WdLogSingleEntry1(1LL, 3638LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (STATUS_GRAPHIC"
                  "S_GPU_EXCEPTION_ON_DEVICE == ntStatus)",
        3638LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_194:
    v150 = v149;
    if ( (int)v149 < 0 )
      goto LABEL_555;
    goto LABEL_195;
  }
  COREDEVICEACCESS::Release(a3);
  LOBYTE(v265) = 1;
  v149 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL)
                                                                                + 736LL)
                                                                    + 8LL)
                                                        + 184LL))(
           *(_QWORD *)(*((_QWORD *)v5 + 2) + 800LL),
           v338[0],
           v265);
  v150 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
  if ( v150 >= 0 )
  {
LABEL_193:
    if ( (int)v149 >= 0 )
      goto LABEL_194;
    goto LABEL_556;
  }
  WdLogSingleEntry1(4LL, v149);
  COREDEVICEACCESS::AcquireSharedUncheck(a3, v266);
LABEL_555:
  WdLogSingleEntry2(4LL, v150, v5);
LABEL_628:
  LODWORD(v80) = v150;
LABEL_322:
  v119 = Lookasidea;
LABEL_323:
  if ( v120 )
LABEL_324:
    ExFreeToLookasideListEx(v119, v120);
LABEL_325:
  v209 = v364;
  if ( v364 == (DXGALLOCATIONREFERENCE *)v365 )
  {
    if ( v366 )
    {
      while ( 1 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v209 + v6++);
        if ( v6 >= v366 )
          break;
        v209 = v364;
      }
    }
  }
  else if ( v364 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v364);
  }
  return (unsigned int)v80;
}
