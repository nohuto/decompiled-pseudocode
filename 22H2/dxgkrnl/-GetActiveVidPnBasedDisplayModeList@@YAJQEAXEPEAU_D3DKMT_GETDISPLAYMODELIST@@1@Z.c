/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C021D210
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C021D070 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0013E1C (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0020540 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x1C0020580 (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0020698 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01863CC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C019D414 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C01DADD8 (DxgkQueryDmmInterface.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01F69F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01F6D58 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01F7020 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FF050 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C030106C (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0355520 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C03AC7B8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  union _LARGE_INTEGER *Global; // rax
  __int64 VidPnSourceId; // rdi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r14
  struct _DXGDMM_INTERFACE *v11; // rbx
  struct D3DKMDT_HVIDPN__ *v12; // r12
  __int64 (__fastcall *v13)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v14; // eax
  int v15; // eax
  ADAPTER_DISPLAY *v16; // rcx
  unsigned __int64 v17; // rbx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v19; // r13
  char v20; // r13
  int v21; // eax
  int v22; // ebx
  bool v23; // cl
  unsigned int *p_hAdapter; // rax
  void **p_pModeList; // r9
  UINT *v26; // r12
  int v27; // r13d
  int v28; // r12d
  int v29; // r15d
  int v30; // r14d
  unsigned int v31; // esi
  int v32; // edi
  __int64 v33; // rbx
  struct DXGGLOBAL *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  const wchar_t *v39; // r9
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  char v41; // r12
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rbx
  unsigned int v45; // r14d
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // r13
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v49; // [rsp+20h] [rbp-E0h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v50; // [rsp+28h] [rbp-D8h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v51; // [rsp+28h] [rbp-D8h]
  unsigned int v52[2]; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v54[8]; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v56[8]; // [rsp+40h] [rbp-C0h]
  struct _DXGDMM_VIDPN_INTERFACE *v57; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v58[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v59; // [rsp+50h] [rbp-B0h]
  unsigned int *v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  char v62; // [rsp+71h] [rbp-8Fh] BYREF
  char v63; // [rsp+72h] [rbp-8Eh]
  int v64; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v66; // [rsp+80h] [rbp-80h] BYREF
  UINT *p_ModeCount; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_GETDISPLAYMODELIST *v68; // [rsp+90h] [rbp-70h]
  struct _DXGDMM_INTERFACE *v69; // [rsp+98h] [rbp-68h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v70; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v71; // [rsp+A8h] [rbp-58h] BYREF
  void *v72; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v74; // [rsp+C0h] [rbp-40h]
  char v75[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v76; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v77)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h]
  DXGADAPTER *v80; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v81; // [rsp+F8h] [rbp-8h]
  int v82; // [rsp+FCh] [rbp-4h]
  char v83; // [rsp+100h] [rbp+0h]
  void *v84[2]; // [rsp+108h] [rbp+8h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  int v86; // [rsp+120h] [rbp+20h]
  char v87; // [rsp+124h] [rbp+24h]
  void *v88; // [rsp+128h] [rbp+28h]
  _QWORD v89[5]; // [rsp+130h] [rbp+30h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v90; // [rsp+158h] [rbp+58h]
  bool v91; // [rsp+15Ch] [rbp+5Ch]
  char v92; // [rsp+15Dh] [rbp+5Dh]
  int v93; // [rsp+160h] [rbp+60h]
  int v94; // [rsp+164h] [rbp+64h]
  char v95; // [rsp+168h] [rbp+68h]
  void *v96[2]; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+180h] [rbp+80h]
  int v98; // [rsp+188h] [rbp+88h]
  char v99; // [rsp+18Ch] [rbp+8Ch]
  void *v100[2]; // [rsp+190h] [rbp+90h]
  void *v101[2]; // [rsp+1A0h] [rbp+A0h]
  int v102; // [rsp+1B0h] [rbp+B0h]
  char v103; // [rsp+1B4h] [rbp+B4h]
  void *v104; // [rsp+1B8h] [rbp+B8h]
  _BYTE v105[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v106[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v107[16]; // [rsp+210h] [rbp+110h] BYREF

  v68 = a4;
  v74 = a3;
  v63 = a2;
  Global = (union _LARGE_INTEGER *)DXGGLOBAL::GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v105, Global + 17);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v105);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 20);
  VidPnSourceId = a3->VidPnSourceId;
  v69 = 0LL;
  v9 = DxgkQueryDmmInterface(a1, v8, &v69);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry4(2LL, v9, a3->hAdapter, a1, VidPnSourceId);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x QueryDxgDmmInterface failed hAdapter=0x%I64x pAdapter=0x%I64x VidPnSourceId=0x%I64x",
      v10,
      a3->hAdapter,
      (__int64)a1,
      VidPnSourceId,
      0LL);
    return (unsigned int)v10;
  }
  v11 = v69;
  v66 = 0LL;
  v73 = 0LL;
  v12 = 0LL;
  v76 = 0LL;
  v13 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v69 + 6);
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0;
  v75[0] = 0;
  v14 = v13(a1, &v73, &v66);
  v10 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, v14);
    v57 = 0LL;
    v39 = L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)";
    v55 = 0LL;
    v53 = 0LL;
    v51 = (struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)v10;
    v49 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)a1;
    goto LABEL_47;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
    (__int64)v75,
    v73,
    *((_QWORD *)v11 + 8),
    (__int64)a1);
  v12 = v76;
  v70 = 0LL;
  v71 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v66)(
          v76,
          &v70,
          &v71);
  v10 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry5(2LL, v15, v12, a1, VidPnSourceId, v66);
    v39 = L"Status=0x%I64x pfnGetTopology failed hVidPn=0x%I64x pAdapter=0x%I64x VidPnSrcId=%0x%I64x pDmmVidPnInterface=0x%I64x";
    v57 = v66;
    v55 = VidPnSourceId;
    v53 = (__int64)a1;
    v51 = (struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)v12;
    v49 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)v10;
    goto LABEL_47;
  }
  v16 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 365);
  v17 = 0LL;
  v65 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v16, VidPnSourceId);
  v19 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || v63
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v19),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 365) + 128LL)
                                                        + 4000 * VidPnSourceId)) )
  {
    v20 = 0;
    goto LABEL_7;
  }
  v41 = 0;
  do
  {
    v42 = *((_QWORD *)PrimaryDisplaySource + 1);
    v62 = 0;
    if ( *(DXGADAPTER **)(v42 + 16) != a1 )
    {
      WdLogSingleEntry1(1LL, 5070LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplaySource->GetAdapter() == pAdapter",
        5070LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (__int64)a1,
                *((_DWORD *)PrimaryDisplaySource + 272),
                0LL,
                0LL,
                0LL,
                &v62,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      WdLogSingleEntry1(1LL, 5085LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5085LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v17 )
    {
      if ( v41 != v62 )
        goto LABEL_39;
      if ( v17 >= *(unsigned int *)(*((_QWORD *)a1 + 365) + 96LL) )
      {
        WdLogSingleEntry1(1LL, 5096LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NumPathsFromSource < pAdapter->GetDisplayCore()->GetNumVidPnSources()",
          5096LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v106[v17++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v17 = 1LL;
      v41 = v62;
      v107[0] = *((_DWORD *)PrimaryDisplaySource + 272);
      v106[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v65 = v17;
LABEL_39:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v19, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  v12 = v76;
  if ( v17 <= 1 )
  {
    v20 = 0;
LABEL_7:
    *(__m128i *)v106 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v106[4] = *(_OWORD *)v106;
    *(_OWORD *)&v106[8] = *(_OWORD *)v106;
    *(_OWORD *)&v106[12] = *(_OWORD *)v106;
    v21 = PrepareUnpinnedPathsFromSource(
            v69,
            a1,
            v12,
            v66,
            v70,
            v71,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v65,
            (__m128i *)v106,
            0LL);
    v10 = v21;
    v22 = -1071774925;
    if ( v21 == -1071774925 || (v22 = -1071774886, v21 == -1071774886) )
    {
      WdLogSingleEntry2(7LL, VidPnSourceId, a1);
      LODWORD(v10) = v22;
      goto LABEL_18;
    }
    if ( v21 >= 0 )
    {
      v17 = v65;
      goto LABEL_11;
    }
    WdLogSingleEntry3(2LL, VidPnSourceId, a1, v21);
    v57 = 0LL;
    v39 = L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)";
    v55 = 0LL;
    v53 = v10;
LABEL_46:
    v51 = a1;
    v49 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)VidPnSourceId;
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v39, (__int64)v49, (__int64)v51, v53, v55, (__int64)v57);
    goto LABEL_18;
  }
  v20 = 1;
  v43 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v106, v17, v76, v107);
  if ( v43 < 0 )
  {
    v44 = v43;
    LODWORD(v10) = -1071775483;
    WdLogSingleEntry4(2LL, VidPnSourceId, a1, v43, -1071775483LL);
    v57 = 0LL;
    v39 = L"Failed to convert DWM clone to hardware clone from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x), retur"
           "ning 0x%I64x to rety the cross adapter clone way.";
    v55 = -1071775483LL;
    v53 = v44;
    goto LABEL_46;
  }
LABEL_11:
  v23 = *((_QWORD *)a1 + 366) == 0LL;
  v89[2] = v66;
  v94 = 0;
  v89[3] = v70;
  v89[4] = v71;
  v90 = v74->VidPnSourceId;
  v98 = 0;
  v102 = 0;
  v104 = 0LL;
  v97 = 0LL;
  p_hAdapter = &v68->hAdapter;
  v89[0] = a1;
  v89[1] = v12;
  v91 = v23;
  v92 = 1;
  v93 = -1;
  v95 = 0;
  v99 = 1;
  v103 = 1;
  *(_OWORD *)v96 = 0LL;
  *(_OWORD *)v100 = 0LL;
  *(_OWORD *)v101 = 0LL;
  if ( v68 )
  {
    p_pModeList = (void **)&v68->pModeList;
    p_hAdapter = &v68->ModeCount;
  }
  else
  {
    p_pModeList = 0LL;
  }
  p_ModeCount = &v74->ModeCount;
  v68 = (struct _D3DKMT_GETDISPLAYMODELIST *)&v74->pModeList;
  v10 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (OBTAIN_MODES_ON_SOURCE *)v89,
               &v74->pModeList,
               &v74->ModeCount,
               p_pModeList,
               p_hAdapter);
  operator delete(v101[0]);
  operator delete(v104);
  operator delete(v96[1]);
  operator delete(v100[0]);
  if ( (int)v10 < 0 )
  {
    WdLogSingleEntry5(3LL, v10, v12, a1, VidPnSourceId, v17);
  }
  else
  {
    v26 = p_ModeCount;
    if ( v20 )
    {
      v45 = 0;
      if ( v17 )
      {
        v46 = 0LL;
        do
        {
          v47 = v107[v46];
          v72 = 0LL;
          v64 = 0;
          v80 = a1;
          v81 = v74->VidPnSourceId;
          v86 = 0;
          v88 = 0LL;
          v85 = 0LL;
          v82 = v47;
          v83 = 1;
          *(_OWORD *)v84 = 0LL;
          v87 = 1;
          v48 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v80, &v72, &v64);
          operator delete(v84[1]);
          operator delete(v88);
          if ( (int)v48 < 0
            || v72
            && (v48 = (int)CombineModeList((_DWORD)v26, (_DWORD)v68, v64, (_DWORD)v72, 0),
                operator delete(v72),
                (int)v48 < 0) )
          {
            WdLogSingleEntry4(3LL, VidPnSourceId, v47, a1, v48);
          }
          v46 = ++v45;
        }
        while ( v45 < v17 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 8, *v26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v68 = (struct _D3DKMT_GETDISPLAYMODELIST *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 17);
      v64 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 33);
      LODWORD(v65) = *((_DWORD *)DXGGLOBAL::GetGlobal() + 32);
      v27 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 29);
      v28 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 28);
      v29 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 25);
      v30 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 24);
      v31 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 23);
      v32 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 20);
      v33 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 9);
      v34 = DXGGLOBAL::GetGlobal();
      LODWORD(v61) = v64;
      LODWORD(v60) = v65;
      LODWORD(v59) = v27;
      *(_DWORD *)v58 = v28;
      *(_DWORD *)v56 = v29;
      *(_DWORD *)v54 = v30;
      v52[0] = v31;
      LODWORD(v50) = v32;
      McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
        v36,
        v35,
        v37,
        *((_QWORD *)v34 + 8),
        v33,
        v50,
        *(_QWORD *)v52,
        *(_QWORD *)v54,
        *(_QWORD *)v56,
        *(_QWORD *)v58,
        v59,
        v60,
        v61,
        v68);
    }
    v12 = v76;
    LODWORD(v10) = 0;
  }
LABEL_18:
  if ( v75[0] )
    v77(v78, v12);
  return (unsigned int)v10;
}
