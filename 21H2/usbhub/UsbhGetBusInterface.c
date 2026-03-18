/*
 * XREFs of UsbhGetBusInterface @ 0x1C004BB30
 * Callers:
 *     UsbhBusIfAddDevice @ 0x1C004B330 (UsbhBusIfAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001F540 (memmove.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhGetBusInterface(
        struct _DEVICE_OBJECT *a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  size_t v5; // r14
  _DWORD *v9; // rdi
  _WORD *Pool2; // rbx
  PIRP Irp; // rax
  IRP *v13; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v15; // rax
  NTSTATUS Status; // edi
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  memset(&Event, 0, sizeof(Event));
  v9 = FdoExt((__int64)a1);
  Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v5, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v9 + 151) + 76LL), 0);
  v13 = Irp;
  if ( !Irp )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  Irp->IoStatus.Status = -1073741637;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( IoSetCompletionRoutineEx(a1, v13, (PIO_COMPLETION_ROUTINE)UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
    CurrentStackLocation[-1].Context = &Event;
    CurrentStackLocation[-1].Control = -32;
  }
  v15 = v13->Tail.Overlay.CurrentStackLocation;
  v15[-1].Parameters.CreatePipe.Parameters = 0LL;
  v15[-1].Parameters.WMI.ProviderId = a3;
  v15[-1].Parameters.QueryInterface.Version = a5;
  *(_WORD *)&v15[-1].MajorFunction = 2075;
  v15[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Pool2;
  v15[-1].Parameters.QueryInterface.Size = v5;
  Status = IofCallDriver(*((PDEVICE_OBJECT *)v9 + 151), v13);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = v13->IoStatus.Status;
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
  IoFreeIrp(v13);
  ExFreePoolWithTag(Pool2, 0);
  Log((__int64)a1, 8, 1197634409, 0LL, Status);
  return (unsigned int)Status;
}
