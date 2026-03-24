/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E50E4
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4DB8 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E4E58 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0002468 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0002728 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000C598 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C00E5C34 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00E5CCC (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C012FA3C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C013E2E0 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143EE0 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C016D47C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0214E58 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E6DE4 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E6E3C (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  __int64 v5; // r14
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // ebx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDEOPRESENTTARGET *v16; // rdi
  __int64 v17; // rax
  unsigned int TargetLinkTrainingStatus; // eax
  struct _LUID *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int8 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v33; // rcx
  const struct DMMVIDPNTOPOLOGY *v34; // r11
  DMMVIDPNPRESENTPATH *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rdx
  ULONGLONG v38; // rcx
  struct DXGGLOBAL *v39; // rax
  unsigned __int8 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r12
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // r13
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  _QWORD *v53; // rax
  unsigned __int8 v54; // r8
  __int64 v55; // rcx
  PERESOURCE **v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  DXGSESSIONMGR *v62; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  ULONGLONG v68; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-20h] BYREF
  __int64 v70[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v71; // [rsp+B0h] [rbp+48h] BYREF
  int v72; // [rsp+B8h] [rbp+50h] BYREF
  struct _LUID *v73; // [rsp+C0h] [rbp+58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v74; // [rsp+C8h] [rbp+60h]

  v74 = a4;
  LOBYTE(v73) = a3;
  v5 = *((_QWORD *)this + 1);
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v5 = *((_QWORD *)this + 1);
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(v5 + 16);
  v11 = v9 & 0xFFFFFF;
  v12 = HIBYTE(v9) & 0xF;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v11);
  v16 = TargetById;
  if ( !TargetById )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v68 = 0LL;
  TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v68);
  v23 = a5;
  v24 = TargetLinkTrainingStatus;
  if ( a5 )
  {
    if ( v12 != 8 )
    {
      ConnectionChangeId = a2->ConnectionChangeId;
      v12 = 13;
      goto LABEL_25;
    }
    v12 = 12;
  }
  else
  {
    LOBYTE(v20) = (_BYTE)v73;
    if ( !(_BYTE)v73 )
      goto LABEL_11;
    v69 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v20, 0LL, &v69);
    DxgkLogCodePointPacketForSession(
      0x58u,
      v69,
      *((_DWORD *)a2 + 2) & 0xFFFFFF,
      v12,
      a2->ConnectionChangeId,
      *(_QWORD *)(v10 + 316));
  }
  LOBYTE(v20) = (_BYTE)v73;
LABEL_11:
  if ( v68 <= a2->ConnectionChangeId )
  {
    ConnectionChangeId = a2->ConnectionChangeId;
    if ( v68 == a2->ConnectionChangeId )
    {
      if ( v12 == (_DWORD)v24 )
        return 0LL;
      if ( (_DWORD)v24 == 14 || (_DWORD)v24 == 13 )
      {
        if ( v12 == 12 )
        {
          v27 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId);
          *(_QWORD *)(v27 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
          WdLogEvent5_WdDmmEvent(v27);
          return 0LL;
        }
        if ( !(_BYTE)v20 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v20);
          v28[3] = v24;
          v28[4] = v10;
          v28[5] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
LABEL_21:
          WdLogEvent5_WdAssertion(v28);
          return 0LL;
        }
        ConnectionChangeId = a2->ConnectionChangeId;
        if ( (_DWORD)v24 != 13 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v20);
          v28[3] = v12;
          v28[4] = v24;
          goto LABEL_21;
        }
      }
    }
LABEL_25:
    *(_BYTE *)(*((_QWORD *)v16 + 67) + 168LL) = v12;
    *(_QWORD *)(*((_QWORD *)v16 + 67) + 160LL) = ConnectionChangeId;
    Global = DXGGLOBAL::GetGlobal(ConnectionChangeId, (__int64)v20);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL);
    if ( v23 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v16, v12 == 12);
    }
    else if ( v12 == (_DWORD)v24 )
    {
      return 0LL;
    }
    v30 = *((_QWORD *)this + 11);
    if ( !v30 )
    {
      v70[0] = 0LL;
LABEL_69:
      auto_rc<DMMVIDPN const>::reset(v70, 0LL);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 32));
    v31 = *((_QWORD *)this + 11);
    v70[0] = v31;
    if ( !v31 )
      goto LABEL_69;
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v31 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v35 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( v23 )
      {
        v36 = WdLogNewEntry5_WdDmmEvent(v33);
        *(_QWORD *)(v36 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
        *(_QWORD *)(v36 + 32) = v10;
        WdLogEvent5_WdDmmEvent(v36);
        if ( v12 == 12 )
        {
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v16, 1u);
        }
        else
        {
          v38 = a2->ConnectionChangeId;
          *(_BYTE *)(*((_QWORD *)v16 + 67) + 168LL) = 14;
          *(_QWORD *)(*((_QWORD *)v16 + 67) + 160LL) = v38;
          v39 = DXGGLOBAL::GetGlobal(v38, v37);
          QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v39 + 172), 0LL);
        }
      }
      v40 = v12 == 12;
      goto LABEL_48;
    }
    v41 = *((_QWORD *)PathFromTarget + 11);
    v71 = 0;
    v42 = *(unsigned int *)(v41 + 24);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v34, v42, &v71);
    v44 = 0x80000000LL;
    v45 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v45 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v45, 0x80000000LL);
      WdLogEvent5_WdAssertion(v46);
    }
    v47 = *(_QWORD *)(v10 + 2704);
    LOBYTE(v71) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v71;
    if ( v47 )
      ADAPTER_RENDER::FlushScheduler(v47, 8, v42, 0);
    if ( v12 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16);
      if ( !*((_BYTE *)v16 + 418) )
      {
        v40 = 0;
LABEL_48:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v16, 0LL, v40);
        goto LABEL_69;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v35, 0LL);
      v48 = v71;
      if ( !(_BYTE)v71 )
        goto LABEL_69;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 2696), v42, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v49 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v10 + 2696), v42, 1, 0, (unsigned __int8)v73);
      v52 = v49;
      if ( v49 >= 0 )
        goto LABEL_69;
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
      v53[3] = v10;
      v53[4] = v42;
      v53[5] = v52;
      WdLogEvent5_WdError(v53);
      v12 = 13;
    }
    else
    {
      if ( v12 != 13 )
      {
        LOBYTE(v44) = *((_BYTE *)v16 + 418);
        v54 = 1;
        v48 = v71;
        goto LABEL_53;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16);
      v48 = v71;
    }
    LOBYTE(v44) = 0;
    v54 = 0;
LABEL_53:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v16, v44, v54);
    if ( (_DWORD)v24 == 14 )
    {
      v56 = *(PERESOURCE ***)(v10 + 2696);
      if ( v48 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v56, v42, 0, 0, (unsigned __int8)v73);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility(
          (ADAPTER_DISPLAY *)v56,
          (unsigned int)v42,
          0,
          2048,
          (unsigned __int8)v73);
    }
    if ( v12 == 13 || a5 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55);
      v57[3] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v57[5] = a5;
      v57[4] = v10;
      WdLogEvent5_WdDmmEvent(v57);
      v62 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v59, v58) + 102);
      if ( v62 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v61, v60);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v62, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18491) )
      {
        v72 = PsGetCurrentProcessSessionId(v61, v60);
        if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v72, 0, 0) < 0 )
        {
          v67 = WdLogNewEntry5_WdError(v66, v65);
          *(_QWORD *)(v67 + 24) = v10;
          WdLogEvent5_WdError(v67);
        }
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v10 + 2696), 0LL, v74);
      }
    }
    if ( v12 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v16, 1u);
    goto LABEL_69;
  }
  v25 = WdLogNewEntry5_WdWarning(v21, v20, v22);
  WdLogEvent5_WdWarning(v25);
  return 0LL;
}
