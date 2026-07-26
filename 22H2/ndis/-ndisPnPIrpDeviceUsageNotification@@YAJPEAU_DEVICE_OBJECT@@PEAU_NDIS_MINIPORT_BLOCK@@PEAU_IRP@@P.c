/*
 * XREFs of ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0080F08
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B510 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0080C3C (-ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisPnPIrpDeviceUsageNotification(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned __int8 v6; // di
  unsigned int v10; // ebp
  unsigned __int8 Lock; // bl
  int v12; // eax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  v10 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options == 1 )
  {
    Lock = CurrentStackLocation->Parameters.SetLock.Lock;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v12 = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
    v10 = v12;
    if ( !Lock || v12 >= 0 )
      ndisPnPHandlePagingIrp(a1, a2, CurrentStackLocation->Parameters.SetLock.Lock);
    a3->IoStatus.Status = v10;
  }
  else
  {
    v6 = 1;
  }
  *a5 = v6;
  return v10;
}
