/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012BE18
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149E8 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B578 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AF54 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014120 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0015678 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018AF4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060BB8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0071C9C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C0084920 (ndisWdmSendOidPmParametersForSx.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00FC43C (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisMPowerPolicy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        enum _DEVICE_POWER_STATE *a4,
        unsigned __int8 a5)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // edi
  __int64 v6; // rsi
  unsigned int v7; // r13d
  enum _DEVICE_POWER_STATE v10; // r14d
  __int64 EnabledWoLPacketPatterns; // rcx
  unsigned __int16 v13; // r9
  const EVENT_DESCRIPTOR *v14; // rdx
  _DEVICE_POWER_STATE v15; // edx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  int v17; // ecx
  unsigned int PnPFlags; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h]
  struct _NDIS_OID_REQUEST v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[20]; // [rsp+140h] [rbp+40h] BYREF

  MinMagicPacketWakeUp = NdisDeviceStateUnspecified;
  v6 = a2;
  v7 = 0;
  v10 = PowerDeviceD3;
  memset(v23, 0, sizeof(v23));
  EnabledWoLPacketPatterns = (__int64)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x84u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a1,
      a2);
    EnabledWoLPacketPatterns = (__int64)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids;
  }
  if ( (_DWORD)v6 == 6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x85u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1);
    if ( byte_1C00E71C3 < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        &PowerShutdownMiniport,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    *a4 = PowerDeviceD3;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 134;
LABEL_10:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      v13,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
    return 0LL;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x87u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1);
    if ( byte_1C00E71C3 < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        &PowerWakeUpDevice,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        2);
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval(&a1->LastSystemSleepTime);
    }
    *a4 = PowerDeviceD0;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 136;
    goto LABEL_10;
  }
  if ( !a5 )
  {
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (a1->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(a1) || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x89u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1);
    if ( (byte_1C00E71C1 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        &PowerPolicySetD3,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    *a4 = PowerDeviceD3;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x8Au,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1);
    return 0LL;
  }
  if ( (unsigned int)(a1->CurrentDevicePowerState - 2) > 2 )
  {
    if ( (_DWORD)v6 == 5 )
    {
      if ( a3 == PowerSystemShutdown )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v13 = 140;
        goto LABEL_10;
      }
      if ( (ndisAoAcCapable || ndisAoAcTest) && !a1->ModernStandbySystemWakeEnabled )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v13 = 141;
        goto LABEL_10;
      }
    }
    if ( (a1->PnPFlags & 0x40) == 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = 0;
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Eu,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          (char)a1,
          v21);
      }
      if ( (byte_1C00E71C1 & 8) != 0 )
      {
        v14 = (const EVENT_DESCRIPTOR *)&PowerWakeNotEnabled;
LABEL_51:
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          v14,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1);
        goto LABEL_104;
      }
      goto LABEL_104;
    }
    v15 = a1->DeviceCaps.DeviceState[v6];
    if ( (int)v6 >= 5 && ((int)v6 > a1->DeviceCaps.SystemWake || v15 > a1->DeviceCaps.DeviceWake) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Fu,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a1);
      if ( (byte_1C00E71C1 & 8) != 0 )
      {
        v14 = (const EVENT_DESCRIPTOR *)&PowerHibernateOrShutdown;
        goto LABEL_51;
      }
LABEL_104:
      if ( a5 )
      {
LABEL_112:
        *a4 = PowerDeviceD3;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x97u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            (char)a1,
            v6,
            4);
        if ( (byte_1C00E71C1 & 8) != 0 )
          McTemplateK0jqxqq_EtwWriteTransfer(
            EnabledWoLPacketPatterns,
            &PowerPolicyStates,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            v6,
            *a4);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x98u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            a1);
        return v7;
      }
LABEL_105:
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
      {
        memset(&v22.Header.Revision, 0, 0xF7uLL);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x96u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            a1);
        if ( (byte_1C00E71C1 & 8) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            v20,
            &PowerDisableWakeup,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            1);
        *(_DWORD *)v23 = 1311360;
        *(_OWORD *)&v23[4] = 0LL;
        memset(&v22, 0, 0xF8uLL);
        *(_DWORD *)&v22.NdisReserved[16] |= 8u;
        v22.PortNumber = 0;
        *(_QWORD *)&v22.NdisReserved[32] = &ndisIntReqGeneric;
        v22.Header = (NDIS_OBJECT_HEADER)15466902;
        v22.DATA.QUERY_INFORMATION.InformationBuffer = v23;
        v22.DATA.QUERY_INFORMATION.Oid = -50265847;
        v22.RequestType = NdisRequestSetInformation;
        v22.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
        ndisQuerySetMiniport(a1, 0LL, &v22, 0, 0LL);
      }
      goto LABEL_112;
    }
    EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
    if ( (EnabledWoLPacketPatterns & 2) != 0 && a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
      MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
    if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0 )
    {
      MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
      if ( MinPatternWakeUp )
      {
        if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp )
          MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
      }
    }
    if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x90u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a1);
      if ( (byte_1C00E71C1 & 8) != 0 )
      {
        v14 = (const EVENT_DESCRIPTOR *)&PowerPolicyPatternNotEnabled;
        goto LABEL_51;
      }
      goto LABEL_104;
    }
    EnabledWoLPacketPatterns = (unsigned int)a1->DeviceCaps.DeviceWake;
    if ( MinMagicPacketWakeUp <= (int)EnabledWoLPacketPatterns )
      EnabledWoLPacketPatterns = (unsigned int)MinMagicPacketWakeUp;
    if ( (int)v6 > a1->DeviceCaps.SystemWake || v15 > (int)EnabledWoLPacketPatterns || v15 == PowerDeviceUnspecified )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x91u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a1);
      if ( (byte_1C00E71C2 & 0x40) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          &PowerPolicyError,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          2);
      v7 = -1073741823;
      goto LABEL_104;
    }
    EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
    if ( (_DWORD)EnabledWoLPacketPatterns )
    {
      v17 = EnabledWoLPacketPatterns - 1;
      if ( v17 )
      {
        EnabledWoLPacketPatterns = (unsigned int)(v17 - 1);
        if ( (_DWORD)EnabledWoLPacketPatterns )
        {
          if ( (_DWORD)EnabledWoLPacketPatterns != 1 )
            goto LABEL_86;
          if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
            goto LABEL_81;
        }
        EnabledWoLPacketPatterns = 4098LL;
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
        {
          v10 = PowerDeviceD2;
          goto LABEL_81;
        }
      }
      EnabledWoLPacketPatterns = 2049LL;
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
      {
        v10 = PowerDeviceD1;
        goto LABEL_81;
      }
    }
    if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) != 0 )
    {
      v10 = PowerDeviceD0;
LABEL_81:
      if ( v15 > v10 )
      {
        v7 = -1073741823;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v21) = v6;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x93u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            (char)a1,
            v21);
        }
        if ( (byte_1C00E71C2 & 0x40) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            EnabledWoLPacketPatterns,
            &PowerPolicyError,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            4);
      }
      goto LABEL_90;
    }
LABEL_86:
    v7 = -1073741823;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v6;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x92u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)a1,
        v21);
    }
    if ( (byte_1C00E71C2 & 0x40) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        &PowerPolicyError,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        3);
LABEL_90:
    if ( a5 || (ndisMInvokeDevicePowerNotify(a1, v10), !(unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1)) )
    {
      *a4 = v10;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x94u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          (char)a1,
          v6,
          v10);
      if ( (byte_1C00E71C1 & 8) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          &PowerPolicyStates,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          v6,
          *a4);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x95u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a1);
      return v7;
    }
    goto LABEL_105;
  }
  if ( !a5 )
  {
    a1->PnPFlags &= ~0x400u;
    ndisCancelWaitWake(a1);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x8Bu,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
  return 2147483663LL;
}
