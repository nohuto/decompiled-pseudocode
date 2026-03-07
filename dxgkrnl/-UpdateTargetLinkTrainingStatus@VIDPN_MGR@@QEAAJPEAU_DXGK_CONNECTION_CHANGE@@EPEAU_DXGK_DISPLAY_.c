__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  unsigned __int8 v5; // di
  VIDPN_MGR *v7; // rbx
  unsigned int v8; // esi
  int v9; // edx
  unsigned int v10; // esi
  __int64 v11; // r13
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v13; // r14
  struct _LUID *v15; // rdx
  __int64 TargetLinkTrainingStatus; // r12
  int v17; // edi
  int ConnectionChangeId; // ebx
  __int64 v19; // r11
  ULONGLONG v20; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  int v25; // r11d
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v27; // r11d
  ULONGLONG v28; // rcx
  struct DXGGLOBAL *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // ebx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  ADAPTER_DISPLAY *v40; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v42; // eax
  char v43; // dl
  unsigned __int8 v44; // r8
  PERESOURCE **v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  DXGSESSIONMGR *v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  struct DMMVIDPNTOPOLOGY *v57; // [rsp+40h] [rbp-28h] BYREF
  DMMVIDPNPRESENTPATH *v58; // [rsp+48h] [rbp-20h]
  const struct DMMVIDPN *v59; // [rsp+50h] [rbp-18h] BYREF
  VIDPN_MGR *v60; // [rsp+B0h] [rbp+48h] BYREF
  ULONGLONG v61; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int8 v62; // [rsp+C0h] [rbp+58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v63; // [rsp+C8h] [rbp+60h]

  v63 = a4;
  v62 = a3;
  v60 = this;
  v5 = a3;
  v7 = this;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_DWORD *)a2 + 2);
  v9 = v8 & 0xFFFFFF;
  v10 = HIBYTE(v8) & 0xF;
  v11 = *(_QWORD *)(*((_QWORD *)v7 + 1) + 16LL);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)v7 + 15), v9);
  v13 = TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, *((_DWORD *)a2 + 2) & 0xFFFFFFLL, -1073741811LL);
    return 3221225485LL;
  }
  v61 = 0LL;
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v61);
  if ( a5 )
  {
    if ( v10 != 8 )
    {
      v10 = 13;
      goto LABEL_22;
    }
    v10 = 12;
  }
  else if ( v5 )
  {
    v17 = *((_DWORD *)a2 + 2);
    ConnectionChangeId = a2->ConnectionChangeId;
    v57 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v15, 0LL, (unsigned __int64 *)&v57);
    DxgkLogCodePointPacketForSession(0x58u, (unsigned __int64)v57, v17 & 0xFFFFFF, v10, ConnectionChangeId, v19);
    v7 = v60;
    v5 = v62;
  }
  if ( v61 <= a2->ConnectionChangeId )
  {
    if ( v61 == a2->ConnectionChangeId )
    {
      if ( v10 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (unsigned int)(TargetLinkTrainingStatus - 13) <= 1 )
      {
        if ( v10 == 12 )
        {
          WdLogSingleEntry1(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          return 0LL;
        }
        if ( !v5 )
        {
          WdLogSingleEntry3(1LL, TargetLinkTrainingStatus, v11, *((_DWORD *)a2 + 2) & 0xFFFFFF);
          return 0LL;
        }
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          WdLogSingleEntry2(1LL, v10, TargetLinkTrainingStatus);
          return 0LL;
        }
      }
    }
LABEL_22:
    v20 = a2->ConnectionChangeId;
    *(_BYTE *)(*((_QWORD *)v13 + 67) + 168LL) = v10;
    *(_QWORD *)(*((_QWORD *)v13 + 67) + 160LL) = v20;
    Global = DXGGLOBAL::GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v22, v23);
    if ( a5 )
    {
      *(_BYTE *)(*((_QWORD *)v13 + 67) + 172LL) = v10 == 12;
      WdLogSingleEntry2(7LL, *((unsigned int *)v13 + 6), v10 == 12);
    }
    else if ( v10 == (_DWORD)TargetLinkTrainingStatus )
    {
      return 0LL;
    }
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    v59 = ClientCommittedVidPnRef;
    if ( !ClientCommittedVidPnRef )
    {
LABEL_62:
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v59, 0LL);
      return 0LL;
    }
    v25 = *((_DWORD *)a2 + 2);
    v57 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(
                       (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
                       v25 & 0xFFFFFF);
    v58 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( a5 )
      {
        WdLogSingleEntry2(7LL, *(_QWORD *)&v27 & 0xFFFFFFLL, v11);
        if ( v10 == 12 )
        {
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v13, 1u);
        }
        else
        {
          v28 = a2->ConnectionChangeId;
          *(_BYTE *)(*((_QWORD *)v13 + 67) + 168LL) = 14;
          *(_QWORD *)(*((_QWORD *)v13 + 67) + 160LL) = v28;
          v29 = DXGGLOBAL::GetGlobal();
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v29 + 187), 0LL, v30, v31);
        }
      }
      v32 = v10 == 12;
      goto LABEL_43;
    }
    v33 = *((_QWORD *)PathFromTarget + 11);
    LODWORD(v60) = 0;
    v34 = *(_DWORD *)(v33 + 24);
    LODWORD(v61) = v34;
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v57,
                                                v34,
                                                (unsigned int *const)&v60);
    v38 = 0x80000000LL;
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) >= 0
      && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      WdLogSingleEntry0(1LL);
    }
    v39 = *(_QWORD *)(v11 + 2928);
    LOBYTE(v60) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == (_DWORD)v60;
    if ( v39 )
      ADAPTER_RENDER::FlushScheduler(v39, 8u, v34, 0);
    if ( v10 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v13, v38, v36, v37);
      if ( !*((_BYTE *)v13 + 418) )
      {
        v32 = 0;
LABEL_43:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v13, 0, v32);
        goto LABEL_62;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v58, 0LL);
      if ( !(_BYTE)v60 )
        goto LABEL_62;
      ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v11 + 2920), v34, *((_DWORD *)a2 + 2) & 0xFFFFFF);
      v40 = *(ADAPTER_DISPLAY **)(v11 + 2920);
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v40, v61);
      v42 = ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v40, v61, 1u, DisplayModeInfo, 0, v62 != 0);
      if ( v42 >= 0 )
        goto LABEL_62;
      v34 = v61;
      WdLogSingleEntry3(2LL, v11, (unsigned int)v61, v42);
      v10 = 13;
    }
    else
    {
      if ( v10 != 13 )
      {
        v43 = *((_BYTE *)v13 + 418);
        v44 = 1;
        goto LABEL_48;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v13, v38, v36, v37);
    }
    v43 = 0;
    v44 = 0;
LABEL_48:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v13, v43, v44);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v45 = *(PERESOURCE ***)(v11 + 2920);
      if ( (_BYTE)v60 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v45, v34, 0, 0LL, 0, v62 != 0);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v45, v34, 0, 2048, v62);
    }
    if ( v10 == 13 || a5 )
    {
      WdLogSingleEntry3(7LL, *((_DWORD *)a2 + 2) & 0xFFFFFF, v11, a5);
      v48 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v48
        && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v47, v46, v49, v50),
            (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v48,
                                                CurrentProcessSessionId)) != 0LL)
        && *((_BYTE *)SessionDataForSpecifiedSession + 18499) )
      {
        LODWORD(v60) = PsGetCurrentProcessSessionId(v54, v53, v55, v56);
        if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v60, 0, 0) < 0 )
          WdLogSingleEntry1(2LL, v11);
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v11 + 2920), 0LL, v63);
      }
    }
    if ( v10 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v13, 1u);
    goto LABEL_62;
  }
  WdLogSingleEntry0(3LL);
  return 0LL;
}
