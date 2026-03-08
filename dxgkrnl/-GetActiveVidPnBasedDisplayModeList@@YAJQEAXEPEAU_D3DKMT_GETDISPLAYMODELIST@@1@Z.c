/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C020EA90 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0001BD0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0020A28 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x1C0020A68 (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0020B80 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryDmmInterface @ 0x1C016A964 (DxgkQueryDmmInterface.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01AFC34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01C36FC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01E80D0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01E8438 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C02FC23C (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0350A90 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C03A7EE8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  ADAPTER_DISPLAY *v18; // rcx
  unsigned __int64 v19; // rbx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v21; // r13
  char v22; // r13
  int v23; // eax
  int v24; // ebx
  bool v25; // cl
  unsigned int *p_hAdapter; // rax
  void **p_pModeList; // r9
  UINT *v28; // r12
  int v29; // r13d
  int v30; // r12d
  int v31; // r15d
  int v32; // r14d
  unsigned int v33; // esi
  int v34; // edi
  __int64 v35; // rbx
  struct DXGGLOBAL *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  const wchar_t *v41; // r9
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  char v43; // r12
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rbx
  unsigned int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // r13
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v51; // [rsp+20h] [rbp-E0h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v52; // [rsp+28h] [rbp-D8h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v53; // [rsp+28h] [rbp-D8h]
  unsigned int v54[2]; // [rsp+30h] [rbp-D0h]
  __int64 v55; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v56[8]; // [rsp+38h] [rbp-C8h]
  __int64 v57; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v58[8]; // [rsp+40h] [rbp-C0h]
  struct _DXGDMM_VIDPN_INTERFACE *v59; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v60[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v61; // [rsp+50h] [rbp-B0h]
  unsigned int *v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  char v64; // [rsp+71h] [rbp-8Fh] BYREF
  char v65; // [rsp+72h] [rbp-8Eh]
  int v66; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v68; // [rsp+80h] [rbp-80h] BYREF
  UINT *p_ModeCount; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_GETDISPLAYMODELIST *v70; // [rsp+90h] [rbp-70h]
  struct _DXGDMM_INTERFACE *v71; // [rsp+98h] [rbp-68h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v72; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v73; // [rsp+A8h] [rbp-58h] BYREF
  void *v74; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v76; // [rsp+C0h] [rbp-40h]
  char v77[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v78; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v79)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E8h] [rbp-18h]
  DXGADAPTER *v82; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  char v85; // [rsp+100h] [rbp+0h]
  void *v86[2]; // [rsp+108h] [rbp+8h]
  __int64 v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+120h] [rbp+20h]
  char v89; // [rsp+124h] [rbp+24h]
  void *v90; // [rsp+128h] [rbp+28h]
  _QWORD v91[5]; // [rsp+130h] [rbp+30h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v92; // [rsp+158h] [rbp+58h]
  bool v93; // [rsp+15Ch] [rbp+5Ch]
  char v94; // [rsp+15Dh] [rbp+5Dh]
  int v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+164h] [rbp+64h]
  char v97; // [rsp+168h] [rbp+68h]
  void *v98[2]; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+180h] [rbp+80h]
  int v100; // [rsp+188h] [rbp+88h]
  char v101; // [rsp+18Ch] [rbp+8Ch]
  void *v102[2]; // [rsp+190h] [rbp+90h]
  void *v103[2]; // [rsp+1A0h] [rbp+A0h]
  int v104; // [rsp+1B0h] [rbp+B0h]
  char v105; // [rsp+1B4h] [rbp+B4h]
  void *v106; // [rsp+1B8h] [rbp+B8h]
  _BYTE v107[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v108[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v109[16]; // [rsp+210h] [rbp+110h] BYREF

  v70 = a4;
  v76 = a3;
  v65 = a2;
  Global = (union _LARGE_INTEGER *)DXGGLOBAL::GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v107, Global + 17);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v107);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 20);
  VidPnSourceId = a3->VidPnSourceId;
  v71 = 0LL;
  v9 = DxgkQueryDmmInterface(a1, v8, &v71);
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
  v11 = v71;
  v68 = 0LL;
  v75 = 0LL;
  v12 = 0LL;
  v78 = 0LL;
  v13 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v71 + 6);
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0;
  v77[0] = 0;
  v14 = v13(a1, &v75, &v68);
  v10 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, v14);
    v59 = 0LL;
    v41 = L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)";
    v57 = 0LL;
    v55 = 0LL;
    v53 = (struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)v10;
    v51 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)a1;
    goto LABEL_47;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
    (__int64)v77,
    v75,
    *((_QWORD *)v11 + 8),
    (__int64)a1);
  v12 = v78;
  v72 = 0LL;
  v73 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v68)(
          v78,
          &v72,
          &v73);
  v10 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry5(2LL, v15, v12, a1, VidPnSourceId, v68);
    v41 = L"Status=0x%I64x pfnGetTopology failed hVidPn=0x%I64x pAdapter=0x%I64x VidPnSrcId=%0x%I64x pDmmVidPnInterface=0x%I64x";
    v59 = v68;
    v57 = VidPnSourceId;
    v55 = (__int64)a1;
    v53 = (struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)v12;
    v51 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)v10;
    goto LABEL_47;
  }
  v18 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 365);
  v19 = 0LL;
  v67 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v18, (unsigned int)VidPnSourceId, v16, v17);
  v21 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || v65
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v21),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 365) + 128LL)
                                                        + 4000 * VidPnSourceId)) )
  {
    v22 = 0;
    goto LABEL_7;
  }
  v43 = 0;
  do
  {
    v44 = *((_QWORD *)PrimaryDisplaySource + 1);
    v64 = 0;
    if ( *(DXGADAPTER **)(v44 + 16) != a1 )
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
                &v64,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      WdLogSingleEntry1(1LL, 5085LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5085LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v19 )
    {
      if ( v43 != v64 )
        goto LABEL_39;
      if ( v19 >= *(unsigned int *)(*((_QWORD *)a1 + 365) + 96LL) )
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
      v108[v19++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v19 = 1LL;
      v43 = v64;
      v109[0] = *((_DWORD *)PrimaryDisplaySource + 272);
      v108[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v67 = v19;
LABEL_39:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v21, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  v12 = v78;
  if ( v19 <= 1 )
  {
    v22 = 0;
LABEL_7:
    *(__m128i *)v108 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v108[4] = *(_OWORD *)v108;
    *(_OWORD *)&v108[8] = *(_OWORD *)v108;
    *(_OWORD *)&v108[12] = *(_OWORD *)v108;
    v23 = PrepareUnpinnedPathsFromSource(
            v71,
            a1,
            v12,
            v68,
            v72,
            v73,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v67,
            (__m128i *)v108,
            0LL);
    v10 = v23;
    v24 = -1071774925;
    if ( v23 == -1071774925 || (v24 = -1071774886, v23 == -1071774886) )
    {
      WdLogSingleEntry2(7LL, VidPnSourceId, a1);
      LODWORD(v10) = v24;
      goto LABEL_18;
    }
    if ( v23 >= 0 )
    {
      v19 = v67;
      goto LABEL_11;
    }
    WdLogSingleEntry3(2LL, VidPnSourceId, a1, v23);
    v59 = 0LL;
    v41 = L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)";
    v57 = 0LL;
    v55 = v10;
LABEL_46:
    v53 = a1;
    v51 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)VidPnSourceId;
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, (__int64)v51, (__int64)v53, v55, v57, (__int64)v59);
    goto LABEL_18;
  }
  v22 = 1;
  v45 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v108, v19, v78, v109);
  if ( v45 < 0 )
  {
    v46 = v45;
    LODWORD(v10) = -1071775483;
    WdLogSingleEntry4(2LL, VidPnSourceId, a1, v45, -1071775483LL);
    v59 = 0LL;
    v41 = L"Failed to convert DWM clone to hardware clone from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x), retur"
           "ning 0x%I64x to rety the cross adapter clone way.";
    v57 = -1071775483LL;
    v55 = v46;
    goto LABEL_46;
  }
LABEL_11:
  v25 = *((_QWORD *)a1 + 366) == 0LL;
  v91[2] = v68;
  v96 = 0;
  v91[3] = v72;
  v91[4] = v73;
  v92 = v76->VidPnSourceId;
  v100 = 0;
  v104 = 0;
  v106 = 0LL;
  v99 = 0LL;
  p_hAdapter = &v70->hAdapter;
  v91[0] = a1;
  v91[1] = v12;
  v93 = v25;
  v94 = 1;
  v95 = -1;
  v97 = 0;
  v101 = 1;
  v105 = 1;
  *(_OWORD *)v98 = 0LL;
  *(_OWORD *)v102 = 0LL;
  *(_OWORD *)v103 = 0LL;
  if ( v70 )
  {
    p_pModeList = (void **)&v70->pModeList;
    p_hAdapter = &v70->ModeCount;
  }
  else
  {
    p_pModeList = 0LL;
  }
  p_ModeCount = &v76->ModeCount;
  v70 = (struct _D3DKMT_GETDISPLAYMODELIST *)&v76->pModeList;
  v10 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (OBTAIN_MODES_ON_SOURCE *)v91,
               &v76->pModeList,
               &v76->ModeCount,
               p_pModeList,
               p_hAdapter);
  operator delete(v103[0]);
  operator delete(v106);
  operator delete(v98[1]);
  operator delete(v102[0]);
  if ( (int)v10 < 0 )
  {
    WdLogSingleEntry5(3LL, v10, v12, a1, VidPnSourceId, v19);
  }
  else
  {
    v28 = p_ModeCount;
    if ( v22 )
    {
      v47 = 0;
      if ( v19 )
      {
        v48 = 0LL;
        do
        {
          v49 = v109[v48];
          v74 = 0LL;
          v66 = 0;
          v82 = a1;
          v83 = v76->VidPnSourceId;
          v88 = 0;
          v90 = 0LL;
          v87 = 0LL;
          v84 = v49;
          v85 = 1;
          *(_OWORD *)v86 = 0LL;
          v89 = 1;
          v50 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v82, &v74, &v66);
          operator delete(v86[1]);
          operator delete(v90);
          if ( (int)v50 < 0
            || v74
            && (v50 = (int)CombineModeList((_DWORD)v28, (_DWORD)v70, v66, (_DWORD)v74, 0),
                operator delete(v74),
                (int)v50 < 0) )
          {
            WdLogSingleEntry4(3LL, VidPnSourceId, v49, a1, v50);
          }
          v48 = ++v47;
        }
        while ( v47 < v19 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 8, *v28);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v70 = (struct _D3DKMT_GETDISPLAYMODELIST *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 17);
      v66 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 33);
      LODWORD(v67) = *((_DWORD *)DXGGLOBAL::GetGlobal() + 32);
      v29 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 29);
      v30 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 28);
      v31 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 25);
      v32 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 24);
      v33 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 23);
      v34 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 20);
      v35 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 9);
      v36 = DXGGLOBAL::GetGlobal();
      LODWORD(v63) = v66;
      LODWORD(v62) = v67;
      LODWORD(v61) = v29;
      *(_DWORD *)v60 = v30;
      *(_DWORD *)v58 = v31;
      *(_DWORD *)v56 = v32;
      v54[0] = v33;
      LODWORD(v52) = v34;
      McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
        v38,
        v37,
        v39,
        *((_QWORD *)v36 + 8),
        v35,
        v52,
        *(_QWORD *)v54,
        *(_QWORD *)v56,
        *(_QWORD *)v58,
        *(_QWORD *)v60,
        v61,
        v62,
        v63,
        v70);
    }
    v12 = v78;
    LODWORD(v10) = 0;
  }
LABEL_18:
  if ( v77[0] )
    v79(v80, v12);
  return (unsigned int)v10;
}
