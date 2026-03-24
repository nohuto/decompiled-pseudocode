/*
 * XREFs of DxgkQueryConnectionChanges @ 0x1C00205E0
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C00203C8 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0178308 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02C6710 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001A070 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C0020E18 (DpiFdoHandleQueryConnectionChange.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0pxqqqqq_EtwWriteTransfer @ 0x1C002873C (McTemplateK0pxqqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C012E130 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012E3AC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkEndDisplayCalloutBatch @ 0x1C01786C4 (DxgkEndDisplayCalloutBatch.c)
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0178774 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0178898 (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0179414 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 *     DxgkStartDisplayCalloutBatch @ 0x1C0179578 (DxgkStartDisplayCalloutBatch.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0217F18 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02CB274 (DpiFdoHandleTargetConnectionState.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4DB8 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C02F475C (MonitorRebuildMonitorModeListCache.c)
 */

__int64 __fastcall DxgkQueryConnectionChanges(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r12
  char v8; // r14
  char v9; // si
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // rdi
  char v19; // r13
  _DWORD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // r15d
  int v28; // r8d
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // si
  __int64 v43; // rdx
  _QWORD *ChildDescriptor; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  _DWORD *v48; // r14
  __int64 v49; // rax
  int v50; // eax
  bool v51; // cl
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  int updated; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v65; // rax
  int v66; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+28h] [rbp-D8h]
  int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+38h] [rbp-C8h]
  char v71; // [rsp+51h] [rbp-AFh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v74[104]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v75[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v76[10]; // [rsp+120h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v8 = a3;
  v71 = 0;
  v9 = a2;
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    v65 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v65 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v65);
    return 3221225485LL;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 3304), 1u);
    v6 = 1;
    v71 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 236) - 1) > 1 || *(_DWORD *)(v5 + 3976) == 1 || *(_DWORD *)(v5 + 284) != 1 )
  {
    KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
    LODWORD(v13) = -1073741661;
    v63 = WdLogNewEntry5_WdWarning(v61, v60, v62);
    *(_QWORD *)(v63 + 24) = -1073741661LL;
    WdLogEvent5_WdWarning(v63);
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(v5 + 3904) & 1) != 0 )
  {
    LOBYTE(v11) = 1;
    v12 = DpiAcquireCoreSyncAccessSafe(a1, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = v13;
      WdLogEvent5_WdError(v16);
      goto LABEL_80;
    }
    DxgkStartDisplayCalloutBatch(*(_QWORD *)(v5 + 3896));
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(v5 + 3905) & 8) != 0 )
    {
      memset(v76, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v76[1]);
      v18 = *(_QWORD **)(v5 + 3464);
      v76[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v76[3]) = 60;
      LOBYTE(v76[6]) = -1;
      if ( v18 != (_QWORD *)(v5 + 3464) )
      {
        v19 = v8;
        do
        {
          v20 = v18 - 4;
          v18 = (_QWORD *)*v18;
          if ( v20[4] == 1 )
          {
            v21 = *v20 == 1 ? (unsigned int)v20[1] : 4294967294LL;
            LOBYTE(v17) = 1;
            LOBYTE(v69) = 1;
            LOBYTE(v68) = a5;
            LOBYTE(v67) = v19;
            LOBYTE(v66) = a4;
            v22 = DpiPdoHandleChildConnectionChange(
                    *(_QWORD *)(v5 + 24),
                    (unsigned int)v20[6],
                    v21,
                    v17,
                    v66,
                    v67,
                    v68,
                    v69,
                    v76);
            v25 = v22;
            if ( v22 < 0 )
            {
              v26 = WdLogNewEntry5_WdError(v24, v23);
              *(_QWORD *)(v26 + 24) = v25;
              WdLogEvent5_WdError(v26);
            }
          }
        }
        while ( v18 != (_QWORD *)(v5 + 3464) );
        v8 = v19;
      }
    }
  }
  do
  {
    while ( 1 )
    {
      v27 = 0;
      memset(v75, 0, sizeof(v75));
      memset(v74, 0, sizeof(v74));
      EtwActivityIdControl(3u, (LPGUID)&v74[32]);
      *(_QWORD *)&v74[88] = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)&v74[48] = 60;
      v74[72] = -1;
      v74[101] = a5;
      v74[100] = v8;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3520), &LockHandle);
      *(_DWORD *)(v5 + 3516) = 2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v29 = *(_QWORD *)(v5 + 48);
      v30 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v5 + 3905) & 8) != 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pxqqqqq_EtwWriteTransfer(
            0,
            (unsigned int)&EventEnterDdiQueryConnectionChange,
            v28,
            v29,
            0,
            0,
            0,
            -2,
            0,
            0);
        v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v30 + 1136))(v29, v74);
        v36 = 0LL;
        v13 = v33;
        if ( bTracingEnabled )
        {
          if ( v33 < 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pxqqqqq_EtwWriteTransfer(
                0,
                (unsigned int)&EventEnterDdiQueryConnectionChange,
                v35,
                v29,
                0,
                0,
                0,
                -2,
                0,
                v33);
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pxqqqqq_EtwWriteTransfer(
              HIBYTE(*(_DWORD *)&v74[8]) & 0xF,
              (unsigned int)&EventExitDdiQueryConnectionChange,
              v35,
              v29,
              v74[0],
              v74[8],
              v74[11] & 0xF,
              v74[12],
              v74[16],
              v33);
          }
        }
        v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v34);
        v37[3] = *(unsigned int *)v74;
        v37[4] = *(_DWORD *)&v74[8] & 0xFFFFFF;
        v37[5] = (*(_QWORD *)&v74[8] >> 24) & 0xFLL;
        v32 = *(unsigned int *)&v74[16];
        v37[6] = *(unsigned int *)&v74[16];
        v37[7] = v13;
      }
      else
      {
        LODWORD(v13) = DpiFdoHandleQueryConnectionChange(v5, v74);
      }
      if ( (int)v13 < 0 )
      {
        v38 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v38 + 24) = (int)v13;
        WdLogEvent5_WdError(v38);
        break;
      }
      if ( (_DWORD)v13 == 255 )
        break;
      if ( v74[102] )
      {
        DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v5 + 3896));
        MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v5 + 3896));
      }
      else
      {
        v39 = *(_DWORD *)&v74[8] & 0xFFFFFF | (*(_DWORD *)&v74[96] << 24);
        v40 = HIBYTE(*(_DWORD *)&v74[8]) & 0xF;
        if ( (unsigned int)v40 < 4 )
        {
LABEL_48:
          v41 = WdLogNewEntry5_WdError(v40, v31);
          *(_QWORD *)(v41 + 24) = (*(_QWORD *)&v74[8] >> 24) & 0xFLL;
          *(_QWORD *)(v41 + 32) = (int)v13;
          WdLogEvent5_WdError(v41);
          LODWORD(v13) = -1073741811;
LABEL_49:
          v8 = a3;
          if ( (int)v13 < 0 )
            break;
        }
        else
        {
          if ( (unsigned int)v40 <= 6 )
          {
            updated = DpiFdoHandleTargetConnectionState(v5, v74);
          }
          else
          {
            if ( (((_DWORD)v40 - 8) & 0xFFFFFFFD) != 0 )
            {
              if ( (unsigned int)(v40 - 12) > 2 )
                goto LABEL_48;
            }
            else
            {
              ChildDescriptor = DpiFdoGetChildDescriptor(v5, v39);
              v48 = ChildDescriptor;
              if ( !ChildDescriptor )
              {
                v49 = WdLogNewEntry5_WdError(v46, v45);
                *(_QWORD *)(v49 + 24) = -1073741810LL;
LABEL_78:
                WdLogEvent5_WdError(v49);
                goto LABEL_49;
              }
              if ( *(_DWORD *)ChildDescriptor == 1 )
              {
                LOBYTE(v47) = (*(_BYTE *)(v5 + 3905) & 0x10) != 0;
                v50 = DmmProcessHPDFiltering(*(_QWORD *)(v5 + 3896), v74, v75, v47, &v74[32]);
                LODWORD(v47) = *(_DWORD *)&v74[8];
                v27 = v50;
              }
              if ( v27 != 1 )
              {
                v51 = v27 == 3 || v74[100];
                v52 = v47 & 0xF000000;
                LOBYTE(v69) = v74[103];
                LOBYTE(v52) = (_DWORD)v52 == 167772160;
                LOBYTE(v68) = v74[101];
                LOBYTE(v67) = v51;
                LOBYTE(v66) = 0;
                v53 = DpiPdoHandleChildConnectionChange(
                        *(_QWORD *)(v5 + 24),
                        v39,
                        *(unsigned int *)&v74[12],
                        v52,
                        v66,
                        v67,
                        v68,
                        v69,
                        &v74[24]);
                v13 = v53;
                if ( v53 < 0 )
                {
                  v56 = WdLogNewEntry5_WdError(v55, v54);
                  *(_QWORD *)(v56 + 24) = v13;
                  WdLogEvent5_WdError(v56);
                }
              }
              if ( *v48 == 1 )
                DmmUpdateHPDFilteringTelemetry(
                  *(void **)(v5 + 3896),
                  (struct _DMM_HPD_FILTER_INFO *)v75,
                  (struct _GUID *)&v74[32],
                  v39,
                  (_DWORD)v13 == 0x40000000);
              if ( (v27 & 0xFFFFFFFD) == 0 || v27 == 3 && (_DWORD)v13 != 0x40000000 )
                goto LABEL_49;
              v8 = a3;
            }
            updated = DmmUpdateTargetLinkTrainingState(
                        *(void **)(v5 + 3896),
                        (struct _DXGK_CONNECTION_CHANGE *)v74,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v74[24],
                        v27 != 0);
          }
          v13 = updated;
          if ( updated < 0 )
          {
            v49 = WdLogNewEntry5_WdError(v59, v58);
            *(_QWORD *)(v49 + 24) = v13;
            goto LABEL_78;
          }
        }
      }
    }
    v42 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 3520), &LockHandle);
    if ( (*(_DWORD *)(v5 + 3516) & 1) == 0 )
    {
      *(_DWORD *)(v5 + 3516) = 0;
      v42 = 0;
      KeSetEvent((PRKEVENT)(v5 + 3528), 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  while ( v42 );
  v6 = v71;
  if ( (*(_BYTE *)(v5 + 3904) & 1) != 0 )
  {
    DxgkEndDisplayCalloutBatch(*(_QWORD *)(v5 + 3896));
    LOBYTE(v43) = 1;
    DpiReleaseCoreSyncAccessSafe(a1, v43);
  }
  if ( (int)v13 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 3644), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v5 + 152), BusRelations);
  }
LABEL_80:
  if ( v6 )
  {
    ExReleaseResourceLite((PERESOURCE)(v5 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
