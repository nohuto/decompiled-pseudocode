/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001A68 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001AE0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0002890 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000806C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_SOURCE_MODE@@P6AJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@Q6AJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@0@Z1@Z @ 0x1C001CEA0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_SOURCE_MODE@@P6AJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEBU1@.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001CF2C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C004B6E4 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C016ABF0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B0684 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C01E9654 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C01E97E8 (_UpgradeDispModeFlags.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01E984C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C01E9A00 (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020F03C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C02FBB28 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x1C02FC1D0 (-_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        OBTAIN_MODES_ON_SOURCE *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  void **v6; // r12
  unsigned int v7; // ebx
  OBTAIN_MODES_ON_SOURCE *v8; // r13
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r8
  DXGADAPTER *v16; // rbx
  int VideoOutputTechnology; // eax
  __int64 v18; // rdi
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64, __int64 *, __int64 *); // rax
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 (__fastcall *v27)(__int64, __int64 *); // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned int *v31; // rsi
  unsigned int v32; // ecx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, _QWORD, void (__fastcall **)(__int64, _QWORD), __int64 *); // rax
  int v37; // eax
  unsigned int *v38; // r12
  char v39; // r15
  __int64 (__fastcall *v40)(__int64, __int64 *); // rax
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // r8
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  unsigned int v54; // edi
  char v55; // cl
  unsigned int v56; // r15d
  __int64 v57; // rsi
  __int64 v58; // rbx
  unsigned int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // eax
  unsigned int v64; // ebx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  bool v69; // zf
  signed int v70; // r8d
  unsigned int v71; // eax
  bool v72; // dl
  __int16 v73; // cx
  unsigned int v74; // r14d
  int v75; // eax
  int v76; // r8d
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rsi
  int v80; // r14d
  UINT Denominator; // r14d
  unsigned __int64 v82; // rax
  unsigned int v83; // esi
  unsigned int *v84; // r8
  unsigned int v85; // ecx
  __int64 v86; // r11
  unsigned __int64 v87; // r10
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  __int64 v93; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v94; // r14d
  int v95; // r12d
  __int64 v96; // rsi
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  unsigned int *v101; // r14
  D3DDDI_ROTATION v102; // r15d
  unsigned int v103; // ecx
  unsigned int v104; // ecx
  __int64 v105; // rsi
  MODE_UNION_LIST *v106; // r13
  __int64 v107; // r10
  __int64 v108; // r9
  __int64 v109; // r11
  int *v110; // rdx
  int v111; // ecx
  int v112; // eax
  __int64 v113; // r8
  int v114; // ecx
  int *v115; // rax
  int v116; // edx
  int v117; // ecx
  __int64 v118; // rcx
  struct _D3DDDI_RATIONAL v119; // rcx
  int v120; // eax
  unsigned int v121; // eax
  __int64 v122; // rdi
  int v123; // eax
  int v124; // eax
  unsigned int *v125; // rbx
  void (__fastcall *v126)(__int64, unsigned int *); // rdi
  __int64 v127; // rcx
  int v128; // eax
  int v129; // eax
  int v130; // eax
  __int64 v131; // rax
  struct _D3DKMT_DISPLAYMODE **v132; // rbx
  struct _D3DKMT_DISPLAYMODE *v133; // rax
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rax
  int UniqueModes; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // eax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v142; // rax
  int v143; // eax
  int v144; // r8d
  int v145; // eax
  int v146; // eax
  int v147; // eax
  unsigned int v148; // r12d
  _DWORD *v149; // r15
  unsigned int i; // esi
  int v151; // r8d
  __int64 v152; // r14
  bool v153; // r8
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  bool v155; // r8
  __int64 v156; // rbx
  int v157; // eax
  __int64 v158; // rdi
  __int64 v159; // rbx
  __int64 v160; // rdi
  __int64 v161; // rbx
  __int64 v162; // rdi
  const wchar_t *v163; // r9
  __int64 v164; // rdi
  const wchar_t *v165; // r9
  __int64 v166; // rbx
  unsigned __int64 v167; // rcx
  unsigned __int64 v168; // rax
  struct _D3DKMT_DISPLAYMODE *v169; // rax
  int v170; // eax
  __int64 v171; // rbx
  int v172; // [rsp+20h] [rbp-E0h]
  char v173; // [rsp+50h] [rbp-B0h]
  char v174; // [rsp+51h] [rbp-AFh] BYREF
  char v175[2]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v176; // [rsp+54h] [rbp-ACh]
  unsigned int v177; // [rsp+58h] [rbp-A8h]
  char v178; // [rsp+5Ch] [rbp-A4h]
  bool v179; // [rsp+5Dh] [rbp-A3h]
  unsigned int v180; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v181; // [rsp+64h] [rbp-9Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v182; // [rsp+68h] [rbp-98h] BYREF
  __int64 v183; // [rsp+70h] [rbp-90h] BYREF
  signed int v184; // [rsp+78h] [rbp-88h]
  unsigned int *v185; // [rsp+80h] [rbp-80h]
  __int64 v186; // [rsp+88h] [rbp-78h]
  __int64 v187; // [rsp+90h] [rbp-70h] BYREF
  __int64 v188; // [rsp+98h] [rbp-68h] BYREF
  void (__fastcall *v189)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h] BYREF
  OBTAIN_MODES_ON_SOURCE *v190; // [rsp+A8h] [rbp-58h]
  struct _D3DKMT_DISPLAYMODE v191; // [rsp+B0h] [rbp-50h] BYREF
  D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v192; // [rsp+E0h] [rbp-20h]
  unsigned int v193; // [rsp+E4h] [rbp-1Ch]
  __int64 v194; // [rsp+E8h] [rbp-18h]
  __int64 v195; // [rsp+F0h] [rbp-10h] BYREF
  struct _D3DDDI_RATIONAL v196; // [rsp+F8h] [rbp-8h] BYREF
  int v197; // [rsp+100h] [rbp+0h] BYREF
  UINT v198; // [rsp+104h] [rbp+4h]
  D3DDDIFORMAT v199; // [rsp+108h] [rbp+8h]
  char v200[8]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *v201; // [rsp+118h] [rbp+18h]
  void (__fastcall *v202)(__int64, unsigned int *); // [rsp+120h] [rbp+20h]
  __int64 v203; // [rsp+128h] [rbp+28h]
  int v204; // [rsp+130h] [rbp+30h]
  char v205[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v206; // [rsp+140h] [rbp+40h]
  void (__fastcall *v207)(__int64, __int64); // [rsp+148h] [rbp+48h]
  __int64 v208; // [rsp+150h] [rbp+50h]
  int v209; // [rsp+158h] [rbp+58h]
  UINT v210; // [rsp+160h] [rbp+60h]
  unsigned int *v211; // [rsp+168h] [rbp+68h] BYREF
  __int64 v212; // [rsp+170h] [rbp+70h] BYREF
  void **v213; // [rsp+178h] [rbp+78h]
  char v214[8]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v215; // [rsp+188h] [rbp+88h]
  void (__fastcall *v216)(__int64, __int64); // [rsp+190h] [rbp+90h]
  __int64 v217; // [rsp+198h] [rbp+98h]
  int v218; // [rsp+1A0h] [rbp+A0h]
  char v219[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int *v220; // [rsp+1B0h] [rbp+B0h]
  void (__fastcall *v221)(__int64, unsigned int *); // [rsp+1B8h] [rbp+B8h]
  __int64 v222; // [rsp+1C0h] [rbp+C0h]
  int v223; // [rsp+1C8h] [rbp+C8h]
  DXGADAPTER *v224; // [rsp+1D0h] [rbp+D0h]
  struct _D3DKMT_DISPLAYMODE **v225; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v226; // [rsp+1E0h] [rbp+E0h]
  unsigned int *v227; // [rsp+1E8h] [rbp+E8h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v228; // [rsp+1F0h] [rbp+F0h] BYREF

  v5 = -1;
  v227 = a5;
  v6 = a4;
  v213 = a4;
  v7 = 0;
  v226 = a3;
  v225 = a2;
  v8 = a1;
  v190 = a1;
  v9 = D3DKMDT_VOT_BNC|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0;
  v177 = -1;
  while ( 1 )
  {
    v10 = *((_QWORD *)v8 + 4);
    v11 = *((unsigned int *)v8 + 10);
    v12 = *((_QWORD *)v8 + 3);
    v180 = -1;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v10 + 8))(v12, v11, v7, &v180);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry3(1LL, v13, *((unsigned int *)v8 + 10), v7);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnEnumPathTargetsFromSource. (Status = 0x%I64x, m_VidPn"
                  "SourceId = 0x%I64x, PathIndex = 0x%I64x)",
        v14,
        *((unsigned int *)v8 + 10),
        v7,
        0LL,
        0LL);
      return (unsigned int)v14;
    }
    v15 = v180;
    if ( v180 == -1 )
      break;
    ++*((_DWORD *)v8 + 13);
    v138 = *((unsigned int *)v8 + 10);
    v139 = *((_QWORD *)v8 + 3);
    v182 = D3DKMDT_VOT_HD15;
    v181 = -1;
    v140 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int16 *))(*((_QWORD *)v8 + 4) + 112LL))(
             v139,
             v138,
             v15,
             &v182,
             &v181);
    v14 = v140;
    if ( v140 < 0 )
    {
      WdLogSingleEntry3(2LL, v140, v5, *((unsigned int *)v8 + 10));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnGetPathImportance. (Status = 0x%I64x, PrimVidPnTarget"
                  "Id = 0x%I64x, m_VidPnSourceId = 0x%I64x)",
        v14,
        v5,
        *((unsigned int *)v8 + 10),
        0LL,
        0LL);
      return (unsigned int)v14;
    }
    if ( v5 == -1 || v182 < v9 )
    {
      v5 = v180;
      v9 = v182;
      v177 = v180;
      *((_DWORD *)v8 + 12) = v7;
    }
    ++v7;
  }
  if ( v5 == v180 && *((_DWORD *)v8 + 13) )
  {
    WdLogSingleEntry1(1LL, 691LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(PrimVidPnTargetId != D3DDDI_ID_UNINITIALIZED) || (m_CloneGroupSize == 0)",
      691LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = *(DXGADAPTER **)v8;
  v224 = *(DXGADAPTER **)v8;
  v182 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v224, v5, 0LL, &v182);
  v18 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v18;
  }
  v179 = (unsigned int)v182 >= D3DKMDT_VOT_MIRACAST && (v182 == D3DKMDT_VOT_MIRACAST || (unsigned int)(v182 - 16) <= 1);
  if ( *((_QWORD *)v16 + 366)
    || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)v16 + 365)),
        v178 = 1,
        !DisplayOnlyDriverUseRawModes) )
  {
    v178 = 0;
  }
  memset(&v228, 0, sizeof(v228));
  v19 = v177;
  if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(*(DXGADAPTER **)v8, v177, &v228) < 0 )
    memset(&v228, 0, sizeof(v228));
  v20 = *((_QWORD *)v8 + 2);
  v21 = *((unsigned int *)v8 + 10);
  v22 = *((_QWORD *)v8 + 1);
  v195 = 0LL;
  v188 = 0LL;
  v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v20 + 8);
  v215 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v218 = 0;
  v214[0] = 0;
  v24 = v23(v22, v21, &v188, &v195);
  v25 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(2LL, v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (Status = 0x%I64x)",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v25;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNSOURCEMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNSOURCEMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v214,
    v188,
    *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL),
    *((_QWORD *)v8 + 1));
  v26 = v215;
  v188 = 0LL;
  v201 = 0LL;
  v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(v195 + 8);
  v202 = 0LL;
  v203 = 0LL;
  v204 = 0;
  v200[0] = 0;
  v28 = v27(v215, &v188);
  v25 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(2LL, v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_187;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_SOURCE_MODE const *,long (*)(D3DKMDT_HVIDPNSOURCEMODESET__ *,_D3DKMDT_VIDPN_SOURCE_MODE const *),D3DKMDT_HVIDPNSOURCEMODESET__ *>::Own(
    (__int64)v200,
    v188,
    *(_QWORD *)(v195 + 32),
    v26);
  v29 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)v8 + 1));
  v31 = v201;
  *(_BYTE *)(v29 + 296) = 1;
  if ( !v31 )
  {
LABEL_175:
    v130 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v195 + 48))(v26, 0LL);
    v25 = v130;
    if ( v130 < 0 )
    {
      WdLogSingleEntry3(2LL, v130, v26, 0xFFFFFFFFLL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, spVidPnSourceModeI"
                  "nfo.GetResource() = 0x%I64x, spVidPnSourceModeInfo.GetResource()->Id = 0x%I64x)",
        v25,
        v26,
        0xFFFFFFFFLL,
        0LL,
        0LL);
    }
    else
    {
      v131 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)v8 + 1));
      v132 = v225;
      *(_BYTE *)(v131 + 296) = 0;
      v133 = *v132;
      if ( *v132 )
        goto LABEL_181;
      v134 = *((unsigned int *)v8 + 20);
      if ( !(_DWORD)v134 )
        goto LABEL_181;
      v135 = 44 * v134;
      if ( !is_mul_ok(v134, 0x2CuLL) )
        v135 = -1LL;
      v133 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v135, 0x4B677844u, 256LL);
      *v132 = v133;
      if ( v133 )
      {
LABEL_181:
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (OBTAIN_MODES_ON_SOURCE *)((char *)v8 + 64),
                        *((unsigned int *)v8 + 20),
                        v133,
                        v226);
        if ( UniqueModes < 0 )
        {
          v166 = UniqueModes;
          WdLogSingleEntry1(1LL, UniqueModes);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"GetUniqueModesFromUnionList failed. (Status = 0x%I64x)",
            v166,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v6 )
        {
          if ( *v6 )
          {
            operator delete(*v6);
            *v6 = 0LL;
          }
          v167 = *((unsigned int *)v8 + 30);
          if ( (_DWORD)v167 )
          {
            v168 = 44 * v167;
            if ( !is_mul_ok(v167, 0x2CuLL) )
              v168 = -1LL;
            v169 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v168, 0x4B677844u, 256LL);
            *v6 = v169;
            if ( v169 )
            {
              v170 = MODE_UNION_LIST::GetUniqueModes(
                       (OBTAIN_MODES_ON_SOURCE *)((char *)v8 + 104),
                       *((unsigned int *)v8 + 30),
                       v169,
                       v227);
              if ( v170 < 0 )
              {
                v171 = v170;
                WdLogSingleEntry1(1LL, v170);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"GetUniqueModesFromInvalidModesUnionList failed. (Status = 0x%I64x)",
                  v171,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry1(6LL, 1337LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Unable to allocate mode list memory for invalid modes.",
                1337LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        LODWORD(v25) = 0;
      }
      else
      {
        WdLogSingleEntry1(6LL, 1309LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate mode list memory.",
          1309LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v25) = -1073741801;
      }
    }
    goto LABEL_185;
  }
  while ( 1 )
  {
    v32 = v31[1];
    if ( ((v32 - 1) & 0xFFFFFFFC) != 0 || v32 == 2 || v31[2] != v31[4] || v31[3] != v31[5] )
      goto LABEL_172;
    LOBYTE(v30) = 1;
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v195 + 40))(v26, *v31, v30);
    if ( v33 < 0 )
    {
      WdLogSingleEntry2(3LL, v33, *v31);
      goto LABEL_172;
    }
    v34 = *((_QWORD *)v8 + 2);
    v35 = *((_QWORD *)v8 + 1);
    v187 = 0LL;
    v189 = 0LL;
    v36 = *(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall **)(__int64, _QWORD), __int64 *))(v34 + 24);
    v206 = 0LL;
    v207 = 0LL;
    v208 = 0LL;
    v209 = 0;
    v205[0] = 0;
    v37 = v36(v35, v19, (void (__fastcall **)(__int64, _QWORD))&v189, &v187);
    v25 = v37;
    if ( v37 < 0 )
    {
      WdLogSingleEntry1(2LL, v37);
      v165 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireTargetModeSet. (Status = 0x%I64x)";
LABEL_306:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v165, v25, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_185;
    }
    DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
      (__int64)v205,
      (__int64)v189,
      *(_QWORD *)(*((_QWORD *)v8 + 2) + 32LL),
      *((_QWORD *)v8 + 1));
    v183 = 0LL;
    v38 = 0LL;
    v220 = 0LL;
    v39 = 0;
    v189 = 0LL;
    v40 = *(__int64 (__fastcall **)(__int64, __int64 *))(v187 + 8);
    v221 = 0LL;
    v194 = 0LL;
    v222 = 0LL;
    v223 = 0;
    v41 = v206;
    v219[0] = 0;
    v42 = v40(v206, &v183);
    v25 = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry1(2LL, v42);
      v163 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)";
      goto LABEL_297;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v219,
      v183,
      *(_QWORD *)(v187 + 32),
      v41);
    v38 = v220;
    v39 = v219[0];
    v194 = v222;
    v185 = v220;
    if ( v220 )
      break;
    v189 = (void (__fastcall *)(__int64, unsigned int *))v221;
LABEL_166:
    v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v187 + 56))(v41, 0LL);
    v25 = v128;
    if ( v128 < 0 )
    {
      v164 = v206;
      WdLogSingleEntry3(2LL, v128, v206, 0xFFFFFFFFLL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, shVidPnTargetModeS"
                  "et.GetResource() = 0x%I64x, spVidPnTargetModeInfo.GetResource()->Id = 0x%I64x)",
        v25,
        v164,
        0xFFFFFFFFLL,
        0LL,
        0LL);
      goto LABEL_299;
    }
    if ( v39 )
      v189(v194, 0LL);
    if ( v205[0] )
      v207(v208, v41);
    v26 = v215;
LABEL_172:
    v212 = 0LL;
    v129 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v195 + 16))(v26, v31, &v212);
    v25 = v129;
    if ( v129 < 0 )
    {
      WdLogSingleEntry1(2LL, v129);
      v165 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      goto LABEL_306;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_SOURCE_MODE const *,long (*)(D3DKMDT_HVIDPNSOURCEMODESET__ *,_D3DKMDT_VIDPN_SOURCE_MODE const *),D3DKMDT_HVIDPNSOURCEMODESET__ *>::Own(
      (__int64)v200,
      v212,
      *(_QWORD *)(v195 + 32),
      v26);
    v31 = v201;
    if ( !v201 )
    {
      v6 = v213;
      goto LABEL_175;
    }
  }
  v189 = (void (__fastcall *)(__int64, unsigned int *))v221;
  while ( 1 )
  {
    LOBYTE(v43) = 1;
    v173 = v39;
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v187 + 48))(v41, *v38, v43);
    if ( v44 >= 0 )
      break;
    WdLogSingleEntry2(3LL, v44, *v38);
LABEL_125:
    v211 = 0LL;
    v124 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int **))(v187 + 16))(v41, v38, &v211);
    v25 = v124;
    if ( v124 < 0 )
    {
      WdLogSingleEntry1(2LL, v124);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)",
        v25,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_298;
    }
    v43 = v187;
    v125 = v211;
    v126 = *(void (__fastcall **)(__int64, _QWORD))(v187 + 32);
    if ( v39 )
      v189(v194, v38);
    v189 = (void (__fastcall *)(__int64, unsigned int *))v126;
    v38 = v125;
    v19 = v177;
    if ( !v125 )
    {
      v41 = v206;
      v39 = 0;
      v194 = v206;
      goto LABEL_166;
    }
    v185 = v125;
    v39 = 1;
    v41 = v206;
    v194 = v206;
  }
  v175[0] = 0;
  v197 = 0;
  if ( v31[1] - 3 <= 1 || v178 )
  {
    v175[0] = 1;
  }
  else
  {
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v187 + 64))(v41, *v38, v175, &v197);
    v25 = v45;
    if ( v45 == -1071774920 )
    {
      v142 = WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
      *(_QWORD *)(v142 + 24) = v19;
      *(_QWORD *)(v142 + 32) = *((unsigned int *)v8 + 10);
    }
    else if ( v45 < 0 )
    {
      WdLogSingleEntry2(2LL, v45, v38);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to determine whether mode is supported by monitor. (Status = 0x%I64x, spVidPnTargetModeInfo.GetR"
                  "esource() = 0x%I64x)",
        v25,
        (__int64)v38,
        0LL,
        0LL,
        0LL);
      goto LABEL_298;
    }
  }
  v174 = 0;
  if ( v228.VideoSignalInfo.ActiveSize.cx == v31[2]
    && v228.VideoSignalInfo.ActiveSize.cy == v31[3]
    && (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, bool, char *))(v187 + 80))(
         v38,
         &v228,
         v179,
         &v174) < 0 )
  {
    v174 = 0;
  }
  v50 = *((_QWORD *)v8 + 4);
  v51 = *((unsigned int *)v8 + 10);
  v52 = *((_QWORD *)v8 + 3);
  v183 = 0LL;
  v53 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v50 + 24))(v52, v51, v19, &v183);
  v25 = v53;
  if ( v53 < 0 )
  {
    WdLogSingleEntry1(2LL, v53);
    v163 = L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)";
LABEL_297:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v163, v25, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_298;
  }
  v54 = *(_DWORD *)(v183 + 16);
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v8 + 4) + 32LL))(*((_QWORD *)v8 + 3));
  v55 = 1;
  if ( v31[2] == v38[5] && v31[3] == v38[6] )
  {
    if ( (v54 & 1) == 0 )
LABEL_228:
      v55 = 0;
  }
  else if ( (v54 & 0x1E) == 0 )
  {
    goto LABEL_228;
  }
  v176 = 0;
  v56 = 0;
  v186 = 0LL;
  v57 = 0LL;
  if ( !v55 )
    goto LABEL_123;
  while ( 2 )
  {
    v58 = dword_1C009B208[v57];
    v182 = (int)v58;
    switch ( (int)v58 )
    {
      case 1:
        LOBYTE(v59) = v54;
        goto LABEL_36;
      case 2:
        v59 = v54 >> 1;
        goto LABEL_36;
      case 3:
        v59 = v54 >> 2;
        goto LABEL_36;
      case 4:
        v59 = v54 >> 3;
LABEL_36:
        if ( (v59 & 1) != 0 )
          goto LABEL_37;
        goto LABEL_121;
      case 5:
        if ( (v54 & 0x10) != 0 )
          goto LABEL_37;
        goto LABEL_121;
      case 255:
LABEL_37:
        LOBYTE(v172) = 1;
        v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*((_QWORD *)v8 + 4) + 64LL))(
                *((_QWORD *)v8 + 3),
                *((unsigned int *)v8 + 10),
                v177,
                (unsigned int)v58,
                v172);
        v25 = v60;
        if ( v60 == -1071774970 )
        {
          v161 = v177;
          v162 = v182;
          WdLogSingleEntry4(1LL, v182, *((unsigned int *)v8 + 10), v177, -1071774970LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262147,
            -1,
            (__int64)L"Failed to pin the reported-as-supported scaling mode 0x%I64x on the path (0x%I64x, 0x%I64x) because"
                      " of not supported by driver, returning 0x%I64x.",
            v162,
            *((unsigned int *)v8 + 10),
            v161,
            -1071774970LL,
            0LL);
LABEL_291:
          LODWORD(v25) = -1071774970;
LABEL_292:
          v31 = v201;
          v39 = v173;
          goto LABEL_298;
        }
        if ( v60 < 0 )
        {
          v160 = v177;
          WdLogSingleEntry5(2LL, v60, *((unsigned int *)v8 + 10), v177, *((_QWORD *)v8 + 3), v58);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to set scaling on the path. ( Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId"
                      " = 0x%I64x, m_hVidPnTopology = 0x%I64x, PathScaling = 0x%I64x)",
            v25,
            *((unsigned int *)v8 + 10),
            v160,
            *((_QWORD *)v8 + 3),
            v58);
          goto LABEL_289;
        }
        v61 = *((unsigned int *)v8 + 10);
        v62 = *((_QWORD *)v8 + 3);
        v183 = 0LL;
        v63 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*((_QWORD *)v8 + 4) + 24LL))(
                v62,
                v61,
                v177,
                &v183);
        v25 = v63;
        if ( v63 < 0 )
        {
          WdLogSingleEntry1(2LL, v63);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)",
            v25,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_289;
        }
        v64 = *(_DWORD *)(v183 + 24);
        (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v8 + 4) + 32LL))(*((_QWORD *)v8 + 3));
        v65 = 1;
        v184 = 1;
        break;
      default:
        WdLogSingleEntry1(1LL, v58);
        goto LABEL_121;
    }
    while ( 2 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            if ( v68 != 1 )
            {
              v70 = v184;
LABEL_234:
              WdLogSingleEntry1(1LL, v70);
              goto LABEL_119;
            }
            v69 = (v64 & 8) == 0;
          }
          else
          {
            v69 = (v64 & 4) == 0;
          }
        }
        else
        {
          v69 = (v64 & 2) == 0;
        }
      }
      else
      {
        v69 = (v64 & 1) == 0;
      }
      if ( v69 )
        goto LABEL_119;
      v70 = v184;
      if ( (v184 - 1) / 4 )
      {
        switch ( (v184 - 1) / 4 )
        {
          case 1:
            v71 = v64 >> 5;
            break;
          case 2:
            v71 = v64 >> 6;
            break;
          case 3:
            v71 = v64 >> 7;
            break;
          default:
            goto LABEL_234;
        }
      }
      else
      {
        v71 = v64 >> 4;
      }
      if ( (v71 & 1) == 0 )
        goto LABEL_119;
      *(_QWORD *)&v191.Width = 0LL;
      *(_QWORD *)&v191.Format = 0LL;
      *(_OWORD *)&v191.ScanLineOrdering = 0LL;
      v72 = *((_QWORD *)v224 + 366) || !*(_BYTE *)(*((_QWORD *)v224 + 365) + 289LL) || v184 == 1;
      if ( v174 && v182 == D3DKMDT_VOT_SVIDEO )
        v73 = 64;
      else
        v73 = 0;
      v74 = v38[14];
      v199 = v201[7];
      v191.Format = v199;
      v210 = v201[4];
      v191.Width = v210;
      v198 = v201[5];
      v191.Height = v198;
      v192 = (int)(v74 << 29) >> 29;
      v191.ScanLineOrdering = v192;
      v193 = *(_DWORD *)&v191.Flags & 0xFFFFFFFC | v175[0] & 1;
      *(_DWORD *)&v191.Flags = v193;
      if ( v72 )
        v75 = 128;
      else
        v75 = 0;
      v76 = v75 | v73 & 0x17F | v197 & 0xF;
      v191.RefreshRate = *(D3DDDI_RATIONAL *)(v38 + 7);
      v77 = HIDWORD(*(_QWORD *)&v191.RefreshRate);
      v78 = HIDWORD(*(_QWORD *)&v191.RefreshRate);
      v79 = HIDWORD(*(_QWORD *)&v191.RefreshRate);
      v180 = v76;
      *((_DWORD *)&v191.Flags + 1) = v76;
      v80 = (v74 >> 3) & 0x3F;
      if ( v80 )
      {
        Denominator = v191.RefreshRate.Denominator * v80;
        v191.RefreshRate.Denominator = Denominator;
        LODWORD(v77) = Denominator;
        LODWORD(v78) = Denominator;
        LODWORD(v79) = Denominator;
      }
      else
      {
        Denominator = v191.RefreshRate.Denominator;
      }
      if ( !(_DWORD)v77 )
      {
        WdLogSingleEntry0(1LL);
        LODWORD(v78) = v79;
      }
      LOBYTE(v181) = 0;
      if ( (_DWORD)v78 )
      {
        v82 = v191.RefreshRate.Numerator / (unsigned __int64)(unsigned int)v78 + 1;
        if ( v191.RefreshRate.Numerator % (unsigned __int64)(unsigned int)v78 < (unsigned int)v78
                                                                              - v191.RefreshRate.Numerator
                                                                              % (unsigned __int64)(unsigned int)v78 )
          v82 = v191.RefreshRate.Numerator / (unsigned __int64)(unsigned int)v78;
        v183 = v82;
      }
      else
      {
        v183 = -1LL;
      }
      v83 = 0;
      v84 = (unsigned int *)&unk_1C008F388;
      while ( 1 )
      {
        if ( Denominator )
        {
          v85 = v84[1];
          if ( v85 )
          {
            v86 = *v84;
            v87 = v85;
            v88 = 99950 * v86;
            v89 = 100000 * (unsigned __int64)v191.RefreshRate.Numerator / (unsigned int)v78;
            v90 = v87 == 1001 ? v88 / 0x3E9 : v88 / v87;
            if ( v89 >= v90 )
            {
              v91 = 100050 * v86;
              v92 = v87 == 1001 ? v91 / 0x3E9 : v91 / v87;
              if ( v89 <= v92 )
                break;
            }
          }
        }
        ++v83;
        v84 += 2;
        if ( v83 >= 6 )
        {
          v93 = v183;
          goto LABEL_75;
        }
      }
      if ( v191.RefreshRate.Numerator / Denominator != (_DWORD)v183 )
        LOBYTE(v181) = 1;
      v93 = v191.RefreshRate.Numerator / Denominator;
LABEL_75:
      if ( (unsigned int)(v192 - 2) <= 1 )
        v93 = (unsigned int)v93 >> 1;
      v94 = v182;
      v191.IntegerRefreshRate = v93;
      v183 = v93;
      switch ( v182 )
      {
        case 1:
        case 4:
        case 5:
        case 255:
          goto LABEL_78;
        case 2:
          v95 = 2;
          v191.DisplayFixedOutput = 2;
          break;
        case 3:
          v95 = 1;
          v191.DisplayFixedOutput = 1;
          break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
        case 134:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
        case 143:
        case 144:
        case 145:
        case 146:
        case 147:
        case 148:
        case 149:
        case 150:
        case 151:
        case 152:
        case 153:
        case 154:
        case 155:
        case 156:
        case 157:
        case 158:
        case 159:
        case 160:
        case 161:
        case 162:
        case 163:
        case 164:
        case 165:
        case 166:
        case 167:
        case 168:
        case 169:
        case 170:
        case 171:
        case 172:
        case 173:
        case 174:
        case 175:
        case 176:
        case 177:
        case 178:
        case 179:
        case 180:
        case 181:
        case 182:
        case 183:
        case 184:
        case 185:
        case 186:
        case 187:
        case 188:
        case 189:
        case 190:
        case 191:
        case 192:
        case 193:
        case 194:
        case 195:
        case 196:
        case 197:
        case 198:
        case 199:
        case 200:
        case 201:
        case 202:
        case 203:
        case 204:
        case 205:
        case 206:
        case 207:
        case 208:
        case 209:
        case 210:
        case 211:
        case 212:
        case 213:
        case 214:
        case 215:
        case 216:
        case 217:
        case 218:
        case 219:
        case 220:
        case 221:
        case 222:
        case 223:
        case 224:
        case 225:
        case 226:
        case 227:
        case 228:
        case 229:
        case 230:
        case 231:
        case 232:
        case 233:
        case 234:
        case 235:
        case 236:
        case 237:
        case 238:
        case 239:
        case 240:
        case 241:
        case 242:
        case 243:
        case 244:
        case 245:
        case 246:
        case 247:
        case 248:
        case 249:
        case 250:
        case 251:
        case 252:
        case 253:
        case 254:
          WdLogSingleEntry1(3LL, v182);
          if ( v94 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0) )
          {
            WdLogSingleEntry1(1LL, 156LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"DmmScaling != D3DKMDT_VPPS_PREFERRED",
              156LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v183 = v93;
LABEL_78:
          v95 = 0;
          v191.DisplayFixedOutput = 0;
          break;
      }
      v96 = v184;
      v97 = v184;
      if ( (unsigned int)(v184 - 5) <= 0xB )
      {
        v143 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v184);
        v97 = (v144 + v143 - 2) % 4 + 1;
      }
      v98 = v97 - 1;
      if ( !v98 )
      {
        v101 = v201;
        goto LABEL_155;
      }
      v99 = v98 - 1;
      if ( v99 )
      {
        v100 = v99 - 1;
        if ( v100 )
        {
          if ( v100 == 1 )
          {
            v101 = v201;
            v102 = D3DDDI_ROTATION_270;
            goto LABEL_86;
          }
          v101 = v201;
          WdLogSingleEntry3(3LL, v96, *v201, *v185);
LABEL_155:
          v102 = D3DDDI_ROTATION_IDENTITY;
        }
        else
        {
          v101 = v201;
          v102 = D3DDDI_ROTATION_180;
        }
      }
      else
      {
        v101 = v201;
        v102 = D3DDDI_ROTATION_90;
      }
LABEL_86:
      v103 = v101[1];
      v191.DisplayOrientation = v102;
      v104 = v103 - 3;
      if ( v104 )
      {
        if ( v104 != 1 )
          goto LABEL_88;
        v145 = v180 | 0x20;
      }
      else
      {
        v145 = v180;
      }
      v180 = v145 | 0x10;
      *((_DWORD *)&v191.Flags + 1) = v145 | 0x10;
      v193 |= 1u;
      *(_DWORD *)&v191.Flags = v193;
LABEL_88:
      v8 = v190;
      if ( *((_DWORD *)v190 + 13) <= 1u )
        goto LABEL_89;
      LOBYTE(v172) = 0;
      v146 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*((_QWORD *)v190 + 4) + 80LL))(
               *((_QWORD *)v190 + 3),
               *((unsigned int *)v190 + 10),
               v177,
               (unsigned int)v96,
               v172);
      v25 = v146;
      if ( v146 == -1071774970 )
      {
        v159 = v177;
        WdLogSingleEntry4(1LL, v96, *((unsigned int *)v8 + 10), v177, -1071774970LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262147,
          -1,
          (__int64)L"Failed to pin the reported-as-supported rotation mode 0x%I64x on the path (0x%I64x, 0x%I64x) because "
                    "of not supported by driver, returning 0x%I64x.",
          v96,
          *((unsigned int *)v8 + 10),
          v159,
          -1071774970LL,
          0LL);
        v38 = v185;
        goto LABEL_291;
      }
      if ( v146 < 0 )
      {
        v158 = v177;
        WdLogSingleEntry5(2LL, v146, *((unsigned int *)v8 + 10), v177, *((_QWORD *)v8 + 3), v96);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to set rotation on the path. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId ="
                    " 0x%I64x, m_hVidPnTopology = 0x%I64x, PathRotation = 0x%I64x)",
          v25,
          *((unsigned int *)v8 + 10),
          v158,
          *((_QWORD *)v8 + 3),
          v96);
LABEL_284:
        v38 = v185;
        goto LABEL_292;
      }
LABEL_89:
      if ( v199 != D3DDDIFMT_A8R8G8B8 && *((_BYTE *)v8 + 44)
        || (unsigned int)v199 <= D3DDDIFMT_P8 && (v127 = 0x20003900000LL, _bittest64(&v127, v199)) )
      {
        if ( !v213 )
        {
          v57 = v186;
          v56 = v176;
          v38 = v185;
          goto LABEL_119;
        }
        v147 = MODE_UNION_LIST::AddUniqueMode((OBTAIN_MODES_ON_SOURCE *)((char *)v8 + 104), &v191);
        v38 = v185;
        LODWORD(v25) = v147;
        if ( v147 >= 0 )
          goto LABEL_274;
        goto LABEL_292;
      }
      LODWORD(v105) = *((_DWORD *)v8 + 20);
      v106 = (OBTAIN_MODES_ON_SOURCE *)((char *)v8 + 64);
      if ( !(_DWORD)v105 )
      {
LABEL_111:
        LODWORD(v25) = MODE_UNION_LIST::AddMode(v106, &v191, v105);
        if ( (int)v25 < 0 )
          goto LABEL_284;
        goto LABEL_112;
      }
      v107 = *((_QWORD *)v106 + 4);
      v108 = (unsigned int)(v105 - 1);
      v109 = *((_QWORD *)v106 + 1);
      v110 = (int *)(v109 + 44LL * *(unsigned int *)(v107 + 4 * v108));
      v111 = *v110;
      if ( v210 == *v110 )
      {
        v111 = v110[1];
        v112 = v198;
        if ( v198 == v111 )
        {
          v111 = v110[2];
          if ( v199 == v111 )
          {
            v111 = ((unsigned int)v110[10] >> 4) & 1;
            v112 = (v180 >> 4) & 1;
            if ( v112 == v111 )
            {
              v112 = v183;
              v111 = v110[3];
              if ( (_DWORD)v183 == v111 )
              {
                v111 = v110[6];
                v112 = v192;
                if ( v192 == v111 )
                {
                  v111 = v110[8];
                  if ( v95 == v111 )
                  {
                    v111 = v110[7];
                    if ( v102 == v111 )
                      goto LABEL_98;
                    v112 = v102;
                  }
                  else
                  {
                    v112 = v95;
                  }
                }
              }
            }
          }
          else
          {
            v112 = v199;
          }
        }
      }
      else
      {
        v112 = v210;
      }
      if ( v112 - v111 > 0 )
        goto LABEL_111;
LABEL_98:
      v113 = 0LL;
      v105 = 0LL;
      v114 = 0;
      while ( (int)v113 <= (int)v108 )
      {
        v105 = (unsigned int)(((int)v108 + (int)v113) >> 1);
        v115 = (int *)(v109 + 44LL * *(unsigned int *)(v107 + 4LL * (int)v105));
        v116 = *v115;
        if ( v210 == *v115 )
        {
          v116 = v115[1];
          v117 = v198;
          if ( v198 == v116 )
          {
            v116 = v115[2];
            v117 = v199;
            if ( v199 == v116 )
            {
              v116 = ((unsigned int)v115[10] >> 4) & 1;
              v117 = (v180 >> 4) & 1;
              if ( v117 == v116 )
              {
                v117 = v183;
                v116 = v115[3];
                if ( (_DWORD)v183 == v116 )
                {
                  v116 = v115[6];
                  v117 = v192;
                  if ( v192 == v116 )
                  {
                    v116 = v115[8];
                    if ( v95 == v116 )
                    {
                      v116 = v115[7];
                      if ( v102 == v116 )
                        goto LABEL_156;
                      v117 = v102;
                    }
                    else
                    {
                      v117 = v95;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v117 = v210;
        }
        v114 = v117 - v116;
        if ( !v114 )
          break;
        if ( v114 < 0 )
          LODWORD(v108) = v105 - 1;
        else
          v113 = (unsigned int)(v105 + 1);
      }
      if ( v114 > 0 )
        v105 = (unsigned int)(v105 + 1);
      if ( v114 )
        v118 = 0LL;
      else
LABEL_156:
        v118 = v109 + 44LL * *(unsigned int *)(v107 + 4 * v105);
      if ( !v118 )
        goto LABEL_111;
      if ( (*(_DWORD *)(v118 + 36) & 2) != 0 )
      {
        MODE_UNION_LIST::RemoveMode(v106, v105);
        MODE_UNION_LIST::AddMode(v106, &v191, v105);
      }
      else
      {
        UpgradeDispModeFlags(v118, &v191, v113);
      }
LABEL_112:
      v57 = v186;
      v56 = v176;
      if ( (_BYTE)v181 )
      {
        v191.IntegerRefreshRate = v183 + 1;
        *(_DWORD *)&v191.Flags = v193 | 2;
        LODWORD(v25) = MODE_UNION_LIST::AddUniqueMode(v106, &v191);
        if ( (int)v25 < 0 )
          goto LABEL_284;
      }
      v38 = v185;
      v119 = *(struct _D3DDDI_RATIONAL *)(v185 + 7);
      v196 = v119;
      v120 = (v185[14] >> 3) & 0x3F;
      if ( v120 )
      {
        v119.Numerator = v120 * v119.Denominator;
        v196.Denominator = v120 * v119.Denominator;
      }
      else
      {
        v119.Numerator = v196.Denominator;
      }
      v121 = v185[17];
      if ( v121 == -2 )
      {
        if ( v185[18] == -2 )
          goto LABEL_118;
      }
      else if ( v121 == -1 && v185[18] == -1 )
      {
LABEL_118:
        v8 = v190;
        goto LABEL_119;
      }
      v186 = v57;
      v176 = v56;
      if ( v121 == v196.Numerator && v185[18] == v119.Numerator )
      {
        v8 = v190;
        v176 = v56;
        v186 = v57;
        goto LABEL_119;
      }
      v148 = v180;
      v149 = &unk_1C00CFECC;
      for ( i = 0; i < 7; ++i )
      {
        if ( DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
               &v196,
               (const struct _D3DDDI_RATIONAL *)&unk_1C00CFEC8 + i,
               0) )
        {
          goto LABEL_267;
        }
        v152 = v206;
        if ( (*(int (__fastcall **)(__int64, _QWORD, char *, _QWORD))(v187 + 88))(
               v206,
               *v185,
               (char *)&unk_1C00CFEC8 + 8 * i,
               (unsigned int)(v151 + 1)) >= 0 )
        {
          v191.RefreshRate = *(D3DDDI_RATIONAL *)(v149 - 1);
          v191.IntegerRefreshRate = v191.RefreshRate.Numerator / *v149;
          if ( !MODE_UNION_LIST::FindMode(v106, &v191) )
          {
            *((_DWORD *)&v191.Flags + 1) = v148 | 0x100;
            LODWORD(v25) = OBTAIN_MODES_ON_SOURCE::_AddMode(v190, &v191, v153, 0);
            if ( (int)v25 < 0 )
              goto LABEL_284;
            v148 = *((_DWORD *)&v191.Flags + 1);
LABEL_267:
            v152 = v206;
          }
        }
        v149 += 2;
      }
      LODWORD(v188) = v196.Numerator;
      HIDWORD(v188) = 2 * v196.Denominator;
      if ( 100 * (unsigned __int64)v196.Numerator < 5999 * (unsigned __int64)(2 * v196.Denominator)
        || (*(int (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(v187 + 88))(v152, *v185, &v188, 2LL) < 0 )
      {
        v8 = v190;
        goto LABEL_273;
      }
      v191.RefreshRate = (D3DDDI_RATIONAL)v188;
      v191.IntegerRefreshRate = (unsigned int)v188 / HIDWORD(v188);
      Mode = MODE_UNION_LIST::FindMode(v106, &v191);
      v8 = v190;
      if ( !Mode )
      {
        *((_DWORD *)&v191.Flags + 1) = v148 | 0x100;
        LODWORD(v25) = OBTAIN_MODES_ON_SOURCE::_AddMode(v190, &v191, v155, 0);
        if ( (int)v25 < 0 )
          goto LABEL_284;
      }
LABEL_273:
      v38 = v185;
LABEL_274:
      v56 = v176;
      v57 = v186;
LABEL_119:
      v65 = v184 + 1;
      v184 = v65;
      if ( v65 <= 4 )
        continue;
      break;
    }
    if ( *((_DWORD *)v8 + 13) > 1u )
    {
      v156 = v177;
      v157 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v8 + 4) + 88LL))(
               *((_QWORD *)v8 + 3),
               *((unsigned int *)v8 + 10),
               v177,
               0LL);
      v25 = v157;
      if ( v157 < 0 )
      {
        WdLogSingleEntry4(2LL, v157, *((_QWORD *)v8 + 3), *((unsigned int *)v8 + 10), v156);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to unpin rotation. (Status = 0x%I64x, m_hVidPnTopology = 0x%I64x, m_VidPnSourceId = 0x%I64x, P"
                    "rimVidPnTargetId = 0x%I64x)",
          v25,
          *((_QWORD *)v8 + 3),
          *((unsigned int *)v8 + 10),
          v156,
          0LL);
        goto LABEL_289;
      }
    }
LABEL_121:
    ++v56;
    ++v57;
    v176 = v56;
    v186 = v57;
    if ( v56 < 5 )
      continue;
    break;
  }
  v41 = v206;
LABEL_123:
  v122 = v177;
  v123 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v8 + 4) + 72LL))(
           *((_QWORD *)v8 + 3),
           *((unsigned int *)v8 + 10),
           v177,
           0LL);
  v25 = v123;
  if ( v123 >= 0 )
  {
    v31 = v201;
    v39 = v173;
    goto LABEL_125;
  }
  WdLogSingleEntry4(2LL, v123, *((unsigned int *)v8 + 10), *((_QWORD *)v8 + 3), v122);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Unable to unpin scaling. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, m_hVidPnTopology = 0x%I64x, PrimVidP"
              "nTargetId = 0x%I64x)",
    v25,
    *((unsigned int *)v8 + 10),
    *((_QWORD *)v8 + 3),
    v122,
    0LL);
LABEL_289:
  v31 = v201;
  v39 = v173;
LABEL_298:
  v164 = v206;
LABEL_299:
  if ( v39 )
    v189(v194, v38);
  if ( v205[0] )
    v207(v208, v164);
  v26 = v215;
LABEL_185:
  if ( v200[0] )
    v202(v203, v31);
LABEL_187:
  if ( v214[0] )
    v216(v217, v26);
  return (unsigned int)v25;
}
