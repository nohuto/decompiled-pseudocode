/*
 * XREFs of ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00219D4
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B510 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0021828 (-ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0021954 (-ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0021BD8 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C00220AC (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int started; // edi
  _IO_STACK_LOCATION *v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x1Fu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceStart);
  v8 = 4;
  a2->PnPFlags = a2->PnPFlags & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( (unsigned int)ndisMInvokeStartDevice(a2, a3) )
  {
    started = -1073741823;
  }
  else
  {
    v8 = 9;
    started = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
  }
  if ( started >= 0 )
  {
    if ( a2->MajorNdisVersion <= 6u && (a2->MajorNdisVersion != 6 || a2->MinorNdisVersion < 0x1Eu)
      || ndisStartDeviceSync )
    {
      v8 = 4;
      started = ndisStartDeviceSynchronous(a2, a3);
    }
    else
    {
      v11 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v8 = 4;
      v11->Control |= 1u;
      v12 = ndisScheduleStartDeviceWorkItem((_LIST_ENTRY *)a2, (_LIST_ENTRY *)a3);
      if ( !v12 )
        goto LABEL_11;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v12;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x20u,
          (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
          (char)a2,
          v14);
      }
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_11:
  NdisTraceLoggingDeviceStarted(a2, v8, (unsigned int)started);
  *a5 = 0;
  return (unsigned int)started;
}
