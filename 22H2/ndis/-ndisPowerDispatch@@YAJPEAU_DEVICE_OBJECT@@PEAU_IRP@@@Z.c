/*
 * XREFs of ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0016710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015314 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0083DF4 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B578 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  void *DeviceExtension; // rdi
  char v4; // si
  _DEVICE_OBJECT *v5; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS Power; // eax
  int v8; // edx
  unsigned int v9; // esi
  _IO_STACK_LOCATION *v11; // rax
  _IO_STACK_LOCATION *v12; // rax
  char v13[8]; // [rsp+30h] [rbp-28h]

  DeviceExtension = a1->DeviceExtension;
  v4 = (char)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x76u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)DeviceExtension,
      Irp);
  if ( *(_BYTE *)DeviceExtension != 17 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x77u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v4,
        Irp);
    v9 = -1073741808;
    Irp->IoStatus.Status = -1073741808;
    goto LABEL_30;
  }
  v5 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 480);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x78u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      DeviceExtension);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x7Au,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          DeviceExtension);
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
      *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v11[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v11->Parameters.ReadWriteConfig.Length;
      v11[-1].FileObject = v11->FileObject;
      v11[-1].Control = 0;
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v12[-1].Context = DeviceExtension;
      v12[-1].Control = -32;
      goto LABEL_25;
    case 1u:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x79u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          DeviceExtension);
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      }
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v9 = IoSynchronousCallDriver(v5, Irp);
      Irp->IoStatus.Status = v9;
LABEL_30:
      IofCompleteRequest(Irp, 0);
      goto LABEL_14;
    case 2u:
      if ( !KeGetCurrentIrql() )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x7Cu,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            DeviceExtension);
        Power = ndisSetPower(Irp, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
        goto LABEL_13;
      }
      goto LABEL_34;
  }
  if ( CurrentStackLocation->MinorFunction != 3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = CurrentStackLocation->MinorFunction;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Du,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)DeviceExtension,
        *(_QWORD *)v13);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    }
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
LABEL_25:
    Power = IofCallDriver(v5, Irp);
LABEL_13:
    v9 = Power;
    goto LABEL_14;
  }
  if ( !KeGetCurrentIrql() )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x7Bu,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        DeviceExtension);
    Power = ndisQueryPower(Irp, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    goto LABEL_13;
  }
LABEL_34:
  ndisQueuePowerIrp((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, Irp);
  v9 = 259;
LABEL_14:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      126,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)DeviceExtension,
      v9);
  }
  return v9;
}
