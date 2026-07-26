/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0115A28
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005B148 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005CE08 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014120 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015F34 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C003AFE0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C005AB48 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005DB80 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005F478 (WPP_RECORDER_SF_qdD_ea_1C005F478.c)
 *     WPP_RECORDER_SF_qlll @ 0x1C005F5B0 (WPP_RECORDER_SF_qlll_ea_1C005F5B0.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00FC43C (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C0114FFC (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115CE0 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisRequestNicQuiet(_QWORD *Context, char a2)
{
  __int64 v2; // rbp
  unsigned int v5; // r12d
  int v6; // edx
  char v7; // cl
  __int16 v8; // r14
  int v9; // r15d
  bool v10; // di
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  char v14; // di
  int v15; // eax
  unsigned int v16; // edi
  int v18; // [rsp+20h] [rbp-58h]

  v2 = Context[557];
  v5 = 4;
  ndisCancelWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
  if ( (*((_BYTE *)Context + 124) & 0x60) == 0x60 && (unsigned int)(*((_DWORD *)Context + 318) - 2) <= 2 )
  {
    v7 = 1;
    if ( *(_BYTE *)(v2 + 386) )
    {
      v8 = *((_WORD *)Context + 2015);
      v9 = *(_DWORD *)(Context[470] + 904LL);
      v10 = ndisDisconnectInStandby();
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qlll(*((_QWORD *)WPP_GLOBAL_Control + 8), v8 != 281, v11, v12, v18);
      v5 = *((_DWORD *)Context + 318);
      ndisMInvokeDevicePowerNotify((struct _NDIS_MINIPORT_BLOCK *)Context, v5);
      if ( v9 == 1 && v8 != 281 && v10 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x26u,
            (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
            Context);
      }
      else
      {
        ndisWdmSendOidPmParametersForAoAc((struct _NDIS_MINIPORT_BLOCK *)Context);
        v13 = ndisRequestWaitWake(
                (struct _NDIS_MINIPORT_BLOCK *)Context,
                (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
        v14 = v13;
        if ( v13 != 259 )
        {
          NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)Context, 5u, v13);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x27u,
              (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
              v14,
              Context);
        }
      }
      goto LABEL_17;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0xEu,
      0x28u,
      (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      (char)Context,
      v7,
      *(unsigned __int8 *)(v2 + 386));
LABEL_17:
  ndisUpdateMiniportCsTrafficStatistics((struct _NDIS_MINIPORT_BLOCK *)Context, 1);
  v15 = ndisRequestDeviceLowPower(
          (struct _NDIS_MINIPORT_BLOCK *)Context,
          (POWER_STATE)v5,
          (PREQUEST_POWER_COMPLETE)ndisNicQuietRequestComplete,
          Context,
          NdisMEventDx_NicQuiet);
  v16 = v15;
  if ( v15 == 259 )
  {
    v16 = 0;
    if ( a2 )
      ndisWaitForKernelObject((void *)(v2 + 392));
  }
  else
  {
    NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)Context, 6u, v15);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x29u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        v16,
        Context);
  }
  return v16;
}
