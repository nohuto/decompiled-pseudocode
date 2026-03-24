/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02B0498
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFDCC (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3A4 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000D44C (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000D4F8 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F130 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C014D020 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C014D128 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A999C (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C02AFBAC (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C02AFD5C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFF8C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02B00AC (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C02B0278 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02F408C (MonitorGetEdidBaseBlockPtr.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rsi
  DpiInternal *v7; // r15
  DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _OWORD *v13; // rbx
  __int64 (__fastcall *v14)(DpiInternal *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  DpiInternal *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned int v31; // edi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // esi
  bool v42; // r14
  int VideoOutputTechnology; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  _QWORD *v47; // rax
  int v48; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  _QWORD *v54; // rax
  int v55; // r13d
  int v56; // r12d
  UINT v57; // r14d
  UINT cy; // esi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  const struct _DXGDMM_VIDPN_INTERFACE *v62; // r15
  int v63; // eax
  unsigned int v64; // r15d
  unsigned int v65; // ebx
  char v66; // al
  const struct _DXGDMM_VIDPN_INTERFACE *v67; // r13
  __int64 v68; // rdx
  __int64 v69; // rax
  struct tagSIZE v70; // rdx
  int IsAudioAvailableInEdid; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // ebx
  __int64 v75; // rax
  char cx; // si
  __int64 v77; // rax
  unsigned int v78; // ecx
  unsigned int v79; // eax
  __int64 v80; // rdx
  struct _DPI_INFORMATION *v81; // r9
  _QWORD *v82; // rax
  struct tagSIZE v83; // r8
  unsigned int v84; // eax
  __int64 v85; // rax
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  struct _D3DKMDT_2DREGION *v91; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v92; // [rsp+48h] [rbp-C0h] BYREF
  void *v93; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v95; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v97; // [rsp+70h] [rbp-98h] BYREF
  __int64 v98; // [rsp+78h] [rbp-90h] BYREF
  int v99; // [rsp+80h] [rbp-88h]
  int v100; // [rsp+84h] [rbp-84h]
  unsigned int v101; // [rsp+88h] [rbp-80h]
  __int64 v102; // [rsp+90h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPN__ *v103; // [rsp+98h] [rbp-70h] BYREF
  __int64 v104; // [rsp+A0h] [rbp-68h] BYREF
  int v105; // [rsp+A8h] [rbp-60h]
  BOOL v106; // [rsp+B0h] [rbp-58h]
  int v107; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v108; // [rsp+B8h] [rbp-50h] BYREF
  char v109; // [rsp+C0h] [rbp-48h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v110; // [rsp+C8h] [rbp-40h]
  void (__fastcall *v111)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+D0h] [rbp-38h]
  __int64 v112; // [rsp+D8h] [rbp-30h]
  int v113; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v114; // [rsp+E8h] [rbp-20h]
  DpiInternal *v115; // [rsp+F0h] [rbp-18h]
  char v116; // [rsp+F8h] [rbp-10h] BYREF
  DpiInternal *v117; // [rsp+100h] [rbp-8h]
  void (__fastcall *v118)(__int64, DpiInternal *); // [rsp+108h] [rbp+0h]
  __int64 v119; // [rsp+110h] [rbp+8h]
  int v120; // [rsp+118h] [rbp+10h]
  _OWORD v121[6]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int8 *v122; // [rsp+188h] [rbp+80h]
  __int128 v123; // [rsp+190h] [rbp+88h]
  __int128 v124; // [rsp+1A0h] [rbp+98h]
  _BYTE v125[96]; // [rsp+1B8h] [rbp+B0h] BYREF

  v6 = (unsigned int)a3;
  v7 = a2;
  v107 = a3;
  v101 = a4;
  v115 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4);
  if ( Current && DXGPROCESS::IsRemoteConnection(Current) )
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v13) = -1073741637;
    *(_QWORD *)(v12 + 24) = v7;
    *(_QWORD *)(v12 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v13;
  }
  v14 = (__int64 (__fastcall *)(DpiInternal *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
  v103 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0;
  v116 = 0;
  v97 = 0LL;
  v15 = v14(v7, &v97, &v103);
  v13 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v18[3] = v7;
LABEL_6:
    v18[4] = v13;
LABEL_99:
    WdLogEvent5_WdError(v18);
    goto LABEL_108;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v116,
    v97,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v19 = v117;
  v98 = 0LL;
  v102 = 0LL;
  v20 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v103)(v117, &v98, &v102);
  v13 = (_OWORD *)v20;
  if ( v20 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v18[3] = v19;
    goto LABEL_6;
  }
  v108 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v102)(v98, (unsigned int)v6, &v108);
  v13 = (_OWORD *)v23;
  if ( v23 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v18[3] = v6;
    v26 = v98;
LABEL_98:
    v18[4] = v26;
    v18[5] = v13;
    goto LABEL_99;
  }
  memset(v125, 0, 0x5CuLL);
  v29 = v108;
  v13 = (_OWORD *)a6;
  v30 = 0LL;
  v114 = 0LL;
  v124 = *(_OWORD *)&v125[64];
  v31 = (v108 > 1) | *(_DWORD *)(a6 + 92) & 0x20;
  *(_DWORD *)&v125[92] = v31;
  if ( !v108 )
  {
    v123 = *(_OWORD *)&v125[16];
LABEL_101:
    if ( (v31 & 2) == 0
      || (v83 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v125[80]), 4)),
          v83.cx == 1234568) )
    {
      v84 = *(_DWORD *)&v125[8];
    }
    else
    {
      v84 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              *(__int64 *)&v125[32],
              v83,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v28);
      *(_DWORD *)&v125[8] = v84;
    }
    if ( !v84 )
    {
      v85 = WdLogNewEntry5_WdAssertion(v29, v27);
      *(_QWORD *)(v85 + 24) = 1058LL;
      WdLogEvent5_WdAssertion(v85);
    }
    v86 = v123;
    *v13 = *(_OWORD *)v125;
    v87 = *(_OWORD *)&v125[32];
    v13[1] = v86;
    v88 = *(_OWORD *)&v125[48];
    v13[2] = v87;
    v89 = v124;
    v13[3] = v88;
    v13[4] = v89;
    v13[5] = *(_OWORD *)&v125[80];
    LODWORD(v13) = 0;
    goto LABEL_108;
  }
  v123 = *(_OWORD *)&v125[16];
  while ( 1 )
  {
    LODWORD(v93) = -1;
    BYTE2(v92.cx) = 0;
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, void **))(v102 + 8))(
            v98,
            (unsigned int)v6,
            v30,
            &v93);
    v13 = (_OWORD *)v32;
    if ( v32 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
      v26 = (unsigned int)v6;
      v18[3] = v30;
      goto LABEL_98;
    }
    v96 = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v102 + 24);
    v110 = 0LL;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0;
    v109 = 0;
    v36 = v35(v98, (unsigned int)v6, (unsigned int)v93, &v96);
    v13 = (_OWORD *)v36;
    if ( v36 < 0 )
      break;
    v39 = v96;
    if ( !v96 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v38, 0LL);
      *(_QWORD *)(v40 + 24) = 790LL;
      WdLogEvent5_WdAssertion(v40);
      v39 = v96;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v109,
      v39,
      *(_QWORD *)(v102 + 32),
      v98);
    v99 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v110 + 5));
    LOBYTE(v92.cx) = 0;
    v41 = v99;
    v92.cy = -2;
    v42 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(
                              v7,
                              (unsigned int)v93,
                              (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v92.cy,
                              0LL);
    v46 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v42 = IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v92.cy);
      LOBYTE(v92.cx) = v42;
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v47[3] = v7;
      v47[4] = (unsigned int)v93;
      v47[5] = v46;
      WdLogEvent5_WdError(v47);
    }
    v106 = v42;
    v95 = 0LL;
    v100 = 0;
    v48 = (v31 ^ (v31 | (4 * v42))) & 4 ^ v31;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, (unsigned int)v93);
    v122 = EdidBaseBlockPtr;
    HIBYTE(v92.cx) = 0;
    v104 = 0LL;
    v105 = 0;
    PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v104);
    v53 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v92.cx) = 1;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
      v54[3] = v7;
      v54[4] = (unsigned int)v93;
      v54[5] = v53;
      WdLogEvent5_WdError(v54);
    }
    v55 = v104;
    v56 = HIDWORD(v104);
    v97 = v104;
    if ( ((v41 - 2) & 0xFFFFFFFD) == 0 )
    {
      v55 = HIDWORD(v104);
      v97 = __PAIR64__(v104, HIDWORD(v104));
      v56 = v104;
    }
    if ( !EdidBaseBlockPtr )
    {
      v57 = HIDWORD(v95);
      v48 |= 8u;
      cy = v95;
LABEL_38:
      BYTE2(v92.cx) = (*((_BYTE *)v7 + 348) & 0x20) != 0;
      goto LABEL_39;
    }
    v92.cy = 0;
    LODWORD(v94) = 0;
    if ( (int)EDID_V1_GetPhysicalSize(v52, EdidBaseBlockPtr, &v92.cy, (unsigned int *)&v94) < 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v60, v59);
      *(_QWORD *)(v61 + 24) = 849LL;
      WdLogEvent5_WdAssertion(v61);
    }
    cy = v92.cy;
    v57 = v94;
    v95 = __PAIR64__(v94, v92.cy);
    if ( ((v99 - 2) & 0xFFFFFFFD) == 0 )
    {
      cy = v94;
      v95 = __PAIR64__(v92.cy, v94);
      v57 = v92.cy;
    }
    if ( cy && v57 )
    {
      if ( (int)(cy * v57) <= 16000 && !LOBYTE(v92.cx) )
      {
        v48 |= 0x40u;
        v100 = 1;
        v57 = 0;
        v95 = 0LL;
        cy = 0;
        goto LABEL_38;
      }
    }
    else
    {
      v57 = 0;
      v95 = 0LL;
      cy = 0;
    }
    if ( !cy )
      goto LABEL_38;
LABEL_39:
    v62 = v110;
    v96 = 0LL;
    LODWORD(v13) = DpiInternal::GetCurrentSourceResolution(
                     v117,
                     v103,
                     v110,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v96);
    if ( (int)v13 < 0 )
      goto LABEL_95;
    v94 = 0LL;
    BYTE1(v92.cx) = 0;
    LODWORD(v13) = DpiInternal::GetCurrentTargetResolution(
                     v117,
                     v103,
                     v62,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v94,
                     (struct _D3DKMDT_2DREGION *)((char *)&v92 + 1));
    if ( (int)v13 < 0 )
      goto LABEL_95;
    v63 = HIDWORD(v94);
    if ( ((v99 - 2) & 0xFFFFFFFD) != 0 )
    {
      v92.cy = HIDWORD(v94);
      v63 = v94;
    }
    else
    {
      v92.cy = v94;
    }
    v64 = v96;
    LODWORD(v94) = v63;
    if ( (v48 & 1) != 0 && v55 && v56 )
    {
      v65 = HIDWORD(v96);
      if ( BYTE1(v92.cx) )
        v65 = HIDWORD(v96) >> 1;
      if ( (unsigned int)v96 >= 2 * v55 || v65 >= 2 * v56 )
        v66 = 2;
      else
        v66 = 0;
      v48 ^= ((unsigned __int8)v48 ^ (unsigned __int8)(v48 | v66)) & 2;
      if ( BYTE1(v92.cx) )
        v65 *= 2;
    }
    else
    {
      v65 = HIDWORD(v96);
    }
    memset(v121, 0, sizeof(v121));
    v67 = v110;
    DWORD1(v121[5]) = a5;
    *(_QWORD *)&v121[2] = __PAIR64__(v65, v96);
    v68 = *((unsigned int *)v110 + 3);
    if ( *((_DWORD *)v110 + 3) != 1 )
    {
      switch ( *((_DWORD *)v110 + 3) )
      {
        case 2:
          goto LABEL_84;
        case 3:
          break;
        case 4:
LABEL_84:
          if ( (_DWORD)v68 == 4 )
          {
            v78 = v94;
            if ( cy * v65 <= v57 * (unsigned int)v96 )
            {
              v64 = v94;
              v65 = v65 * (unsigned int)v94 / (unsigned int)v96;
            }
            else
            {
              v79 = (int)v96 * v92.cy / v65;
              v65 = v92.cy;
              v64 = v79;
            }
          }
          else
          {
            v78 = v94;
          }
          cy = cy * v64 / v78;
          v57 = v57 * v65 / v92.cy;
          break;
        default:
          if ( *((_DWORD *)v110 + 3) != 5 )
          {
            if ( *((_DWORD *)v110 + 3) == 255 )
              break;
            v69 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)v110 + 3) - 5), v68);
            *(_QWORD *)(v69 + 24) = *((int *)v67 + 3);
            WdLogEvent5_WdAssertion(v69);
          }
          v48 |= 0x100u;
          break;
      }
    }
    v70 = (struct tagSIZE)*((unsigned int *)v67 + 5);
    *((_QWORD *)&v121[1] + 1) = __PAIR64__(v57, cy);
    if ( (unsigned int)(v70.cx - 5) <= 0xB )
      v70 = (struct tagSIZE)(unsigned int)((v70.cx - 1) % 4 + 1);
    v31 = (((v70.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v48 & 0xFFFFFF7F;
    *(_DWORD *)&v125[92] = v31;
    if ( !BYTE2(v92.cx) && !v100 && v122 && HIBYTE(v92.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(v115, (void *)(unsigned int)v93);
      LODWORD(v91) = (unsigned __int8)v105;
      v31 = v31 & 0xFFFFFFEF | (16
                              * (unsigned __int8)Win81::DetermineViewDistance(
                                                   v115,
                                                   &v95,
                                                   (const struct tagSIZE *)v106,
                                                   (int)&v97,
                                                   (const struct tagSIZE *)v91,
                                                   IsAudioAvailableInEdid,
                                                   (unsigned int *)&v121[4]));
      v74 = v121[4];
      *(_DWORD *)&v125[92] = v31;
      if ( !LODWORD(v121[4]) )
      {
        v75 = WdLogNewEntry5_WdAssertion(v73, v72);
        *(_QWORD *)(v75 + 24) = 1014LL;
        WdLogEvent5_WdAssertion(v75);
      }
LABEL_72:
      cx = v92.cx;
      goto LABEL_73;
    }
    v74 = 0;
    LODWORD(v121[4]) = 0;
    if ( !BYTE2(v92.cx) )
      goto LABEL_72;
    cx = v92.cx;
    if ( LOBYTE(v92.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v121[2],
        v70,
        (__int64)v121,
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v101, v80, (__int64)v121, v81);
      v31 |= 0x400u;
      *(_DWORD *)&v125[92] = v31;
      goto LABEL_74;
    }
LABEL_73:
    Win81::FillDpiInfo(
      (Win81 *)((char *)&v121[1] + 8),
      (const struct tagSIZE *)&v121[2],
      (const struct tagSIZE *)v74,
      v101,
      (unsigned int)v91,
      (__int64)v121);
LABEL_74:
    if ( HIDWORD(v121[5]) )
    {
      v77 = WdLogNewEntry5_WdAssertion(v29, v27);
      *(_QWORD *)(v77 + 24) = 1031LL;
      WdLogEvent5_WdAssertion(v77);
    }
    HIDWORD(v121[5]) = v31;
    if ( cx
      || (v31 & 4) == 0
      && (v28 = 2LL,
          v27 = (unsigned int)((*(_DWORD *)&v125[56] + *(_DWORD *)&v125[60]) >> 31),
          LODWORD(v27) = (*(_DWORD *)&v125[56] + *(_DWORD *)&v125[60]) % 2,
          (*(_DWORD *)&v125[56] + *(_DWORD *)&v125[60]) / 2 <= (DWORD2(v121[3]) + HIDWORD(v121[3])) / 2) )
    {
      *(_OWORD *)v125 = v121[0];
      v123 = v121[1];
      *(_OWORD *)&v125[32] = v121[2];
      v124 = v121[4];
      *(_OWORD *)&v125[80] = v121[5];
      v31 = HIDWORD(v121[5]);
      *(_OWORD *)&v125[48] = v121[3];
    }
    if ( v109 )
      v111(v112, v67);
    v7 = v115;
    v30 = v114 + 1;
    LODWORD(v6) = v107;
    v114 = v30;
    if ( v30 >= v108 )
    {
      v13 = (_OWORD *)a6;
      goto LABEL_101;
    }
  }
  v82 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
  v82[3] = (unsigned int)v6;
  v82[4] = (unsigned int)v93;
  v82[5] = v13;
  WdLogEvent5_WdError(v82);
  v62 = v110;
LABEL_95:
  if ( v109 )
    v111(v112, v62);
LABEL_108:
  if ( v116 )
    v118(v119, v117);
  return (unsigned int)v13;
}
