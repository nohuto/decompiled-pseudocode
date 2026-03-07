__int64 __fastcall UsbhFdoPnp_DeviceUsageNotification(struct _DEVICE_OBJECT *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int Options; // ebx
  _DWORD *v6; // r14
  int Status; // edi
  unsigned int Flags; // edx
  unsigned int v9; // edx
  PIRP v10; // rbx
  signed __int64 v11; // rax
  _IO_STACK_LOCATION *v12; // rax
  _IO_STACK_LOCATION *v13; // rax

  Log((__int64)Context, 2, 1715754318, 0LL, (__int64)Irp);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v6 = FdoExt((__int64)Context);
  if ( IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)v6 + 151), Irp) )
    Status = Irp->IoStatus.Status;
  else
    Status = -1073741823;
  if ( Options - 1 <= 2 && Status >= 0 )
  {
    Flags = Context->Flags;
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 151) + 48LL) & 0x2000) != 0 )
      v9 = Flags | 0x2000;
    else
      v9 = Flags & 0xFFFFDFFF;
    Context->Flags = v9;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0
    && (Status >= 0 && Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock || Options == 4) )
  {
    v10 = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v6 + 151) + 76LL), 0);
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 659, (signed __int64)v10, 0LL);
    if ( v10 )
    {
      if ( v11 )
      {
        IoFreeIrp(v10);
      }
      else
      {
        *((_BYTE *)v6 + 5268) = 1;
        byte_1C006B6C8 = 0;
        v12 = v10->Tail.Overlay.CurrentStackLocation;
        v12[-1].Parameters.Create.Options = 0;
        v12[-1].Parameters.Read.Length = 0;
        v12[-1].MajorFunction = 15;
        v12[-1].Parameters.Read.ByteOffset.LowPart = 2232235;
        if ( IoSetCompletionRoutineEx(Context, v10, UsbhResetNotificationIrpCompletion, Context, 1u, 1u, 1u) < 0 )
        {
          v13 = v10->Tail.Overlay.CurrentStackLocation;
          v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhResetNotificationIrpCompletion;
          v13[-1].Context = Context;
          v13[-1].Control = -32;
        }
        IofCallDriver(*((PDEVICE_OBJECT *)v6 + 151), v10);
      }
    }
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
