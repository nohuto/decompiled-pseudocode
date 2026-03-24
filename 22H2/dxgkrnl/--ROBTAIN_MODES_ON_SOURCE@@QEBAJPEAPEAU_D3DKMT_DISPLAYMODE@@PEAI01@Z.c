/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C012C790
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00E12BC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C00091C0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0009790 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3A4 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0043D78 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DE05C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00E1214 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C012D344 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C012D500 (_PopulateDisplayModeFromPresentPath.c)
 *     _CompareDisplayMode @ 0x1C012D86C (_CompareDisplayMode.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F130 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0149B48 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C025E5DC (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C025EC40 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned int v7; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  void *v17; // rdi
  int VideoOutputTechnology; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, __int64, __int64 *, __int64 *); // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, __int64 *); // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int *v37; // r14
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 (__fastcall *v46)(__int64, _QWORD, __int64 *, __int64 *); // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned int *v51; // r13
  __int64 (__fastcall *v52)(__int64, __int64 *); // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rbx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // edi
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // r15d
  __int64 v73; // r14
  __int64 v74; // rbx
  __int64 v75; // r15
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned int v85; // ebx
  __int64 v86; // rdx
  signed int v87; // r13d
  int v88; // ecx
  __int64 v89; // rcx
  bool v90; // zf
  unsigned int v91; // eax
  char v92; // dl
  char v93; // cl
  __int64 v94; // r8
  __int64 v95; // r9
  D3DDDIFORMAT Format; // r15d
  MODE_UNION_LIST *v97; // r12
  __int64 v98; // r14
  __int64 v99; // r11
  int v100; // r9d
  int v101; // r8d
  int v102; // eax
  int *v103; // rdx
  int v104; // ecx
  unsigned __int32 IntegerRefreshRate; // eax
  unsigned int v106; // eax
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // eax
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // eax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rax
  struct _D3DKMT_DISPLAYMODE **v119; // rbx
  struct _D3DKMT_DISPLAYMODE *v120; // r8
  unsigned int v121; // eax
  SIZE_T v122; // rax
  unsigned __int64 v123; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  int UniqueModes; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rbx
  struct _D3DKMT_DISPLAYMODE **v132; // rbx
  int v134; // ecx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rdx
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  _QWORD *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  int v150; // eax
  int v151; // r8d
  __int64 v152; // rax
  int v153; // eax
  __int64 v154; // rcx
  _QWORD *v155; // rax
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rcx
  _QWORD *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rax
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rdx
  __int64 v168; // rax
  _QWORD *v169; // rcx
  __int64 v170; // rax
  _QWORD *v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rax
  unsigned __int64 v174; // rcx
  SIZE_T v175; // rax
  struct _D3DKMT_DISPLAYMODE *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  int v181; // eax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rbx
  __int64 v185; // rax
  _QWORD *v186; // rax
  int v187; // [rsp+20h] [rbp-E0h]
  char v188; // [rsp+50h] [rbp-B0h] BYREF
  char v189; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v190; // [rsp+52h] [rbp-AEh]
  char v191; // [rsp+53h] [rbp-ADh]
  unsigned __int8 v192; // [rsp+54h] [rbp-ACh]
  __int16 v193; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v194; // [rsp+60h] [rbp-A0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v195; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v196; // [rsp+6Ch] [rbp-94h]
  unsigned int v197; // [rsp+70h] [rbp-90h] BYREF
  __int64 v198; // [rsp+78h] [rbp-88h] BYREF
  __int64 v199; // [rsp+80h] [rbp-80h] BYREF
  MODE_UNION_LIST *v200; // [rsp+88h] [rbp-78h] BYREF
  int v201; // [rsp+90h] [rbp-70h] BYREF
  char v202[8]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v203; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v204)(__int64, unsigned int *); // [rsp+A8h] [rbp-58h]
  __int64 v205; // [rsp+B0h] [rbp-50h]
  int v206; // [rsp+B8h] [rbp-48h]
  char v207[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v208; // [rsp+C8h] [rbp-38h]
  void (__fastcall *v209)(__int64, unsigned int *); // [rsp+D0h] [rbp-30h]
  __int64 v210; // [rsp+D8h] [rbp-28h]
  int v211; // [rsp+E0h] [rbp-20h]
  char v212[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v213; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v214)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v215; // [rsp+100h] [rbp+0h]
  int v216; // [rsp+108h] [rbp+8h]
  _D3DKMT_DISPLAYMODE v217; // [rsp+110h] [rbp+10h] BYREF
  __int64 v218; // [rsp+140h] [rbp+40h]
  __int64 v219; // [rsp+148h] [rbp+48h] BYREF
  __int64 v220; // [rsp+150h] [rbp+50h] BYREF
  void **v221; // [rsp+158h] [rbp+58h]
  char v222[8]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v223; // [rsp+168h] [rbp+68h]
  void (__fastcall *v224)(__int64, __int64); // [rsp+170h] [rbp+70h]
  __int64 v225; // [rsp+178h] [rbp+78h]
  int v226; // [rsp+180h] [rbp+80h]
  void *v227; // [rsp+188h] [rbp+88h]
  struct _D3DKMT_DISPLAYMODE **v228; // [rsp+190h] [rbp+90h]
  unsigned int *v229; // [rsp+198h] [rbp+98h]
  unsigned int *v230; // [rsp+1A0h] [rbp+A0h]
  _D3DKMDT_MONITOR_SOURCE_MODE v231; // [rsp+1B0h] [rbp+B0h] BYREF

  v230 = a5;
  LODWORD(v5) = -1;
  v196 = -1;
  v6 = a1;
  v221 = a4;
  v7 = 0;
  v229 = a3;
  v8 = D3DKMDT_VOT_BNC|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0;
  v228 = a2;
  v218 = a1;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v6 + 32);
    v10 = *(unsigned int *)(v6 + 40);
    v11 = *(_QWORD *)(v6 + 24);
    v197 = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v9 + 8))(v11, v10, v7, &v197);
    v15 = v12;
    if ( v12 < 0 )
    {
      v186 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      v186[3] = v15;
      v186[4] = *(unsigned int *)(v6 + 40);
      v186[5] = v7;
      WdLogEvent5_WdAssertion(v186);
      return (unsigned int)v15;
    }
    v16 = v197;
    if ( v197 == -1 )
      break;
    ++*(_DWORD *)(v6 + 52);
    v137 = *(unsigned int *)(v6 + 40);
    v195 = D3DKMDT_VOT_HD15;
    v193 = -1;
    v138 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int16 *))(*(_QWORD *)(v6 + 32) + 112LL))(
             *(_QWORD *)(v6 + 24),
             v137,
             v16,
             &v195,
             &v193);
    v15 = v138;
    if ( v138 < 0 )
    {
      v141 = (_QWORD *)WdLogNewEntry5_WdError(v140, v139);
      v141[4] = (unsigned int)v5;
      v141[3] = v15;
      v141[5] = *(unsigned int *)(v6 + 40);
      WdLogEvent5_WdError(v141);
      return (unsigned int)v15;
    }
    if ( (_DWORD)v5 == -1 || v195 < v8 )
    {
      LODWORD(v5) = v197;
      v8 = v195;
      v196 = v197;
      *(_DWORD *)(v6 + 48) = v7;
    }
    ++v7;
  }
  if ( (_DWORD)v5 == -1 && *(_DWORD *)(v6 + 52) )
  {
    v142 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v142 + 24) = 610LL;
    WdLogEvent5_WdAssertion(v142);
  }
  v17 = *(void **)v6;
  v227 = *(void **)v6;
  v195 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v227, v5, 0LL, &v195);
  v21 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v143 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v143 + 24) = v21;
    WdLogEvent5_WdError(v143);
    return (unsigned int)v21;
  }
  else
  {
    if ( (unsigned int)v195 < D3DKMDT_VOT_MIRACAST
      || (v192 = 1, (unsigned int)v195 > (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
    {
      v192 = 0;
    }
    if ( *((_QWORD *)v17 + 338)
      || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                           *((ADAPTER_DISPLAY **)v17 + 337),
                                           v19),
          v191 = 1,
          !DisplayOnlyDriverUseRawModes) )
    {
      v191 = 0;
    }
    memset(&v231, 0, sizeof(v231));
    if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)v6, v5, &v231) < 0 )
      memset(&v231, 0, sizeof(v231));
    v22 = *(_QWORD *)(v6 + 16);
    v23 = *(unsigned int *)(v6 + 40);
    v24 = *(_QWORD *)(v6 + 8);
    v199 = 0LL;
    v194 = 0LL;
    v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v22 + 8);
    v223 = 0LL;
    v224 = 0LL;
    v225 = 0LL;
    v226 = 0;
    v222[0] = 0;
    v26 = v25(v24, v23, &v194, &v199);
    v29 = v26;
    if ( v26 < 0 )
    {
      v145 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v145 + 24) = v29;
      WdLogEvent5_WdError(v145);
    }
    else
    {
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v222,
        v194,
        *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL),
        *(_QWORD *)(v6 + 8));
      v30 = v223;
      v194 = 0LL;
      v203 = 0LL;
      v31 = *(__int64 (__fastcall **)(__int64, __int64 *))(v199 + 8);
      v204 = 0LL;
      v205 = 0LL;
      v206 = 0;
      v202[0] = 0;
      v32 = v31(v223, &v194);
      v29 = v32;
      if ( v32 < 0 )
      {
        v146 = WdLogNewEntry5_WdError(v34, v33);
        *(_QWORD *)(v146 + 24) = v29;
        WdLogEvent5_WdError(v146);
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v202,
          v194,
          *(_QWORD *)(v199 + 32),
          v30);
        v35 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(v6 + 8));
        v37 = v203;
        *(_BYTE *)(v35 + 296) = 1;
        if ( v37 )
        {
          do
          {
            v38 = v37[1];
            if ( ((v38 - 1) & 0xFFFFFFFC) == 0 && v38 != 2 && v37[2] == v37[4] && v37[3] == v37[5] )
            {
              LOBYTE(v36) = 1;
              v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v199 + 40))(v30, *v37, v36);
              v43 = v39;
              if ( v39 < 0 )
              {
                v147 = WdLogNewEntry5_WdWarning(v41, v40, v42);
                *(_QWORD *)(v147 + 24) = v43;
                *(_QWORD *)(v147 + 32) = *v37;
                WdLogEvent5_WdWarning(v147);
              }
              else
              {
                v44 = *(_QWORD *)(v6 + 16);
                v45 = *(_QWORD *)(v6 + 8);
                v198 = 0LL;
                v194 = 0LL;
                v46 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v44 + 24);
                v213 = 0LL;
                v214 = 0LL;
                v215 = 0LL;
                v216 = 0;
                v212[0] = 0;
                v47 = v46(v45, (unsigned int)v5, &v194, &v198);
                v29 = v47;
                if ( v47 < 0 )
                  goto LABEL_210;
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                  (__int64)v212,
                  v194,
                  *(_QWORD *)(*(_QWORD *)(v6 + 16) + 32LL),
                  *(_QWORD *)(v6 + 8));
                v50 = v213;
                v51 = 0LL;
                v194 = 0LL;
                v208 = 0LL;
                v52 = *(__int64 (__fastcall **)(__int64, __int64 *))(v198 + 8);
                v209 = 0LL;
                v210 = 0LL;
                v211 = 0;
                v207[0] = 0;
                v53 = v52(v213, &v194);
                v29 = v53;
                if ( v53 < 0 )
                  goto LABEL_202;
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                  (__int64)v207,
                  v194,
                  *(_QWORD *)(v198 + 32),
                  v50);
                v51 = v208;
                if ( v208 )
                {
                  while ( 1 )
                  {
                    LOBYTE(v56) = 1;
                    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v198 + 48))(v50, *v51, v56);
                    v61 = v57;
                    if ( v57 >= 0 )
                      break;
                    v148 = WdLogNewEntry5_WdWarning(v59, v58, v60);
                    *(_QWORD *)(v148 + 24) = v61;
                    *(_QWORD *)(v148 + 32) = *v51;
                    WdLogEvent5_WdWarning(v148);
LABEL_79:
                    v219 = 0LL;
                    v110 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v198 + 16))(v50, v51, &v219);
                    v29 = v110;
                    if ( v110 < 0 )
                      goto LABEL_202;
                    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                      (__int64)v207,
                      v219,
                      *(_QWORD *)(v198 + 32),
                      v50);
                    v51 = v208;
                    if ( !v208 )
                      goto LABEL_81;
                  }
                  v189 = 0;
                  v201 = 0;
                  if ( v37[1] - 3 <= 1 || v191 )
                  {
                    v189 = 1;
                    goto LABEL_28;
                  }
                  v62 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v198 + 64))(v50, *v51, &v189, &v201);
                  v29 = v62;
                  if ( v62 == -1071774920 )
                  {
                    v149 = WdLogNewEntry5_WdTrace(v64, v63);
                    *(_QWORD *)(v149 + 24) = (unsigned int)v5;
                    *(_QWORD *)(v149 + 32) = *(unsigned int *)(v6 + 40);
                    goto LABEL_28;
                  }
                  if ( v62 < 0 )
                  {
                    v161 = WdLogNewEntry5_WdError(v64, v63);
                    *(_QWORD *)(v161 + 32) = v51;
                  }
                  else
                  {
LABEL_28:
                    v188 = 0;
                    if ( v231.VideoSignalInfo.ActiveSize.cx == v37[2]
                      && v231.VideoSignalInfo.ActiveSize.cy == v37[3]
                      && (*(int (__fastcall **)(unsigned int *, _D3DKMDT_MONITOR_SOURCE_MODE *, _QWORD, char *))(v198 + 80))(
                           v51,
                           &v231,
                           v192,
                           &v188) < 0 )
                    {
                      v188 = 0;
                    }
                    v65 = *(_QWORD *)(v6 + 32);
                    v66 = *(unsigned int *)(v6 + 40);
                    v67 = *(_QWORD *)(v6 + 24);
                    v194 = 0LL;
                    v68 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v65 + 24))(
                            v67,
                            v66,
                            (unsigned int)v5,
                            &v194);
                    v29 = v68;
                    if ( v68 >= 0 )
                    {
                      v69 = *(_DWORD *)(v194 + 16);
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v6 + 32) + 32LL))(*(_QWORD *)(v6 + 24));
                      v70 = v51[5];
                      LOBYTE(v71) = 1;
                      v190 = 1;
                      if ( v37[2] == v70 && v37[3] == v51[6] )
                      {
                        if ( (v69 & 1) != 0 )
                          goto LABEL_33;
LABEL_164:
                        LOBYTE(v71) = 0;
                        v190 = 0;
                      }
                      else if ( (v69 & 0x1E) == 0 )
                      {
                        goto LABEL_164;
                      }
LABEL_33:
                      v72 = 0;
                      v197 = 0;
                      v73 = 0LL;
                      v194 = 0LL;
LABEL_34:
                      if ( !(_BYTE)v71 )
                        goto LABEL_77;
                      v74 = dword_1C007BED8[v73];
                      v195 = (int)v74;
                      switch ( (int)v74 )
                      {
                        case 1:
                          LOBYTE(v106) = v69;
                          goto LABEL_75;
                        case 2:
                          v106 = v69 >> 1;
                          goto LABEL_75;
                        case 3:
                          v106 = v69 >> 2;
                          goto LABEL_75;
                        case 4:
                          v106 = v69 >> 3;
LABEL_75:
                          if ( (v106 & 1) == 0 )
                            goto LABEL_76;
                          goto LABEL_37;
                        case 5:
                          if ( (v69 & 0x10) != 0 )
                            goto LABEL_37;
                          goto LABEL_76;
                        case 255:
LABEL_37:
                          v75 = v196;
                          LOBYTE(v187) = 1;
                          v76 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(v6 + 32)
                                                                                               + 64LL))(
                                  *(_QWORD *)(v6 + 24),
                                  *(unsigned int *)(v6 + 40),
                                  v196,
                                  (unsigned int)v74,
                                  v187);
                          v29 = v76;
                          if ( v76 == -1071774970 )
                          {
                            v165 = (_QWORD *)WdLogNewEntry5_WdAssertion(v78, v77);
                            v165[3] = v74;
                            v165[4] = *(unsigned int *)(v6 + 40);
                            v165[5] = v75;
                            v165[6] = -1071774970LL;
                            WdLogEvent5_WdAssertion(v165);
                            LODWORD(v29) = -1071774970;
                            goto LABEL_196;
                          }
                          if ( v76 < 0 )
                          {
                            v164 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77);
                            v164[3] = v29;
                            v164[4] = *(unsigned int *)(v6 + 40);
                            v164[5] = v75;
                            v164[6] = *(_QWORD *)(v6 + 24);
                            v164[7] = v74;
                            WdLogEvent5_WdError(v164);
                            v51 = v208;
                            v37 = v203;
                            v50 = v213;
                            goto LABEL_205;
                          }
                          v79 = *(_QWORD *)(v6 + 32);
                          v80 = *(unsigned int *)(v6 + 40);
                          v81 = *(_QWORD *)(v6 + 24);
                          v200 = 0LL;
                          v82 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, MODE_UNION_LIST **))(v79 + 24))(
                                  v81,
                                  v80,
                                  (unsigned int)v75,
                                  &v200);
                          v29 = v82;
                          if ( v82 < 0 )
                          {
                            v163 = WdLogNewEntry5_WdError(v84, v83);
                            *(_QWORD *)(v163 + 24) = v29;
                            WdLogEvent5_WdError(v163);
                            v51 = v208;
                            v37 = v203;
                            v50 = v213;
                            goto LABEL_205;
                          }
                          v85 = *((_DWORD *)v200 + 6);
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v6 + 32) + 32LL))(*(_QWORD *)(v6 + 24));
                          v87 = 1;
                          break;
                        default:
                          v160 = WdLogNewEntry5_WdAssertion(v71, 0x1C0000000uLL);
                          *(_QWORD *)(v160 + 24) = v74;
                          WdLogEvent5_WdAssertion(v160);
                          goto LABEL_76;
                      }
LABEL_41:
                      v88 = v87;
                      if ( (unsigned int)(v87 - 5) <= 0xB )
                      {
                        v150 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v87);
                        v88 = (v150 + v151 - 2) % 4 + 1;
                      }
                      v89 = (unsigned int)(v88 - 1);
                      if ( (_DWORD)v89 )
                      {
                        v89 = (unsigned int)(v89 - 1);
                        if ( (_DWORD)v89 )
                        {
                          v89 = (unsigned int)(v89 - 1);
                          if ( (_DWORD)v89 )
                          {
                            if ( (_DWORD)v89 != 1 )
                              goto LABEL_165;
                            v90 = (v85 & 8) == 0;
                          }
                          else
                          {
                            v90 = (v85 & 4) == 0;
                          }
                        }
                        else
                        {
                          v90 = (v85 & 2) == 0;
                        }
                      }
                      else
                      {
                        v90 = (v85 & 1) == 0;
                      }
                      if ( v90 )
                        goto LABEL_166;
                      v86 = (unsigned int)v87;
                      if ( (unsigned int)(v87 - 1) <= 0xF )
                        v86 = (unsigned int)((v87 - 1) / 4 + 1);
                      if ( (_DWORD)v86 == 1 )
                      {
                        v91 = v85 >> 4;
                      }
                      else
                      {
                        v86 = (unsigned int)(v86 - 2);
                        if ( (_DWORD)v86 )
                        {
                          v86 = (unsigned int)(v86 - 1);
                          if ( (_DWORD)v86 )
                          {
                            if ( (_DWORD)v86 != 1 )
                            {
LABEL_165:
                              v152 = WdLogNewEntry5_WdAssertion(v89, v86);
                              *(_QWORD *)(v152 + 24) = v87;
                              WdLogEvent5_WdAssertion(v152);
LABEL_166:
                              v37 = v203;
                              goto LABEL_122;
                            }
                            v91 = v85 >> 7;
                          }
                          else
                          {
                            v91 = v85 >> 6;
                          }
                        }
                        else
                        {
                          v91 = v85 >> 5;
                        }
                      }
                      if ( (v91 & 1) == 0 )
                        goto LABEL_166;
                      LOBYTE(v193) = 0;
                      memset(&v217, 0, sizeof(v217));
                      v92 = *((_QWORD *)v227 + 338) || !*(_BYTE *)(*((_QWORD *)v227 + 337) + 249LL) || v87 == 1;
                      v93 = v188 && v195 == D3DKMDT_VOT_SVIDEO;
                      v37 = v203;
                      PopulateDisplayModeFromPresentPath(
                        (_DWORD)v203,
                        (_DWORD)v208,
                        v195,
                        v87,
                        v189,
                        v93,
                        v92,
                        v201,
                        (__int64)&v217,
                        (__int64)&v193);
                      if ( *(_DWORD *)(v6 + 52) > 1u )
                      {
                        LOBYTE(v187) = 0;
                        v153 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(v6 + 32)
                                                                                              + 80LL))(
                                 *(_QWORD *)(v6 + 24),
                                 *(unsigned int *)(v6 + 40),
                                 (unsigned int)v75,
                                 (unsigned int)v87,
                                 v187);
                        v29 = v153;
                        if ( v153 == -1071774970 )
                        {
                          v162 = (_QWORD *)WdLogNewEntry5_WdAssertion(v154, v86);
                          v162[3] = v87;
                          v162[4] = *(unsigned int *)(v6 + 40);
                          v162[5] = (unsigned int)v75;
                          v162[6] = -1071774970LL;
                          WdLogEvent5_WdAssertion(v162);
                          LODWORD(v29) = -1071774970;
                          goto LABEL_192;
                        }
                        if ( v153 < 0 )
                        {
                          v155 = (_QWORD *)WdLogNewEntry5_WdError(v154, v86);
                          v155[3] = v29;
                          v155[4] = *(unsigned int *)(v6 + 40);
                          v155[5] = (unsigned int)v75;
                          v155[6] = *(_QWORD *)(v6 + 24);
                          v155[7] = v87;
                          WdLogEvent5_WdError(v155);
                          v51 = v208;
                          v50 = v213;
                          goto LABEL_205;
                        }
                      }
                      Format = v217.Format;
                      if ( v217.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(v6 + 44)
                        || v217.Format <= (unsigned int)D3DDDIFMT_P8
                        && (v136 = 0x20003900000LL, _bittest64(&v136, v217.Format)) )
                      {
                        if ( !v221 )
                          goto LABEL_121;
                        LODWORD(v29) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(v6 + 104), &v217);
                        if ( (int)v29 >= 0 )
                          goto LABEL_121;
LABEL_192:
                        v51 = v208;
                        v50 = v213;
                        goto LABEL_205;
                      }
                      LODWORD(v29) = *(_DWORD *)(v6 + 80);
                      v97 = (MODE_UNION_LIST *)(v6 + 64);
                      v200 = v97;
                      if ( !(_DWORD)v29 )
                        goto LABEL_118;
                      v98 = *((_QWORD *)v97 + 1);
                      if ( (int)CompareDisplayMode(
                                  &v217,
                                  v98 + 44LL * *(unsigned int *)(*((_QWORD *)v97 + 4) + 4LL * (unsigned int)(v29 - 1)),
                                  v94,
                                  v95) > 0 )
                        goto LABEL_118;
                      v100 = v29 - 1;
                      v101 = 0;
                      v29 = 0LL;
                      v102 = 0;
                      if ( v100 < 0 )
                        goto LABEL_113;
                      while ( 1 )
                      {
                        v29 = (unsigned int)((v100 + v101) >> 1);
                        v103 = (int *)(v98 + 44LL * *(unsigned int *)(v99 + 4LL * (int)v29));
                        v104 = *v103;
                        if ( v217.Width == *v103 )
                        {
                          v104 = v103[1];
                          if ( v217.Height == v104 )
                          {
                            v104 = v103[2];
                            if ( Format == v104 )
                            {
                              v104 = ((unsigned int)v103[10] >> 4) & 1;
                              IntegerRefreshRate = (*((_DWORD *)&v217.Flags + 1) >> 4) & 1;
                              if ( IntegerRefreshRate == v104 )
                              {
                                v104 = v103[3];
                                IntegerRefreshRate = v217.IntegerRefreshRate;
                                if ( v217.IntegerRefreshRate == v104 )
                                {
                                  v104 = v103[6];
                                  IntegerRefreshRate = v217.ScanLineOrdering;
                                  if ( v217.ScanLineOrdering == v104 )
                                  {
                                    v104 = v103[8];
                                    IntegerRefreshRate = v217.DisplayFixedOutput;
                                    if ( v217.DisplayFixedOutput == v104 )
                                    {
                                      v104 = v103[7];
                                      IntegerRefreshRate = v217.DisplayOrientation;
                                      if ( v217.DisplayOrientation == v104 )
                                      {
                                        v102 = 0;
LABEL_112:
                                        v97 = v200;
LABEL_113:
                                        if ( v102 > 0 )
                                          v29 = (unsigned int)(v29 + 1);
                                        if ( v102 )
                                          v135 = 0LL;
                                        else
                                          v135 = v98 + 44LL * *(unsigned int *)(v99 + 4 * v29);
                                        if ( !v135 )
                                        {
LABEL_118:
                                          LODWORD(v29) = MODE_UNION_LIST::AddMode(v97, &v217, v29);
                                          if ( (int)v29 >= 0 )
                                            goto LABEL_119;
                                          goto LABEL_196;
                                        }
                                        if ( (*(_DWORD *)(v135 + 36) & 2) != 0 )
                                        {
                                          MODE_UNION_LIST::RemoveMode(v97, v29);
                                          MODE_UNION_LIST::AddMode(v97, &v217, v29);
                                        }
                                        else
                                        {
                                          UpgradeDispModeFlags(v135, &v217);
                                        }
LABEL_119:
                                        if ( (_BYTE)v193 )
                                        {
                                          ++v217.IntegerRefreshRate;
                                          *(_DWORD *)&v217.Flags |= 2u;
                                          LODWORD(v29) = MODE_UNION_LIST::AddUniqueMode(v97, &v217);
                                          if ( (int)v29 < 0 )
                                          {
LABEL_196:
                                            v51 = v208;
                                            v37 = v203;
                                            v50 = v213;
                                            goto LABEL_205;
                                          }
                                        }
                                        v6 = v218;
                                        v37 = v203;
LABEL_121:
                                        LODWORD(v75) = v196;
LABEL_122:
                                        if ( ++v87 > 4 )
                                        {
                                          if ( *(_DWORD *)(v6 + 52) > 1u )
                                          {
                                            v156 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v6 + 32) + 88LL))(
                                                     *(_QWORD *)(v6 + 24),
                                                     *(unsigned int *)(v6 + 40),
                                                     (unsigned int)v75,
                                                     0LL);
                                            v29 = v156;
                                            if ( v156 < 0 )
                                            {
                                              v159 = (_QWORD *)WdLogNewEntry5_WdError(v158, v157);
                                              v159[3] = v29;
                                              v159[4] = *(_QWORD *)(v6 + 24);
                                              v159[5] = *(unsigned int *)(v6 + 40);
                                              v159[6] = (unsigned int)v75;
                                              WdLogEvent5_WdError(v159);
                                              v51 = v208;
                                              v50 = v213;
                                              goto LABEL_205;
                                            }
                                          }
                                          v72 = v197;
                                          v73 = v194;
LABEL_76:
                                          v71 = v190;
                                          ++v72;
                                          ++v73;
                                          v197 = v72;
                                          v194 = v73;
                                          if ( v72 >= 5 )
                                          {
LABEL_77:
                                            v5 = v196;
                                            v107 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v6 + 32) + 72LL))(
                                                     *(_QWORD *)(v6 + 24),
                                                     *(unsigned int *)(v6 + 40),
                                                     v196,
                                                     0LL);
                                            v29 = v107;
                                            if ( v107 >= 0 )
                                            {
                                              v51 = v208;
                                              v37 = v203;
                                              v50 = v213;
                                              goto LABEL_79;
                                            }
                                            v166 = (_QWORD *)WdLogNewEntry5_WdError(v109, v108);
                                            v166[3] = v29;
                                            v166[4] = *(unsigned int *)(v6 + 40);
                                            v166[5] = *(_QWORD *)(v6 + 24);
                                            v166[6] = v5;
                                            WdLogEvent5_WdError(v166);
                                            v51 = v208;
                                            v37 = v203;
                                            v50 = v213;
LABEL_205:
                                            if ( v207[0] )
                                              v209(v210, v51);
                                            if ( v212[0] )
                                              v214(v215, v50);
                                            v30 = v223;
                                            goto LABEL_100;
                                          }
                                          goto LABEL_34;
                                        }
                                        goto LABEL_41;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else
                            {
                              IntegerRefreshRate = Format;
                            }
                          }
                          else
                          {
                            IntegerRefreshRate = v217.Height;
                          }
                        }
                        else
                        {
                          IntegerRefreshRate = v217.Width;
                        }
                        v102 = IntegerRefreshRate - v104;
                        if ( v102 )
                        {
                          v134 = v29 - 1;
                          if ( v102 >= 0 )
                            v134 = v100;
                          v100 = v134;
                          if ( v102 >= 0 )
                            v101 = v29 + 1;
                          if ( v101 <= v134 )
                            continue;
                        }
                        goto LABEL_112;
                      }
                    }
LABEL_202:
                    v161 = WdLogNewEntry5_WdError(v55, v54);
                  }
                  *(_QWORD *)(v161 + 24) = v29;
                  v169 = (_QWORD *)v161;
LABEL_204:
                  WdLogEvent5_WdError(v169);
                  goto LABEL_205;
                }
LABEL_81:
                v111 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v198 + 56))(v50, 0LL);
                v29 = v111;
                if ( v111 < 0 )
                {
                  v167 = (_QWORD *)WdLogNewEntry5_WdError(v113, v112);
                  v167[3] = v29;
                  v167[4] = v50;
                  if ( v51 )
                    v168 = *v51;
                  else
                    v168 = 0xFFFFFFFFLL;
                  v167[5] = v168;
                  v169 = v167;
                  goto LABEL_204;
                }
                if ( v207[0] )
                  v209(v210, v51);
                if ( v212[0] )
                  v214(v215, v50);
                v30 = v223;
              }
            }
            v220 = 0LL;
            v114 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v199 + 16))(v30, v37, &v220);
            v29 = v114;
            if ( v114 < 0 )
            {
LABEL_210:
              v170 = WdLogNewEntry5_WdError(v49, v48);
              *(_QWORD *)(v170 + 24) = v29;
              WdLogEvent5_WdError(v170);
              goto LABEL_100;
            }
            DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
              (__int64)v202,
              v220,
              *(_QWORD *)(v199 + 32),
              v30);
            v37 = v203;
          }
          while ( v203 );
        }
        v115 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v199 + 48))(v30, 0LL);
        v29 = v115;
        if ( v115 < 0 )
        {
          v171 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
          v171[3] = v29;
          v171[4] = v30;
          v171[5] = 0xFFFFFFFFLL;
          WdLogEvent5_WdError(v171);
        }
        else
        {
          v118 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(v6 + 8));
          v119 = v228;
          *(_BYTE *)(v118 + 296) = 0;
          v120 = *v119;
          if ( !*v119 )
          {
            v121 = *(_DWORD *)(v6 + 80);
            if ( v121 )
            {
              v123 = v121;
              v122 = 44LL * v121;
              if ( !is_mul_ok(v123, 0x2CuLL) )
                v122 = -1LL;
              v124 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v122, 0x4B677844u, PagedPool);
              *v119 = v124;
              if ( !v124 )
              {
                v172 = WdLogNewEntry5_WdLowResource(0LL, v125, v126, v127);
                *(_QWORD *)(v172 + 24) = 1181LL;
                WdLogEvent5_WdLowResource(v172);
                LODWORD(v29) = -1073741801;
                goto LABEL_100;
              }
              memset(v124, 0, 44LL * *(unsigned int *)(v6 + 80));
              v120 = *v119;
            }
          }
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (const void **)(v6 + 64),
                          *(unsigned int *)(v6 + 80),
                          v120,
                          v229);
          v131 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v173 = WdLogNewEntry5_WdAssertion(v130, v129);
            *(_QWORD *)(v173 + 24) = v131;
            WdLogEvent5_WdAssertion(v173);
          }
          v132 = (struct _D3DKMT_DISPLAYMODE **)v221;
          if ( v221 )
          {
            if ( *v221 )
            {
              operator delete[](*v221);
              *v132 = 0LL;
            }
            v174 = *(unsigned int *)(v6 + 120);
            if ( (_DWORD)v174 )
            {
              v175 = 44 * v174;
              if ( !is_mul_ok(v174, 0x2CuLL) )
                v175 = -1LL;
              v176 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v175, 0x4B677844u, PagedPool);
              *v132 = v176;
              if ( v176 )
              {
                memset(v176, 0, 44LL * *(unsigned int *)(v6 + 120));
                v181 = MODE_UNION_LIST::GetUniqueModes(
                         (const void **)(v6 + 104),
                         *(unsigned int *)(v6 + 120),
                         *v132,
                         v230);
                v184 = v181;
                if ( v181 < 0 )
                {
                  v185 = WdLogNewEntry5_WdAssertion(v183, v182);
                  *(_QWORD *)(v185 + 24) = v184;
                  WdLogEvent5_WdAssertion(v185);
                }
              }
              else
              {
                v180 = WdLogNewEntry5_WdLowResource(0LL, v177, v178, v179);
                *(_QWORD *)(v180 + 24) = 1213LL;
                WdLogEvent5_WdLowResource(v180);
              }
            }
          }
          LODWORD(v29) = 0;
        }
LABEL_100:
        if ( v202[0] )
          v204(v205, v37);
      }
      if ( v222[0] )
        v224(v225, v30);
    }
    return (unsigned int)v29;
  }
}
