/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C001BFA0
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001BDEC (DpiFdoHandleDisplayDetectControl.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01E6A28 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01E6B80 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 *     DpiDxgkDdiQueryConnectionChange @ 0x1C001C480 (DpiDxgkDdiQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444@Z @ 0x1C005E5B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C01DBD60 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C01E6CE8 (DxgkEndDisplayCalloutBatch.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C01E6D04 (DxgkStartDisplayCalloutBatch.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C01F80F4 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02009DC (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0212D68 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C02BD9C0 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C0397A98 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03AD5AC (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorQuerySkippedRemovalState @ 0x1C03BFE44 (MonitorQuerySkippedRemovalState.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C03BFEEC (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, char a2, char a3, char a4, char a5, char a6)
{
  __int64 v6; // rbx
  char v8; // r12
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  KSPIN_LOCK *v14; // rsi
  int v15; // r14d
  int v16; // eax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v17; // r15d
  _QWORD *ChildDescriptor; // rax
  __int64 v19; // r9
  _DWORD *v20; // r12
  struct _DXGK_CONNECTION_CHANGE *v21; // rsi
  bool v22; // cl
  __int64 v23; // r9
  int v24; // eax
  char v25; // si
  bool v26; // zf
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v30; // r9
  _QWORD *v31; // rdi
  _DWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int updated; // eax
  _QWORD *v40; // rsi
  __int64 v41; // rcx
  _QWORD *v42; // r14
  __int64 v43; // rdx
  int v44; // ecx
  unsigned __int64 v45; // rdx
  int v46; // eax
  int v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+38h] [rbp-C8h]
  char v51; // [rsp+60h] [rbp-A0h] BYREF
  char v52; // [rsp+61h] [rbp-9Fh] BYREF
  char v53; // [rsp+62h] [rbp-9Eh]
  int ConnectionChangeId_high; // [rsp+64h] [rbp-9Ch] BYREF
  int ConnectionChangeId; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+6Ch] [rbp-94h] BYREF
  int v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGK_CONNECTION_CHANGE v62[5]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v63[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  int v66; // [rsp+160h] [rbp+60h]
  int v67; // [rsp+164h] [rbp+64h]
  int v68; // [rsp+168h] [rbp+68h]
  int v69; // [rsp+16Ch] [rbp+6Ch]
  __int64 v70; // [rsp+170h] [rbp+70h]
  _OWORD v71[3]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v72[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v73[10]; // [rsp+200h] [rbp+100h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v51 = a3;
  v58 = a1;
  v53 = 0;
  v8 = a3;
  v52 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v6 || *(_DWORD *)(v6 + 16) != 1953656900 || *(_DWORD *)(v6 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3320), 1u);
    v53 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v6 + 236) - 1) > 1 || *(_DWORD *)(v6 + 4000) == 1 || *(_DWORD *)(v6 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v6 + 3544), 0, 0);
    v33 = 3LL;
    v13 = -1073741661LL;
    goto LABEL_94;
  }
  if ( (*(_BYTE *)(v6 + 3920) & 1) == 0 )
    goto LABEL_11;
  LOBYTE(v11) = 1;
  v12 = DpiAcquireCoreSyncAccessSafe(a1, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    KeSetEvent((PRKEVENT)(v6 + 3544), 0, 0);
    v33 = 2LL;
LABEL_94:
    WdLogSingleEntry1(v33, v13);
    goto LABEL_43;
  }
  DxgkStartDisplayCalloutBatch(*(_QWORD *)(v6 + 3912));
LABEL_11:
  if ( a2 )
  {
    if ( (*(_BYTE *)(v6 + 3921) & 8) != 0 )
    {
      memset(v72, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v72[1]);
      v31 = *(_QWORD **)(v6 + 3480);
      v72[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v72[3]) = 60;
      LOBYTE(v72[6]) = -1;
      while ( v31 != (_QWORD *)(v6 + 3480) )
      {
        v32 = v31 - 4;
        v31 = (_QWORD *)*v31;
        if ( v32[4] == 1 )
        {
          v34 = *v32 == 1 ? (unsigned int)v32[1] : 4294967294LL;
          LOBYTE(v30) = 1;
          LOBYTE(v50) = 1;
          LOBYTE(v49) = a5;
          LOBYTE(v48) = v8;
          LOBYTE(v47) = a4;
          v35 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(v6 + 24),
                  (unsigned int)v32[6],
                  v34,
                  v30,
                  v47,
                  v48,
                  v49,
                  v50,
                  0LL,
                  &v52,
                  v72);
          if ( v35 < 0 )
            WdLogSingleEntry1(2LL, v35);
        }
      }
    }
  }
  v14 = (KSPIN_LOCK *)(v6 + 3536);
  do
  {
    while ( 1 )
    {
      v15 = 0;
      memset(v71, 0, sizeof(v71));
      memset(v62, 0, sizeof(v62));
      EtwActivityIdControl(3u, (LPGUID)&v62[2]);
      *((_QWORD *)&v62[4] + 1) = MEMORY[0xFFFFF78000000014];
      *((_BYTE *)&v62[4].12 + 9) = a5;
      v62[2].TargetConnect.NewTargetId = 60;
      LOBYTE(v62[3].TargetJoin.NewTargetId) = -1;
      *((_BYTE *)&v62[4].12 + 8) = v8;
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
      *(_DWORD *)(v6 + 3532) = 2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v16 = DpiDxgkDdiQueryConnectionChange(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), v62);
      v13 = v16;
      if ( v16 < 0 )
        break;
      if ( v16 == 255 )
        goto LABEL_33;
      if ( *((_BYTE *)&v62[4].12 + 10) )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v6 + 3912));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v6 + 3912));
      }
      else
      {
        v17 = *((_DWORD *)v62 + 2) & 0xFFFFFF | (v62[4].TargetConnect.NewTargetId << 24);
        if ( (HIBYTE(*((_DWORD *)v62 + 2)) & 0xF) == 4
          || (HIBYTE(*((_DWORD *)v62 + 2)) & 0xF) == 5
          || (HIBYTE(*((_DWORD *)v62 + 2)) & 0xF) == 6 )
        {
          updated = DpiFdoHandleTargetConnectionState(v6, &v52, v62);
          goto LABEL_81;
        }
        if ( (HIBYTE(*((_DWORD *)v62 + 2)) & 0xF) != 8 && (HIBYTE(*((_DWORD *)v62 + 2)) & 0xF) != 0xA )
        {
          if ( (HIBYTE(*((_DWORD *)v62 + 2)) & 0xF) != 0xC && (HIBYTE(*((_DWORD *)v62 + 2)) & 0xFu) - 13 >= 2 )
          {
            WdLogSingleEntry2(2LL, (*((_QWORD *)v62 + 1) >> 24) & 0xFLL, v16);
            LODWORD(v13) = -1073741811;
            goto LABEL_33;
          }
          goto LABEL_79;
        }
        ChildDescriptor = DpiFdoGetChildDescriptor(v6, v17);
        v20 = ChildDescriptor;
        if ( ChildDescriptor )
        {
          if ( *(_DWORD *)ChildDescriptor != 1 )
            goto LABEL_24;
          LOBYTE(v19) = (*(_BYTE *)(v6 + 3921) & 0x10) != 0;
          v15 = DmmProcessHPDFiltering(*(_QWORD *)(v6 + 3912), v62, v71, v19, &v62[2]);
          if ( v15 != 1 )
          {
            LODWORD(v19) = *((_DWORD *)v62 + 2);
LABEL_24:
            v21 = 0LL;
            if ( (v19 & 0xF000000) == 0xA000000 && (v62[0].TargetJoin.NewTargetId & 1) != 0 )
            {
              if ( (*(_DWORD *)(v6 + 3932) & 0x40) != 0 )
              {
                v21 = &v62[1];
              }
              else
              {
                if ( (unsigned int)dword_1C013A8A8 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000000002LL) )
                {
                  ConnectionChangeId_high = HIDWORD(v62[1].ConnectionChangeId);
                  ConnectionChangeId = v62[1].ConnectionChangeId;
                  v59 = *(_QWORD *)(v6 + 2672);
                  v56 = v38 & 0xFFFFFF;
                  v57 = 1;
                  v60 = 16779264LL;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    v36,
                    (unsigned int)&unk_1C00A0385,
                    v37,
                    v38 & 0xFFFFFF,
                    (__int64)&v60,
                    (__int64)&v57,
                    (__int64)&v59,
                    (__int64)&v56,
                    (__int64)&ConnectionChangeId,
                    (__int64)&ConnectionChangeId_high);
                }
                WdLogSingleEntry1(2LL, v13);
                LODWORD(v19) = *((_DWORD *)v62 + 2);
              }
            }
            v22 = *((_BYTE *)&v62[4].12 + 8) || v15 == 3;
            v23 = v19 & 0xF000000;
            LOBYTE(v23) = (_DWORD)v23 == 167772160;
            LOBYTE(v50) = *((_BYTE *)&v62[4].12 + 11);
            LOBYTE(v49) = *((_BYTE *)&v62[4].12 + 9);
            LOBYTE(v48) = v22;
            LOBYTE(v47) = 0;
            v24 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v6 + 24),
                    v17,
                    (unsigned int)v62[0].MonitorConnect.LinkTargetType,
                    v23,
                    v47,
                    v48,
                    v49,
                    v50,
                    v21,
                    &v52,
                    &v62[1].TargetJoin.NewTargetId);
            LODWORD(v13) = v24;
            if ( v24 < 0 )
              WdLogSingleEntry1(2LL, v24);
          }
          if ( *v20 == 1 )
            DmmUpdateHPDFilteringTelemetry(
              *(void **)(v6 + 3912),
              (struct _DMM_HPD_FILTER_INFO *)v71,
              (struct _GUID *)&v62[2],
              v17,
              (_DWORD)v13 == 0x40000000);
          if ( (v15 & 0xFFFFFFFD) != 0 && (v15 != 3 || (_DWORD)v13 == 0x40000000) )
          {
            v8 = v51;
            v14 = (KSPIN_LOCK *)(v6 + 3536);
LABEL_79:
            updated = DmmUpdateTargetLinkTrainingState(
                        *(void **)(v6 + 3912),
                        v62,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v62[1].TargetJoin.NewTargetId,
                        v15 != 0);
LABEL_81:
            v13 = updated;
            if ( updated < 0 )
              break;
          }
          else
          {
            v8 = v51;
            v14 = (KSPIN_LOCK *)(v6 + 3536);
            if ( (int)v13 < 0 )
              goto LABEL_33;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, -1073741810LL);
          v8 = v51;
        }
      }
    }
    WdLogSingleEntry1(2LL, v13);
LABEL_33:
    v25 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 3536), &LockHandle);
    if ( (*(_DWORD *)(v6 + 3532) & 1) == 0 )
    {
      *(_DWORD *)(v6 + 3532) = 0;
      v25 = 0;
      KeSetEvent((PRKEVENT)(v6 + 3544), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v8 = v51;
    v26 = v25 == 0;
    v14 = (KSPIN_LOCK *)(v6 + 3536);
  }
  while ( !v26 );
  if ( a6 )
  {
    memset(v73, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v73[1]);
    v40 = *(_QWORD **)(v6 + 3480);
    v27 = v58;
    v73[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v73[3]) = 68;
    LOBYTE(v73[6]) = -1;
    while ( v40 != (_QWORD *)(v6 + 3480) )
    {
      v41 = *(_QWORD *)(v6 + 3912);
      v42 = v40;
      v43 = *((unsigned int *)v40 - 2);
      v40 = (_QWORD *)*v40;
      v51 = 0;
      if ( (int)MonitorQuerySkippedRemovalState(v41, v43, &v51) >= 0 && v51 )
      {
        LOBYTE(v50) = 0;
        LOBYTE(v49) = 0;
        LOBYTE(v48) = 0;
        LOBYTE(v47) = 0;
        v44 = DpiPdoHandleChildConnectionChange(
                v27,
                *((unsigned int *)v42 - 2),
                4294967294LL,
                0LL,
                v47,
                v48,
                v49,
                v50,
                0LL,
                &v52,
                v73);
        if ( v44 < 0 )
        {
          WdLogSingleEntry1(2LL, (int)v13);
          break;
        }
        v45 = *(_QWORD *)(v6 + 5744);
        v68 = v44;
        v67 = *((_DWORD *)v42 - 2);
        v70 = *(_QWORD *)(v6 + 2672);
        v65 = 0LL;
        v63[0] = 30;
        v63[1] = 72;
        v64 = 0LL;
        memset(&v63[2], 0, 24);
        v66 = 126;
        v69 = 0;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v63, v45);
      }
    }
  }
  else
  {
    v27 = v58;
  }
  if ( v52 )
  {
    v46 = DmmPowerOnOffTargetsFromSourceIfNecessary(*(void *const *)(v6 + 3912), 1u, 0LL);
    if ( v46 < 0 )
      WdLogSingleEntry1(2LL, v46);
  }
  if ( (*(_BYTE *)(v6 + 3920) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v6 + 3912));
    LOBYTE(v28) = 1;
    DpiReleaseCoreSyncAccessSafe(v27, v28);
  }
  if ( (int)v13 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 3660), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 152), BusRelations);
  }
LABEL_43:
  if ( v53 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3320));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
