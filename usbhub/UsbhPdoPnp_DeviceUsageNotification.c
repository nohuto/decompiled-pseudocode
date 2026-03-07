__int64 __fastcall UsbhPdoPnp_DeviceUsageNotification(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _DWORD *v6; // rbx
  unsigned int Options; // ebp
  unsigned __int8 Lock; // r13
  NTSTATUS Status; // esi
  struct _DEVICE_OBJECT *v10; // rcx
  PIRP v11; // rax
  IRP *v12; // r15
  _IO_STACK_LOCATION *v13; // rax
  _IO_STACK_LOCATION *v14; // rcx
  unsigned int Flags; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  char IsDeviceExternal; // [rsp+98h] [rbp+10h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+18h]

  v4 = PdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  IsDeviceExternal = UsbhPdo_IsDeviceExternal(DeviceObject);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 || !IsDeviceExternal || Options != 1 )
  {
    if ( Options - 1 > 3 )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(*((PDEVICE_OBJECT *)v6 + 148), Irp);
      goto LABEL_34;
    }
LABEL_7:
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 148);
    memset(&Event, 0, sizeof(Event));
    DeviceObjecta = IoGetAttachedDevice(v10);
    v11 = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v12 = v11;
    if ( v11 )
    {
      v11->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v13 = v12->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      v13[-1].Context = &Event;
      v13[-1].Control = -32;
      v14 = v12->Tail.Overlay.CurrentStackLocation;
      v14[-1].MajorFunction = CurrentStackLocation->MajorFunction;
      v14[-1].MinorFunction = CurrentStackLocation->MinorFunction;
      v14[-1].FileObject = CurrentStackLocation->FileObject;
      v14[-1].Parameters.SetLock.Lock = Lock;
      v14[-1].Parameters.Create.Options = Options;
      if ( IofCallDriver(DeviceObjecta, v12) == 259 )
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v12->IoStatus.Status;
      IoFreeIrp(v12);
      if ( Status >= 0 )
      {
        if ( Options - 1 <= 2 )
        {
          if ( Lock )
            _InterlockedIncrement(v6 + 684);
          else
            _InterlockedDecrement(v6 + 684);
          if ( Options == 2 )
          {
            if ( Lock )
              _InterlockedIncrement(v6 + 700);
            else
              _InterlockedDecrement(v6 + 700);
          }
          Flags = DeviceObject->Flags;
          if ( v6[684] )
            v16 = Flags & 0xFFFFDFFF;
          else
            v16 = Flags | 0x2000;
          DeviceObject->Flags = v16;
        }
        if ( Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock )
          goto LABEL_27;
      }
    }
    else
    {
      Status = -1073741670;
    }
    if ( Options != 4 )
      goto LABEL_32;
LABEL_27:
    if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0 && !*((_BYTE *)v6 + 2740) )
    {
      if ( IsDeviceExternal == 1 )
      {
        v18 = UsbhRegisterBootDeviceNotification(DeviceObject, v17, v6 + 688);
        Log(*((_QWORD *)v6 + 148), 256, 1431454276, v18, (__int64)DeviceObject);
      }
      *((_BYTE *)v6 + 2740) = 1;
    }
    goto LABEL_32;
  }
  if ( *((_BYTE *)v6 + 2740) )
    goto LABEL_7;
  Status = -1073741637;
LABEL_32:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
LABEL_34:
  if ( v6[684] )
  {
    v19 = v6[701];
    if ( (v19 & 0x10) == 0 )
    {
      v6[701] = v19 | 0x10;
      UsbhUpdateSqmFlags(DeviceObject);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      Status);
  return (unsigned int)Status;
}
