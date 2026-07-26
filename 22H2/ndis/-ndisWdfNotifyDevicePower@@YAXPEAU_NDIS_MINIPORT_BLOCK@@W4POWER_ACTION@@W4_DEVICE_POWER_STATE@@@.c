/*
 * XREFs of ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003F4CC
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C00628F0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001404C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0015B44 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0017598 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005B414 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005B514 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C005D0F0 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005DF54 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C005DFA0 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0071C9C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ndisWdfDevicePowerDown @ 0x1C00840F0 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C008434C (ndisWdfDevicePowerOn.c)
 *     ?ndisWdfPowerResumeComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8C70 (-ndisWdfPowerResumeComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FEBB4 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifyDevicePower(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  enum _DEVICE_POWER_STATE v3; // esi
  int v4; // ebp
  struct _NDIS_MINIPORT_AOAC *v6; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx

  v3 = (int)a3;
  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x6Du,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a3,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( (byte_1C00E71C1 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      (_DWORD)a1,
      (unsigned int)&MiniportPowerDeviceState,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      v3);
  NDIS_COUNT_POWER_TRANSITION(a1, v3);
  if ( v3 == PowerDeviceD0 )
  {
    AoAc = a1->AoAc;
    if ( AoAc )
    {
      ndisAoAcResumeRefTimeAccumulation(AoAc);
      *((_QWORD *)a1->AoAc + 140) = KeQueryUnbiasedInterruptTime();
    }
    if ( !v4 )
    {
      if ( a1->AoAc && ndisWdfIsAoAcPowerTransition(a1) )
      {
        ndisWdfRequestNicActive(a1, 1LL, 3LL);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisWdfPowerResumeComplete(a1);
        return;
      }
    }
    ndisWdfDevicePowerOn(a1);
  }
  else
  {
    if ( (unsigned int)(v3 - 2) > 2 )
      return;
    v6 = a1->AoAc;
    if ( v6 )
      ndisAoAcPauseRefTimeAccumulation(v6);
    if ( !v4 )
    {
      if ( a1->AoAc && ndisWdfIsAoAcPowerTransition(a1) )
      {
        ndisNicQuietRequestComplete(0LL, 2u, (POWER_STATE)v3, a1, 0LL);
      }
      else if ( a1->SelectiveSuspend )
      {
        return;
      }
    }
    if ( (a1->PnPFlags & 0x800) != 0
      || (KeClearEvent(&a1->OpenReadyEvent.Event), ndisPrepForLowPowerCommon(a1, v3), (a1->PnPFlags & 0x800) != 0) )
    {
      ndisSetDeviceInterfaceState(a1, 0);
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    }
    ndisWdfDevicePowerDown(a1, v3);
  }
}
