/*
 * XREFs of ViFilterDispatchPnp @ 0x140ADC600
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     IoDetachDevice @ 0x1402F0C40 (IoDetachDevice.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D0F90 (IoReleaseRemoveLockAndWaitEx.c)
 */

NTSTATUS __fastcall ViFilterDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdx
  int v5; // eax
  int v6; // edi
  struct _DEVICE_OBJECT *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  UCHAR MinorFunction; // cl
  struct _IO_STACK_LOCATION *v11; // rax
  IRP *v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64); // rcx
  struct _IO_STACK_LOCATION *v14; // rax
  NTSTATUS Status; // ebp
  _DWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v16 = DeviceExtension;
  while ( (DeviceExtension[25] & 1) == 0 )
    _mm_pause();
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v16 + 1, Irp, &byte_140ABC2A0, 1u, 0x20u);
  v6 = v5;
  if ( v5 < 0 )
  {
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)v16 + 1);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( !MinorFunction )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = (__int64 (__fastcall *)(__int64, __int64))ViFilterStartCompletionRoutine;
    v12 = Irp;
    v11[-1].Control = -32;
LABEL_14:
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v13;
    v11[-1].Context = &v16;
    return IofCallDriver(v8, v12);
  }
  if ( MinorFunction != 2 )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = Irp;
    v11[-1].Control = -32;
    if ( MinorFunction == 22 )
      v13 = ViFilterDeviceUsageNotificationCompletion;
    else
      v13 = (__int64 (__fastcall *)(__int64, __int64))ViFilterGenericCompletionRoutine;
    goto LABEL_14;
  }
  KeInitializeEvent((PRKEVENT)(v16 + 16), NotificationEvent, 0);
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)ViFilterRemoveNotificationCompletion;
  v14[-1].Context = &v16;
  v14[-1].Control = -32;
  Status = IofCallDriver(v8, Irp);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v16 + 16, Executive, 0, 0, 0LL);
    Status = Irp->IoStatus.Status;
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v16 + 1, Irp, 0x20u);
  IoDetachDevice(v8);
  IoDeleteDevice(DeviceObject);
  IofCompleteRequest(Irp, 0);
  return Status;
}
