/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00E12BC
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E108C (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C00019D0 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0001A24 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x1C0001A64 (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E16E0 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     DxgkQueryDmmInterface @ 0x1C00EC7C8 (DxgkQueryDmmInterface.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C012C790 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01303F0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C013E304 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0151550 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C025C234 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C025E810 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C029F458 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02DC790 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        __int64 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  char v5; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 VidPnSourceId; // rsi
  int DmmInterface; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  struct _DXGDMM_INTERFACE *v15; // r13
  struct D3DKMDT_HVIDPN__ *v16; // r14
  __int64 (__fastcall *v17)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  ADAPTER_DISPLAY *v24; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v26; // r12
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r15d
  char v31; // r15
  __int64 v32; // r9
  bool v33; // zf
  unsigned int *v34; // r13
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGGLOBAL *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct DXGGLOBAL *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct DXGGLOBAL *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGGLOBAL *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct DXGGLOBAL *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct DXGGLOBAL *v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DXGGLOBAL *v59; // r12
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  struct DXGGLOBAL *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  __int64 v75; // rdx
  char v76; // r13
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r12
  _QWORD *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  unsigned int v91; // r14d
  __int64 v92; // r15
  __int64 v93; // r12
  __int64 v94; // rcx
  __int64 v95; // r8
  _QWORD *v96; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v97; // [rsp+20h] [rbp-E0h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v98; // [rsp+28h] [rbp-D8h]
  unsigned int v99[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v100[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v101[8]; // [rsp+40h] [rbp-C0h]
  __int64 v102; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v103; // [rsp+50h] [rbp-B0h]
  unsigned int *v104; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v105; // [rsp+60h] [rbp-A0h]
  _BYTE v106[4]; // [rsp+70h] [rbp-90h] BYREF
  int v107; // [rsp+74h] [rbp-8Ch] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v108; // [rsp+78h] [rbp-88h] BYREF
  struct DXGGLOBAL *v109; // [rsp+80h] [rbp-80h]
  unsigned __int64 v110; // [rsp+88h] [rbp-78h] BYREF
  struct DXGGLOBAL *v111; // [rsp+90h] [rbp-70h]
  struct _DXGDMM_INTERFACE *v112; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v113; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v114; // [rsp+A8h] [rbp-58h] BYREF
  void *v115; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGGLOBAL *v116; // [rsp+B8h] [rbp-48h]
  __int64 v117; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v118[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v119; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v120)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v121; // [rsp+E0h] [rbp-20h]
  int v122; // [rsp+E8h] [rbp-18h]
  DXGADAPTER *v123; // [rsp+F0h] [rbp-10h] BYREF
  int v124; // [rsp+F8h] [rbp-8h]
  int v125; // [rsp+FCh] [rbp-4h]
  char v126; // [rsp+100h] [rbp+0h]
  void *v127[2]; // [rsp+108h] [rbp+8h]
  __int64 v128; // [rsp+118h] [rbp+18h]
  int v129; // [rsp+120h] [rbp+20h]
  char v130; // [rsp+124h] [rbp+24h]
  void *v131; // [rsp+128h] [rbp+28h]
  _QWORD v132[5]; // [rsp+130h] [rbp+30h] BYREF
  int v133; // [rsp+158h] [rbp+58h]
  bool v134; // [rsp+15Ch] [rbp+5Ch]
  char v135; // [rsp+15Dh] [rbp+5Dh]
  int v136; // [rsp+160h] [rbp+60h]
  int v137; // [rsp+164h] [rbp+64h]
  char v138; // [rsp+168h] [rbp+68h]
  void *v139[2]; // [rsp+170h] [rbp+70h]
  __int64 v140; // [rsp+180h] [rbp+80h]
  int v141; // [rsp+188h] [rbp+88h]
  char v142; // [rsp+18Ch] [rbp+8Ch]
  void *v143[2]; // [rsp+190h] [rbp+90h]
  void *v144[2]; // [rsp+1A0h] [rbp+A0h]
  int v145; // [rsp+1B0h] [rbp+B0h]
  char v146; // [rsp+1B4h] [rbp+B4h]
  void *v147; // [rsp+1B8h] [rbp+B8h]
  _BYTE v148[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v149[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v150[16]; // [rsp+210h] [rbp+110h] BYREF

  v109 = (struct DXGGLOBAL *)a4;
  v111 = (struct DXGGLOBAL *)a3;
  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v148,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v148);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9, v8) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v112 = 0LL;
  DmmInterface = DxgkQueryDmmInterface(a1);
  v14 = DmmInterface;
  if ( DmmInterface < 0 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v72[3] = v14;
    v72[4] = a3->hAdapter;
    v72[5] = a1;
    v72[6] = VidPnSourceId;
    WdLogEvent5_WdError(v72);
    return (unsigned int)v14;
  }
  v15 = v112;
  v108 = 0LL;
  v117 = 0LL;
  v16 = 0LL;
  v119 = 0LL;
  v17 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v112 + 6);
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0;
  v118[0] = 0;
  v18 = v17(a1, &v117, &v108);
  v14 = v18;
  if ( v18 < 0 )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v73[3] = a1;
    v73[4] = v14;
    goto LABEL_43;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v118,
    v117,
    *((_QWORD *)v15 + 8),
    (__int64)a1);
  v16 = v119;
  v113 = 0LL;
  v114 = 0LL;
  v21 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v108)(
          v119,
          &v113,
          &v114);
  v14 = v21;
  if ( v21 < 0 )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v73[3] = v14;
    v73[4] = v16;
    v73[5] = a1;
    v73[6] = VidPnSourceId;
    v73[7] = v108;
    goto LABEL_43;
  }
  v24 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 337);
  v14 = 0LL;
  v110 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v24, VidPnSourceId);
  v26 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || v5
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v26),
        v75 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 112LL) + 3968 * VidPnSourceId,
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)v75) )
  {
LABEL_6:
    *(__m128i *)v149 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v149[4] = *(_OWORD *)v149;
    *(_OWORD *)&v149[8] = *(_OWORD *)v149;
    *(_OWORD *)&v149[12] = *(_OWORD *)v149;
    v27 = PrepareUnpinnedPathsFromSource(
            v15,
            a1,
            v16,
            v108,
            v113,
            v114,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v110,
            (unsigned int (*)[16])v149,
            0LL);
    v14 = v27;
    v30 = -1071774925;
    if ( v27 == -1071774925 || (v30 = -1071774886, v27 == -1071774886) )
    {
      v89 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v89 + 24) = VidPnSourceId;
      *(_QWORD *)(v89 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v89);
      LODWORD(v14) = v30;
      goto LABEL_15;
    }
    v31 = 0;
    if ( v27 >= 0 )
    {
      v14 = v110;
      goto LABEL_10;
    }
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v73[3] = VidPnSourceId;
    v73[4] = a1;
    v73[5] = v14;
LABEL_43:
    WdLogEvent5_WdError(v73);
    goto LABEL_15;
  }
  v76 = 0;
  do
  {
    v77 = *((_QWORD *)PrimaryDisplaySource + 1);
    v106[0] = 0;
    if ( *(DXGADAPTER **)(v77 + 16) != a1 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v77, v75);
      *(_QWORD *)(v78 + 24) = 4904LL;
      WdLogEvent5_WdAssertion(v78);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (_DWORD)a1,
                *((_DWORD *)PrimaryDisplaySource + 267),
                0,
                0,
                0LL,
                (__int64)v106,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v80, v79);
      *(_QWORD *)(v81 + 24) = 4918LL;
      WdLogEvent5_WdAssertion(v81);
    }
    if ( v14 )
    {
      if ( v76 != v106[0] )
        goto LABEL_36;
      v82 = *(unsigned int *)(*((_QWORD *)a1 + 337) + 80LL);
      if ( v14 >= v82 )
      {
        v83 = WdLogNewEntry5_WdAssertion(v82, v79);
        *(_QWORD *)(v83 + 24) = 4929LL;
        WdLogEvent5_WdAssertion(v83);
      }
      v149[v14++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v14 = 1LL;
      v76 = v106[0];
      v150[0] = *((_DWORD *)PrimaryDisplaySource + 267);
      v149[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v110 = v14;
LABEL_36:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v26, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v14 <= 1 )
  {
    v15 = v112;
    goto LABEL_6;
  }
  v31 = 1;
  v84 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v149, v14, v16, v150);
  v87 = v84;
  if ( v84 < 0 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85);
    LODWORD(v14) = -1071775483;
    v88[3] = VidPnSourceId;
    v88[4] = a1;
    v88[5] = v87;
    v88[6] = -1071775483LL;
    WdLogEvent5_WdError(v88);
    goto LABEL_15;
  }
LABEL_10:
  v132[0] = a1;
  v132[1] = v16;
  v135 = 1;
  v137 = 0;
  v138 = 0;
  v141 = 0;
  v97 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)(((unsigned __int64)v109 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v109 >> 64));
  v142 = 1;
  v145 = 0;
  v32 = ((unsigned __int64)v109 + 8) & -(__int64)(v109 != 0LL);
  v146 = 1;
  v33 = *((_QWORD *)a1 + 338) == 0LL;
  v34 = (unsigned int *)((char *)v111 + 16);
  v132[2] = v108;
  v136 = -1;
  v132[3] = v113;
  v132[4] = v114;
  v133 = *((_DWORD *)v111 + 1);
  v140 = 0LL;
  v134 = v33;
  v147 = 0LL;
  v109 = (struct DXGGLOBAL *)((char *)v111 + 8);
  *(_OWORD *)v139 = 0LL;
  *(_OWORD *)v143 = 0LL;
  *(_OWORD *)v144 = 0LL;
  v35 = (int)OBTAIN_MODES_ON_SOURCE::operator()((unsigned int)v132, (int)v111 + 8, (int)v111 + 16, v32, (__int64)v97);
  operator delete[](v144[0]);
  operator delete[](v147);
  operator delete[](v139[1]);
  operator delete[](v143[0]);
  if ( (int)v35 < 0 )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
    v90[3] = v35;
    v90[4] = v16;
    v90[5] = a1;
    v90[6] = VidPnSourceId;
    v90[7] = v14;
    WdLogEvent5_WdWarning(v90);
    LODWORD(v14) = v35;
  }
  else
  {
    if ( v31 )
    {
      v91 = 0;
      if ( v14 )
      {
        v37 = 0LL;
        do
        {
          v92 = v150[v37];
          v115 = 0LL;
          v107 = 0;
          v123 = a1;
          v124 = *((_DWORD *)v111 + 1);
          v129 = 0;
          v131 = 0LL;
          v128 = 0LL;
          v125 = v92;
          v126 = 1;
          *(_OWORD *)v127 = 0LL;
          v130 = 1;
          v93 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v123, &v115, &v107);
          operator delete[](v127[1]);
          operator delete[](v131);
          if ( (int)v93 < 0
            || v115
            && (v93 = (int)CombineModeList((_DWORD)v34, (_DWORD)v109, v107, (_DWORD)v115, 0),
                operator delete[](v115),
                (int)v93 < 0) )
          {
            v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v36, v95);
            v96[3] = VidPnSourceId;
            v96[4] = v92;
            v96[5] = a1;
            v96[6] = v93;
            WdLogEvent5_WdWarning(v96);
          }
          v37 = ++v91;
        }
        while ( v91 < v14 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v37, v36) + 1, *v34);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v41 = DXGGLOBAL::GetGlobal(v40, v39);
      v44 = DXGGLOBAL::GetGlobal(v43, v42);
      v47 = DXGGLOBAL::GetGlobal(v46, v45);
      v50 = DXGGLOBAL::GetGlobal(v49, v48);
      v53 = DXGGLOBAL::GetGlobal(v52, v51);
      v56 = DXGGLOBAL::GetGlobal(v55, v54);
      v59 = DXGGLOBAL::GetGlobal(v58, v57);
      v109 = DXGGLOBAL::GetGlobal(v61, v60);
      v116 = DXGGLOBAL::GetGlobal(v63, v62);
      v111 = DXGGLOBAL::GetGlobal(v65, v64);
      v68 = DXGGLOBAL::GetGlobal(v67, v66);
      LODWORD(v105) = *((_DWORD *)v44 + 19);
      LODWORD(v104) = *((_DWORD *)v47 + 18);
      LODWORD(v103) = *((_DWORD *)v50 + 15);
      LODWORD(v102) = *((_DWORD *)v53 + 14);
      *(_DWORD *)v101 = *((_DWORD *)v56 + 11);
      *(_DWORD *)v100 = *((_DWORD *)v59 + 10);
      v99[0] = *((_DWORD *)v109 + 9);
      LODWORD(v98) = *((_DWORD *)v116 + 6);
      McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
        *(unsigned int *)v100,
        v69,
        v70,
        *((_QWORD *)v68 + 1),
        *((_QWORD *)v111 + 2),
        v98,
        *(_QWORD *)v99,
        *(_QWORD *)v100,
        *(_QWORD *)v101,
        v102,
        v103,
        v104,
        v105,
        *((_QWORD *)v41 + 10));
    }
    v16 = v119;
    LODWORD(v14) = 0;
  }
LABEL_15:
  if ( v118[0] )
    v120(v121, v16);
  return (unsigned int)v14;
}
