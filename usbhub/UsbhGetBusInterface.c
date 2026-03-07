__int64 __fastcall UsbhGetBusInterface(
        struct _DEVICE_OBJECT *a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  size_t v5; // r15
  _DWORD *v8; // r13
  _WORD *Pool2; // rbx
  PIRP Irp; // rax
  IRP *v12; // rsi
  $9B500C4409878D331B0033AC42A76E36 *v13; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v15; // rax
  NTSTATUS Status; // edi
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  memset(&Event, 0, sizeof(Event));
  v8 = FdoExt((__int64)a1);
  Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v5, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v8 + 151) + 76LL), 0);
  v12 = Irp;
  if ( !Irp )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  Irp->IoStatus.Status = -1073741637;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = &v12->Tail.Overlay.64;
  if ( IoSetCompletionRoutineEx(a1, v12, (PIO_COMPLETION_ROUTINE)UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v13->CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
    CurrentStackLocation[-1].Context = &Event;
    CurrentStackLocation[-1].Control = -32;
  }
  v15 = v13->CurrentStackLocation;
  v15[-1].Parameters.CreatePipe.Parameters = 0LL;
  v15[-1].Parameters.WMI.ProviderId = a3;
  v15[-1].Parameters.QueryInterface.Version = a5;
  *(_WORD *)&v15[-1].MajorFunction = 2075;
  v15[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Pool2;
  v15[-1].Parameters.QueryInterface.Size = v5;
  Status = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = v12->IoStatus.Status;
  }
  if ( Status >= 0 )
  {
    if ( Pool2[1] < a5 || *Pool2 < (unsigned __int16)v5 )
    {
      Status = -1073741811;
      UsbhException((__int64)a1, 0, 0x19u, Pool2, 0x20u, -1073741811, 0, usbfile_busif_c, 162, 0);
      (*((void (__fastcall **)(_QWORD))Pool2 + 3))(*((_QWORD *)Pool2 + 1));
    }
    else
    {
      memmove(a2, Pool2, v5);
    }
  }
  IoFreeIrp(v12);
  ExFreePoolWithTag(Pool2, 0);
  Log((__int64)a1, 8, 1197634409, 0LL, Status);
  return (unsigned int)Status;
}
