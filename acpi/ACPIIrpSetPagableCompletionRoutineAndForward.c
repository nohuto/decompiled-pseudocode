/*
 * XREFs of ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C007BF98
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpEject @ 0x1C0085A60 (ACPIFilterIrpEject.c)
 *     ACPIFilterIrpQueryCapabilities @ 0x1C0085ED0 (ACPIFilterIrpQueryCapabilities.c)
 *     ACPIFilterIrpQueryId @ 0x1C0085F00 (ACPIFilterIrpQueryId.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0086160 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpDeviceState @ 0x1C0086510 (ACPIFilterIrpQueryPnpDeviceState.c)
 *     ACPIFilterIrpSetLock @ 0x1C0086770 (ACPIFilterIrpSetLock.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIIrpSetPagableCompletionRoutineAndForward(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 DeviceExtension; // rbp
  _QWORD *Pool2; // rbx
  PIO_WORKITEM WorkItem; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v15; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1232102209LL);
  if ( !Pool2 )
    goto LABEL_2;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_2:
    Irp->IoStatus.Status = -1073741670;
    IofCompleteRequest(Irp, 0);
    return 3221225626LL;
  }
  Pool2[5] = 0LL;
  *((_BYTE *)Pool2 + 24) = a5;
  *((_BYTE *)Pool2 + 25) = a6;
  *((_BYTE *)Pool2 + 26) = a7;
  Pool2[2] = a3;
  *Pool2 = DeviceObject;
  *((_BYTE *)Pool2 + 27) = 0;
  Pool2[1] = Irp;
  Pool2[4] = WorkItem;
  _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 728));
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v15 = Irp->Tail.Overlay.CurrentStackLocation;
  v15[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIIrpGenericFilterCompletionHandler;
  v15[-1].Context = Pool2;
  v15[-1].Control = -32;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
  return 259LL;
}
