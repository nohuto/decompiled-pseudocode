/*
 * XREFs of UsbhGetBusInterface @ 0x1C004CF30
 * Callers:
 *     UsbhBusIfAddDevice @ 0x1C004C710 (UsbhBusIfAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001DEC0 (memmove.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
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
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbx
  PIRP Irp; // rax
  IRP *v13; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax
  NTSTATUS Status; // edi
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  memset(&Event, 0, sizeof(Event));
  v9 = FdoExt((__int64)a1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v5, 0x42554855u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v5);
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v9 + 151) + 76LL), 0);
  v13 = Irp;
  if ( !Irp )
  {
    ExFreePoolWithTag(v11, 0);
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
  v16 = v13->Tail.Overlay.CurrentStackLocation;
  v16[-1].Parameters.CreatePipe.Parameters = 0LL;
  v16[-1].Parameters.WMI.ProviderId = a3;
  v16[-1].Parameters.QueryInterface.Version = a5;
  *(_WORD *)&v16[-1].MajorFunction = 2075;
  v16[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)v11;
  v16[-1].Parameters.QueryInterface.Size = v5;
  Status = IofCallDriver(*((PDEVICE_OBJECT *)v9 + 151), v13);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = v13->IoStatus.Status;
  }
  if ( Status >= 0 )
  {
    if ( v11[1] < a5 || *v11 < (unsigned __int16)v5 )
    {
      Status = -1073741811;
      UsbhException((__int64)a1, 0, 0x19u, v11, 0x20u, -1073741811, 0, usbfile_busif_c, 162, 0);
      (*((void (__fastcall **)(_QWORD))v11 + 3))(*((_QWORD *)v11 + 1));
    }
    else
    {
      memmove(a2, v11, v5);
    }
  }
  IoFreeIrp(v13);
  ExFreePoolWithTag(v11, 0);
  Log((__int64)a1, 8, 1197634409, 0LL, Status);
  return (unsigned int)Status;
}
