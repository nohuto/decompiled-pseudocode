/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A040 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00AD130 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0117F44 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0016384 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     NdisMSleep @ 0x1C00174F0 (NdisMSleep.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C00195F8 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001A70C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001A7A0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A890 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001ADC8 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C520 (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E3DC (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C0020190 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C0020548 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00214C0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037A88 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ?ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C006FA4C (-ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006FAF4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006FDA8 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006FE24 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C00701C8 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0071BB4 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C00880D8 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C008F960 (-ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090624 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00906B4 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090708 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090A40 (-ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090AD8 (-ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@.c)
 *     ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090BD8 (-ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090CC8 (-ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0091194 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00AB458 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0107B2C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // r13d
  int StatusCode; // edi
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 *StatusBuffer; // r15
  unsigned __int8 updated; // r12
  int *v8; // rdx
  bool v9; // zf
  KSPIN_LOCK *p_Lock; // rsi
  int v11; // eax
  bool v12; // al
  KIRQL v13; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rsi
  unsigned int Flags; // eax
  unsigned int v16; // r13d
  KIRQL v17; // dl
  int v18; // edx
  int v19; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // edx
  bool v25; // cl
  _NET_IF_MEDIA_CONNECT_STATE v26; // eax
  char v27; // di
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // r9
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // al
  KIRQL v32; // dl
  unsigned __int8 v33; // al
  KIRQL v34; // dl
  unsigned __int8 v35; // al
  KIRQL v36; // dl
  char v37; // si
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rdx
  size_t IndirectionTableSize; // r8
  KIRQL v40; // dl
  bool v41; // di
  unsigned __int8 v42; // al
  KIRQL v43; // dl
  unsigned __int16 v44; // r9
  struct _NDIS_MINIPORT_BLOCK *SourceHandle; // rcx
  int v46; // edi
  _OWORD *v47; // rax
  unsigned int v48; // eax
  unsigned __int8 v49; // [rsp+20h] [rbp-49h]
  unsigned __int8 *v50; // [rsp+28h] [rbp-41h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-29h] BYREF
  int v52; // [rsp+44h] [rbp-25h]
  BOOL v53; // [rsp+48h] [rbp-21h]
  unsigned int v54; // [rsp+4Ch] [rbp-1Dh]
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+58h] [rbp-11h]
  __int64 v56; // [rsp+60h] [rbp-9h] BYREF
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // [rsp+68h] [rbp-1h]
  int v58; // [rsp+6Ch] [rbp+3h]
  unsigned __int64 MiniportXmitLinkSpeed; // [rsp+70h] [rbp+7h]
  unsigned __int64 MiniportRcvLinkSpeed; // [rsp+78h] [rbp+Fh]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions; // [rsp+80h] [rbp+17h]
  unsigned int MiniportAutoNegotiationFlags; // [rsp+84h] [rbp+1Bh]

  StatusBufferSize = a2->StatusBufferSize;
  StatusCode = a2->StatusCode;
  v4 = a1;
  StatusBuffer = (__int64 *)a2->StatusBuffer;
  v55 = a1;
  NewIrql[0] = 0;
  updated = 1;
  v54 = StatusBufferSize;
  LOBYTE(v53) = 0;
  LOBYTE(v52) = 0;
  HIDWORD(v56) = 0;
  v58 = 0;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      24,
      178,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      StatusCode);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  v9 = a2->Header.Type == 0x98;
  MiniportMediaDuplexState = v4->MiniportMediaDuplexState;
  MiniportXmitLinkSpeed = v4->MiniportXmitLinkSpeed;
  MiniportRcvLinkSpeed = v4->MiniportRcvLinkSpeed;
  MiniportPauseFunctions = v4->MiniportPauseFunctions;
  MiniportAutoNegotiationFlags = v4->MiniportAutoNegotiationFlags;
  v56 = 2621824LL;
  v58 = 0;
  if ( !v9 || a2->Header.Size < 0x70u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v28 = 179;
    goto LABEL_192;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize >= 4 )
      goto LABEL_9;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v28 = 180;
LABEL_192:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x18u,
      v28,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      v4);
    return;
  }
  if ( (unsigned int)(StatusCode - 1073872902) <= 1 )
  {
    updated = ndisMIndicateOffloadChange(v4, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = 181;
LABEL_102:
        v30 = 4;
LABEL_104:
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v30,
          0x18u,
          v29,
          (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
      v31 = ndisMIndicateReceiveFilterCapsChange(v4, StatusCode, StatusBuffer, StatusBufferSize, 0);
      v32 = NewIrql[0];
      updated = v31;
      v4->MiniportThread = 0LL;
      p_Lock = &v4->Lock;
      KeReleaseSpinLock(&v4->Lock, v32);
      if ( !updated )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v29 = 183;
          goto LABEL_102;
        }
        return;
      }
LABEL_10:
      if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
        v33 = ndisMIndicateHwTimestampCapabilitiesChange(v4, StatusCode, StatusBuffer, StatusBufferSize, 0, 0LL);
        v34 = NewIrql[0];
        v4->MiniportThread = 0LL;
        updated = v33;
        KeReleaseSpinLock(p_Lock, v34);
        if ( !updated )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v29 = 184;
            goto LABEL_102;
          }
          return;
        }
      }
      if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
        v35 = ndisMIndicateNicSwitchCapsChange(v4, StatusCode, StatusBuffer, StatusBufferSize, 0);
        v36 = NewIrql[0];
        v4->MiniportThread = 0LL;
        updated = v35;
        KeReleaseSpinLock(p_Lock, v36);
        if ( !updated )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v29 = 185;
            goto LABEL_102;
          }
          return;
        }
      }
      switch ( StatusCode )
      {
        case 1073873408:
          updated = ndisMIndicatePDConfigChange(v4, (int)v8, StatusBuffer, StatusBufferSize, v49);
          if ( !updated )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v29 = 186;
              goto LABEL_102;
            }
            return;
          }
          break;
        case 1076105216:
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
          if ( ndisIsRssEnabledForMiniport(v4) )
          {
            CombinedNdisRSSParameters = v4->CombinedNdisRSSParameters;
            IndirectionTableSize = StatusBufferSize;
            if ( StatusBufferSize >= CombinedNdisRSSParameters->IndirectionTableSize )
              IndirectionTableSize = CombinedNdisRSSParameters->IndirectionTableSize;
            memmove(
              &CombinedNdisRSSParameters->Header.Type + CombinedNdisRSSParameters->IndirectionTableOffset,
              StatusBuffer,
              IndirectionTableSize);
            v37 = 1;
          }
          else
          {
            v37 = 0;
          }
          v40 = NewIrql[0];
          v4->MiniportThread = 0LL;
          updated = 0;
          KeReleaseSpinLock(&v4->Lock, v40);
          if ( !v37 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return;
            v29 = 187;
            goto LABEL_103;
          }
          break;
        case 1073872995:
          v41 = *(_BYTE *)StatusBuffer != 0;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v50) = v41;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x18u,
              0xBCu,
              (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
              v50);
          }
          ndisMUpdateHiddenFlag(v4, v41);
          ndisIfUpdateInterfaceHiddenFlag(v4->IfBlock, v41);
          return;
        default:
          if ( (unsigned int)(StatusCode - 1073873056) <= 1 )
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
            v42 = ndisMIndicateQosParametersChange(
                    v4,
                    StatusCode,
                    (struct _NDIS_QOS_PARAMETERS *)StatusBuffer,
                    StatusBufferSize);
            v43 = NewIrql[0];
            v4->MiniportThread = 0LL;
            updated = v42;
            KeReleaseSpinLock(p_Lock, v43);
            if ( !updated )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return;
              v29 = 189;
              goto LABEL_103;
            }
          }
          if ( StatusCode == 1073872944 )
          {
            updated = 0;
            if ( StatusBufferSize >= 0x444
              && *(_BYTE *)StatusBuffer == 0x80
              && *((_WORD *)StatusBuffer + 1) >= 0x444u
              && *((_BYTE *)StatusBuffer + 1) >= 2u
              && (*((_DWORD *)StatusBuffer + 1) & 0xFFFF0000) == 0x100000 )
            {
              updated = ndisUpdateRcvFilterQueueParameters(v4, (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)StatusBuffer);
            }
            if ( !updated )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return;
              v29 = 190;
              goto LABEL_103;
            }
          }
          else
          {
            if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
            {
              updated = ndisMIndicateTcpConnectionOffloadChange(v4, StatusCode, StatusBuffer, StatusBufferSize);
              if ( !updated )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  return;
                v29 = 191;
LABEL_103:
                v30 = 3;
                goto LABEL_104;
              }
            }
            if ( StatusCode == 1073938515 )
              ndisMIndicatePMCapabilities(v4, a2);
            if ( StatusCode == 1073938516 )
              ndisMIndicatePMHardwareCapabilities(v4, a2);
            if ( StatusCode == 1073938513 )
              ndisMIndicateWoLPatternReject(v4, a2);
            if ( StatusCode == 1073938514 )
              ndisMIndicatePMOffloadReject(v4, a2);
            if ( StatusCode == 1073938517 )
            {
              updated = ndisMValidatePMWakeReason(v4, a2);
              if ( !updated )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  return;
                v44 = 192;
                goto LABEL_149;
              }
            }
            else
            {
              if ( (unsigned int)(StatusCode - 1073873072) <= 1 )
              {
                SourceHandle = (struct _NDIS_MINIPORT_BLOCK *)a2->SourceHandle;
                if ( SourceHandle != (struct _NDIS_MINIPORT_BLOCK *)0x1C0000000LL )
                {
                  if ( StatusCode == 1073873072 )
                  {
                    if ( !ndisValidateMacAddressChange(v4, a2) )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                        return;
                      v44 = 193;
                      goto LABEL_149;
                    }
                  }
                  else if ( StatusCode == 1073873073
                         && (v4->MajorNdisVersion <= 6u && (v4->MajorNdisVersion != 6 || v4->MinorNdisVersion < 0x32u)
                          || a2->Header.Type != 0x98
                          || !a2->Header.Revision
                          || a2->Header.Size < 0x70u
                          || a2->DestinationHandle
                          || SourceHandle != v4
                          || a2->PortNumber
                          || a2->StatusBufferSize != 4) )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                      return;
                    v44 = 194;
LABEL_149:
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      3u,
                      0x18u,
                      v44,
                      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
                      v4);
                    return;
                  }
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
                  if ( !v4->InterfaceUpdateInProgress )
                  {
                    if ( !ndisReferenceMiniport(v4, 0x3Au) )
                    {
LABEL_175:
                      v4->MiniportThread = 0LL;
                      KeReleaseSpinLock(p_Lock, NewIrql[0]);
                      return;
                    }
                    ExQueueWorkItem(&v4->InterfaceUpdateWorkItem, (WORK_QUEUE_TYPE)40);
                    v4->InterfaceUpdateInProgress = 1;
                  }
                  v46 = StatusCode - 1073873072;
                  if ( v46 )
                  {
                    if ( v46 == 1 )
                    {
                      v4->PendingMtuSize = *(_DWORD *)a2->StatusBuffer;
                      v4->MtuUpdateQueued = 1;
                    }
                  }
                  else
                  {
                    v47 = a2->StatusBuffer;
                    *(_OWORD *)&v4->PendingMacAddress.Length = *v47;
                    *(_OWORD *)&v4->PendingMacAddress.Address[14] = v47[1];
                    *(_WORD *)&v4->PendingMacAddress.Address[30] = *((_WORD *)v47 + 16);
                    v4->MacAddressUpdateQueued = 1;
                  }
                  goto LABEL_175;
                }
              }
              v11 = HIDWORD(v56);
              if ( StatusCode == 1073807372 )
                v11 = 2;
              HIDWORD(v56) = v11;
            }
          }
          break;
      }
      v12 = StatusCode == 1073807372;
      if ( StatusCode == 1073807371 )
      {
        HIDWORD(v56) = 1;
        v12 = 1;
      }
      if ( v12 )
      {
        a2->StatusCode = 1073807383;
        a2->StatusBuffer = &v56;
        StatusBuffer = &v56;
        StatusCode = 1073807383;
        a2->StatusBufferSize = 40;
        StatusBufferSize = 40;
        v54 = 40;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, NewIrql);
      if ( StatusCode == 1073807383 )
      {
        v4->LinkStateIndicationFlags |= 0x18u;
        v19 = *((_DWORD *)StatusBuffer + 1);
        if ( v19 == 1 )
        {
          v19 = 1;
          if ( v4->MiniportMediaConnectState != MediaConnectStateConnected )
          {
            v4->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
            v19 = *((_DWORD *)StatusBuffer + 1);
          }
        }
        v4->MiniportMediaConnectState = v19;
        v4->MiniportMediaDuplexState = *((_DWORD *)StatusBuffer + 2);
        v4->MiniportXmitLinkSpeed = StatusBuffer[2];
        v4->MiniportRcvLinkSpeed = StatusBuffer[3];
        v4->MiniportPauseFunctions = *((_DWORD *)StatusBuffer + 8);
        v4->MiniportAutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
      }
      if ( StatusCode == 1073938437 )
        v4->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
      v13 = NewIrql[0];
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v13);
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(v4, 0LL, 9u);
      if ( HigherFilterWithPnpRef )
      {
        while ( 1 )
        {
          NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilterWithPnpRef, NewIrql);
          Flags = HigherFilterWithPnpRef->Flags;
          HigherFilterWithPnpRef->LockThread = 0LL;
          if ( (Flags & 0x2000) == 0 )
            break;
          KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
            KeStallExecutionProcessor(1u);
          else
            NdisMSleep(0x32u);
        }
        HigherFilterWithPnpRef->Flags |= 0x2000u;
        KeReleaseSpinLockFromDpcLevel(&HigherFilterWithPnpRef->Lock);
        v4 = v55;
        v16 = v54;
        if ( a2->SourceHandle == &ndisIntReqGeneric )
        {
          if ( StatusCode != 1073807383 )
            goto LABEL_42;
          *((_DWORD *)StatusBuffer + 1) = v55->MiniportMediaConnectState;
        }
        if ( StatusCode == 1073807383 )
        {
          if ( v16 == -2 )
          {
            v16 = 40;
            a2->StatusBufferSize = 40;
          }
          if ( !StatusBuffer || v16 < 0x28 )
            goto LABEL_52;
          MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
          v21 = *((_DWORD *)StatusBuffer + 1);
          if ( MediaConnectState != v21 )
          {
            if ( MediaConnectState == MediaConnectStateConnected )
            {
              LOBYTE(v53) = 1;
            }
            else
            {
              v22 = (unsigned __int8)v52;
              if ( v21 == MediaConnectStateConnected )
                v22 = 1;
              v52 = v22;
            }
          }
          HigherFilterWithPnpRef->MediaConnectState = v21;
          HigherFilterWithPnpRef->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
          HigherFilterWithPnpRef->RcvLinkSpeed = StatusBuffer[3];
          HigherFilterWithPnpRef->XmitLinkSpeed = StatusBuffer[2];
          HigherFilterWithPnpRef->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
          HigherFilterWithPnpRef->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
        }
LABEL_42:
        if ( StatusCode == 1073938515 )
          ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, a2);
        if ( StatusCode == 1073938513 )
          updated = ndisFilterIndicateWoLPatternReject(HigherFilterWithPnpRef, a2);
        if ( StatusCode == 1073938514 )
          updated = ndisFilterIndicatePMOffloadReject(HigherFilterWithPnpRef, a2);
        if ( StatusCode == 1073872902 )
          updated = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, StatusBuffer, v16);
        if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
          updated = ndisFIndicateTimestampChange(HigherFilterWithPnpRef, StatusCode, StatusBuffer, v16);
LABEL_52:
        if ( updated )
        {
          if ( HigherFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
            ndisFInvokeStatus(HigherFilterWithPnpRef, a2);
          else
            ndisFIndicateStatusInternal(HigherFilterWithPnpRef, a2);
          KeAcquireSpinLockAtDpcLevel(&v4->Lock);
          v4->MiniportThread = KeGetCurrentThread();
          if ( v53 )
            ndisSwapFilterHandlersForMediaDisconnect(v4, 0LL, HigherFilterWithPnpRef);
          if ( (_BYTE)v52 )
            ndisRestoreFilterHandlersForMediaDisconnect(v4, 0LL, HigherFilterWithPnpRef);
          v4->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v4->Lock);
        }
        KeAcquireSpinLockAtDpcLevel(&HigherFilterWithPnpRef->Lock);
        v17 = NewIrql[0];
        HigherFilterWithPnpRef->Flags &= ~0x2000u;
        HigherFilterWithPnpRef->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v17);
        ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 9u);
LABEL_61:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            24,
            195,
            (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
            (char)v4,
            a2->StatusCode);
        }
        return;
      }
      ndisMAcquireStInLockWithSpinLock(v4, NewIrql);
      if ( a2->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_84;
        *((_DWORD *)StatusBuffer + 1) = v4->MiniportMediaConnectState;
      }
      if ( StatusCode == 1073807383 && StatusBuffer && StatusBufferSize >= 0x28 )
      {
        if ( *((_DWORD *)StatusBuffer + 1) == 1
          || (v23 = v4->Flags,
              v4->Flags = v23 & 0xDFFFFFFF,
              v24 = *((_DWORD *)StatusBuffer + 1),
              v53 = (v23 & 0x20000000) != 0,
              v24 == 1) )
        {
          v48 = v4->Flags;
          v4->Flags = v48 | 0x20000000;
          v24 = *((_DWORD *)StatusBuffer + 1);
          v25 = (v48 & 0x20000000) == 0;
          v52 = v25;
        }
        else
        {
          v25 = v52;
        }
        v26 = v4->MediaConnectState;
        if ( v26 != v24 )
        {
          if ( v26 != MediaConnectStateConnected )
          {
            v27 = v25;
            if ( v24 == 1 )
              v27 = 1;
            goto LABEL_85;
          }
          LOBYTE(v53) = 1;
        }
      }
LABEL_84:
      v27 = v52;
LABEL_85:
      a2->Flags |= 2u;
      ndisIndicateStatusInternal(v4, a2, 2u);
      if ( v53 )
        ndisSwapFilterHandlersForMediaDisconnect(v4, 0LL, 0LL);
      if ( v27 )
        ndisRestoreFilterHandlersForMediaDisconnect(v4, 0LL, 0LL);
      ndisMReleaseStInLockAndSpinLock(v4, NewIrql[0]);
      goto LABEL_61;
    }
LABEL_9:
    p_Lock = &v4->Lock;
    goto LABEL_10;
  }
  updated = ndisMIndicateHDSplitChange(v4, StatusBuffer, StatusBufferSize);
  if ( updated )
    goto LABEL_9;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v29 = 182;
    goto LABEL_102;
  }
}
