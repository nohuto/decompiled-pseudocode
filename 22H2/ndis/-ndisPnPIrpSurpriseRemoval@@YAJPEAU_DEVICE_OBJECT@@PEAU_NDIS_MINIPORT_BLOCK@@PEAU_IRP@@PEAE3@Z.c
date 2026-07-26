/*
 * XREFs of ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C008131C
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B510 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00629C0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018AF4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0018D28 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0019A3C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C008C224 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F2C4 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int PnPFlags; // eax
  bool v9; // zf
  bool v10; // cc
  __int64 result; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x27u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved(a2, 3LL, a3, a4);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceSurpriseRemoval);
  PnPFlags = a2->PnPFlags;
  a2->Flags |= 4u;
  a2->PnPFlags = PnPFlags & 0xFFFEFFEF | 0x10;
  if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted && (a2->PnPFlags & 0x4000) == 0 )
    ndisDevicePnPEventNotifyMiniport(a2, NdisDevicePnPEventSurpriseRemoved, 0LL, 0);
  ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
  v9 = a2->MajorNdisVersion == 6;
  v10 = a2->MajorNdisVersion <= 6u;
  a2->PnPDeviceState = NdisPnPDeviceRemoved;
  if ( !v10 || v9 && a2->MinorNdisVersion >= 0x28u )
  {
    a2->SurpriseRemovalWorkItem.List.Flink = 0LL;
    a2->SurpriseRemovalWorkItem.WorkerRoutine = ndisQueuedPnPIrpSurpriseRemoval;
    a2->SurpriseRemovalWorkItem.Parameter = a2;
    ExQueueWorkItem(&a2->SurpriseRemovalWorkItem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisPnPIrpSurpriseRemovalInner(a2);
  }
  if ( a3 )
    a3->IoStatus.Status = 0;
  *a5 = 1;
  result = 0LL;
  *a4 = 0;
  return result;
}
