NTSTATUS __fastcall UsbhFdoPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  volatile signed __int32 *DeviceExtension; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  char QuadPart; // r10
  int MinorFunction; // esi
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  PDEVICE_OBJECT *v13; // rax
  int v14; // eax
  int v15; // ebx

  if ( KeGetCurrentIrql() >= 2u )
  {
    v14 = Usbh_HubDeferIrpProcessing(a1, a1, UsbhFdoPowerWorker, a2);
    v15 = v14;
    if ( v14 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v14;
      IofCompleteRequest(a2, 0);
      return v15;
    }
  }
  else
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    QuadPart = -1;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( (_BYTE)MinorFunction )
    {
      if ( (unsigned int)CurrentStackLocation->MinorFunction - 2 <= 1 )
      {
        QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
        if ( CurrentStackLocation->Parameters.Create.Options != 1 )
          QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
      }
    }
    else
    {
      QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
    }
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(DeviceExtension + 321, 1u) + 1) & 0xF;
    *((_BYTE *)DeviceExtension + v8 + 1288) = MinorFunction;
    *((_BYTE *)DeviceExtension + v8 + 1304) = QuadPart;
    *((_DWORD *)DeviceExtension + 4) = MinorFunction;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v9 = a1->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1349477478;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
    v11 = CurrentStackLocation->MinorFunction;
    if ( (unsigned __int8)v11 >= 4u )
    {
      v13 = (PDEVICE_OBJECT *)FdoExt((__int64)a1);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return PoCallDriver(v13[151], a2);
    }
    else
    {
      return off_1C005EF98[2 * v11](a1, a2);
    }
  }
}
