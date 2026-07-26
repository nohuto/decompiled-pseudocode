/*
 * XREFs of ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012B830
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisSetEvent @ 0x1C0008C20 (NdisSetEvent.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014CCC (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0015188 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0015B44 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0015B70 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015C78 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015CF8 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018AF4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00191A0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019C90 (NdisMIndicateStatusEx.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019F4C (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A084 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A5E8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A680 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A954 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BB18 (WPP_RECORDER_SF_qdL.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060BB8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067E98 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0071C9C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0083CC8 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0083EAC (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C00FC2B0 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FC7A4 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FC86C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FE4CC (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FE8EC (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FEB80 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FEBB4 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FED00 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FEDE0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C011EF60 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0124330 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012CA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013AA18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerOn(_QWORD *a1)
{
  char *v1; // rbx
  KIRQL v3; // r14
  char v4; // r15
  __int64 v5; // rcx
  _IRP *v6; // rsi
  enum _DEVICE_POWER_STATE DeviceState; // r12d
  int Status; // edi
  int v9; // edx
  int SetMiniportDeviceState; // edi
  KIRQL v11; // dl
  unsigned __int8 v12; // al
  KIRQL v13; // dl
  enum _NDIS_DEVICE_PNP_EVENT v14; // edx
  unsigned int v15; // r9d
  KIRQL v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  _DEVICE_OBJECT *v19; // rcx
  POWER_STATE v20; // r8d
  KIRQL v21; // dl
  KIRQL v22; // dl
  __int64 v23; // rax
  KIRQL v24; // dl
  KSPIN_LOCK *v25; // rcx
  KIRQL v26; // dl
  unsigned int v27; // eax
  KIRQL v28; // cl
  struct _NDIS_MINIPORT_BLOCK *v29; // rdx
  __int64 v30; // [rsp+38h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+58h] [rbp-B0h] BYREF
  char v32[4]; // [rsp+5Ch] [rbp-ACh]
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  char v34[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v36; // [rsp+178h] [rbp+70h] BYREF
  int v37; // [rsp+180h] [rbp+78h]
  __int128 v38; // [rsp+188h] [rbp+80h] BYREF
  __int128 v39; // [rsp+198h] [rbp+90h]
  __int64 v40; // [rsp+1A8h] [rbp+A0h]

  v1 = (char *)(a1 - 671);
  NewIrql[1] = 0;
  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v33 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v3 = 0;
  v38 = 0LL;
  v40 = 0LL;
  v4 = 0;
  v39 = 0LL;
  NewIrql[2] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x43u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      v1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)v1 + 30) & 0x80u) != 0 )
  {
    v6 = 0LL;
    *(_DWORD *)v32 = 0;
    DeviceState = PowerDeviceD0;
  }
  else
  {
    v6 = (_IRP *)a1[4];
    DeviceState = v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
    *(_DWORD *)v32 = v6->IoStatus.Status;
  }
  a1[4] = 0LL;
  if ( *((_DWORD *)v1 + 380) != 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x44u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v1);
    if ( (byte_1C00E71C1 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        v5,
        &PowerOnMiniportNotStarted,
        (const GUID *)(v1 + 4008),
        (__int64)(v1 + 4008),
        *((_DWORD *)v1 + 1014),
        *((_QWORD *)v1 + 503),
        1);
    v19 = (_DEVICE_OBJECT *)*((_QWORD *)v1 + 478);
    v20.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *((POWER_STATE *)v1 + 967) = v20;
    PoSetPowerState(v19, DevicePowerState, v20);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v1 + 5224));
    ndisScheduleD0CompleteSignalWorkItem((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
    IofCompleteRequest(v6, 0);
    goto LABEL_58;
  }
  if ( (*((_DWORD *)v1 + 31) & 0x10) == 0 )
  {
    Status = *(_DWORD *)v32;
    if ( *(int *)v32 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x47u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          (char)v1,
          *(_DWORD *)v32);
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x48u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          v1);
      if ( *((_DWORD *)v1 + 967) != 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x49u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            v1);
        if ( (byte_1C00E71C1 & 8) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            v5,
            &MiniportPoweringUp,
            (const GUID *)(v1 + 4008),
            (__int64)(v1 + 4008),
            *((_DWORD *)v1 + 1014),
            *((_QWORD *)v1 + 503),
            2);
        if ( (*((_DWORD *)v1 + 31) & 0x20) != 0 )
        {
          if ( (ndisAoAcCapable || ndisAoAcTest)
            && ((unsigned __int8)v1[32] > 6u || v1[32] == 6 && (unsigned __int8)v1[33] >= 0x1Eu) )
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
            ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
            v21 = NewIrql[0];
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v21);
            v4 = 1;
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(
                                     (struct _NDIS_MINIPORT_BLOCK *)v1,
                                     DeviceState,
                                     0xFD010101,
                                     1);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qdL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              0xEu,
              0x4Au,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              (char)v1,
              DeviceState,
              SetMiniportDeviceState);
          if ( SetMiniportDeviceState )
          {
            if ( v4 )
            {
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
              ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
              v22 = NewIrql[0];
              *((_QWORD *)v1 + 65) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v22);
              v4 = 0;
            }
          }
          else
          {
            *((_DWORD *)v1 + 967) = DeviceState;
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
          ndisSetWakeUpTimer((struct _NDIS_MINIPORT_BLOCK *)v1);
          v11 = NewIrql[0];
          *((_QWORD *)v1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v11);
        }
        else if ( (*(_WORD *)(*((_QWORD *)v1 + 470) + 26LL) & 1) == 0 && (*((_DWORD *)v1 + 31) & 0x4000) != 0 )
        {
          SetMiniportDeviceState = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        else
        {
          SetMiniportDeviceState = 0;
        }
        if ( SetMiniportDeviceState )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = SetMiniportDeviceState;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x4Cu,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              (char)v1,
              v30);
          }
          if ( (*((_DWORD *)v1 + 30) & 0x80u) != 0 )
            *(_DWORD *)v32 = -1073741823;
          else
            v6->IoStatus.Status = -1073741823;
          *((_QWORD *)v1 + 508) = 2LL;
          if ( ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, 0xCu) )
          {
            v23 = *((_QWORD *)v1 + 505);
            if ( *(_DWORD *)(v23 + 1112) != 2 )
            {
              *(_DWORD *)(v23 + 1112) = 2;
              *(_DWORD *)(*((_QWORD *)v1 + 505) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification((struct _NDIS_MINIPORT_BLOCK *)v1);
              LODWORD(v33) = 1;
            }
            ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          NewIrql[2] = 1;
          if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) )
          {
            NdisSetEvent((PNDIS_EVENT)(v1 + 3728));
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
            if ( !v4 )
              ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
            v12 = ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v1, 1, NewIrql[0]);
            v13 = NewIrql[0];
            LODWORD(v33) = v12;
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v13);
            _m_prefetchw(v1 + 4424);
            if ( (_InterlockedOr((volatile signed __int32 *)v1 + 1106, 0) & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v1, 1u);
              _InterlockedAnd((volatile signed __int32 *)v1 + 1106, 0xFFFFFFEF);
            }
            NewIrql[1] = 1;
            HIDWORD(v33) = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)v1, v14, (char *)&v33 + 4, v15);
            if ( (unsigned __int8)v1[32] < 6u )
              ndisQueryMediaStatus((struct _NDIS_MINIPORT_BLOCK *)v1);
          }
          *((_DWORD *)v1 + 967) = DeviceState;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = DeviceState;
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x4Bu,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              (char)v1,
              v30);
          }
          NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, DeviceState);
          if ( (byte_1C00E71C1 & 8) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v5,
              &DevicePowerStateChange,
              (const GUID *)(v1 + 4008),
              (__int64)(v1 + 4008),
              *((_DWORD *)v1 + 1014),
              *((_QWORD *)v1 + 503),
              1,
              DeviceState);
          if ( (*((_DWORD *)v1 + 30) & 0x80u) == 0 )
            PoSetPowerState(*((PDEVICE_OBJECT *)v1 + 478), DevicePowerState, (POWER_STATE)DeviceState);
        }
        v16 = NewIrql[1];
        Status = *(_DWORD *)v32;
        v3 = NewIrql[1];
LABEL_38:
        if ( (*((_DWORD *)v1 + 30) & 0x80u) == 0 )
        {
          Status = v6->IoStatus.Status;
          *(_DWORD *)v32 = Status;
          IofCompleteRequest(v6, 0);
        }
        if ( Status < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = Status;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x4Du,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              (char)v1,
              v30);
          }
          if ( (byte_1C00E71C3 & 2) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v5,
              &DevicePowerOnFailed,
              (const GUID *)(v1 + 4008),
              (__int64)(v1 + 4008),
              *((_DWORD *)v1 + 1014),
              *((_QWORD *)v1 + 503),
              Status,
              1,
              0);
          ndisMiniportFatalError((struct _NDIS_MINIPORT_BLOCK *)v1, NdisMEventErr_FailedPowerD0);
        }
        if ( *((int *)v1 + 468) < 0 )
          ndisReturnQueuedLowPowerNbls((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v1 + 5224));
        if ( !v3 )
          goto LABEL_48;
        ndisIssueNetEventSetPowerEvent(
          (struct _NDIS_MINIPORT_BLOCK *)v1,
          DeviceState,
          (*((_DWORD *)v1 + 30) & 0x80) == 0);
        ndisNotifyDevicePowerStateChange((struct _NDIS_MINIPORT_BLOCK *)v1, DeviceState);
        if ( (*((_DWORD *)v1 + 31) & 0x10000000) != 0 )
        {
          if ( (*((_DWORD *)v1 + 30) & 0x20000000) == 0 )
            goto LABEL_46;
          while ( 1 )
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
            v25 = (KSPIN_LOCK *)(v1 + 96);
            if ( !v1[89] )
              break;
            v26 = NewIrql[0];
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLock(v25, v26);
            KeStallExecutionProcessor(1u);
          }
          v1[89] = 1;
          *((_QWORD *)v1 + 233) = KeGetCurrentThread();
          *((_QWORD *)v1 + 65) = 0LL;
          KeReleaseSpinLockFromDpcLevel(v25);
          v27 = *((_DWORD *)v1 + 87);
          *((_DWORD *)v1 + 30) &= ~0x20000000u;
          StatusIndication.Flags |= 8u;
          *((_QWORD *)&v38 + 1) = v27;
          v39 = *(_OWORD *)(v1 + 2760);
          v40 = *(_QWORD *)(v1 + 812);
          StatusIndication.StatusBufferSize = 40;
          StatusIndication.StatusBuffer = &v38;
          *(_QWORD *)&v38 = 0x100280180LL;
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.SourceHandle = v1;
          StatusIndication.StatusCode = 1073807383;
          NdisMIndicateStatusEx(v1, &StatusIndication);
          v28 = NewIrql[0];
          v1[89] = 0;
          *((_QWORD *)v1 + 233) = 0LL;
          if ( v28 != 2 )
            KeLowerIrql(v28);
          Status = *(_DWORD *)v32;
        }
        if ( (*((_DWORD *)v1 + 30) & 0x20000000) != 0 )
        {
LABEL_48:
          ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, Status);
          ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)v1, 1, 2048, RunAsynchronous);
          if ( NewIrql[2] )
          {
            v17 = *((_DWORD *)v1 + 671);
            if ( (v17 & 0x100) != 0 )
            {
              *((_DWORD *)v1 + 671) = v17 & 0xFFFFFEFF;
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v1 + 5104));
              if ( Ndis::BindState::SetPause((Ndis::BindState *)(v1 + 5032), DatapathRunning, PauseReason_LowPower) )
              {
                memset(v34, 0, sizeof(v34));
                if ( (unsigned __int8)byte_1C00E547B >= 4u )
                {
                  ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v1, (struct NDIS_PNPTRACE_LOCALS *)v34);
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_Zq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      (int)v29,
                      0x1Cu,
                      0x4Eu,
                      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
                      *(unsigned __int16 **)&v34[8],
                      *(_QWORD *)v34);
                }
              }
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5104), v29);
              Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5104), RunSynchronous, 1);
            }
          }
          if ( (!ndisAoAcCapable && !ndisAoAcTest || (_DWORD)v33)
            && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1)
            && *((_DWORD *)v1 + 380) == 1
            && ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, 0xDu) )
          {
            v18 = *((_QWORD *)v1 + 505);
            LODWORD(v36) = 786816;
            HIDWORD(v36) = *(_DWORD *)(v18 + 1112);
            v37 = *(_DWORD *)(v18 + 1116);
            memset(&StatusIndication, 0, sizeof(StatusIndication));
            StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
            StatusIndication.StatusBuffer = &v36;
            StatusIndication.SourceHandle = v1;
            StatusIndication.StatusCode = 1073807395;
            StatusIndication.StatusBufferSize = 12;
            NdisMIndicateStatusEx(v1, &StatusIndication);
            ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)v1, MPIFREF_DEVPOWERUP);
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x4Fu,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              v1);
LABEL_58:
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0xCu);
          ndisDereferencePackage((PVOID *)&ndisPkgs);
          return;
        }
LABEL_46:
        if ( v16 )
          ndisSetMediaDisconnectTimer((struct _NDIS_MINIPORT_BLOCK *)v1);
        goto LABEL_48;
      }
      v16 = 0;
      if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) && *((_DWORD *)v1 + 380) == 1 )
      {
        NdisSetEvent((PNDIS_EVENT)(v1 + 3728));
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
        ndisMRestoreOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 4u);
        v24 = NewIrql[0];
        *((_QWORD *)v1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v24);
        v3 = 1;
        goto LABEL_38;
      }
    }
    v16 = 0;
    goto LABEL_38;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x45u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      v1);
  if ( (byte_1C00E71C1 & 8) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer(
      v5,
      &PowerOnMiniportRemoved,
      (const GUID *)(v1 + 4008),
      (__int64)(v1 + 4008),
      *((_DWORD *)v1 + 1014),
      *((_QWORD *)v1 + 503),
      1);
  IofCompleteRequest(v6, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(v1 + 5224));
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0xCu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x46u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      v1);
}
