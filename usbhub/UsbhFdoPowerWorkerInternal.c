NTSTATUS __fastcall UsbhFdoPowerWorkerInternal(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  char QuadPart; // r9
  int MinorFunction; // ebp
  __int64 v8; // rcx
  __int64 v9; // r10
  PDEVICE_OBJECT *v11; // rax

  v4 = FdoExt((__int64)a1);
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
  v8 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 321, 1u) + 1) & 0xF;
  *((_BYTE *)v4 + v8 + 1304) = QuadPart;
  *((_BYTE *)v4 + v8 + 1288) = MinorFunction;
  v4[4] = MinorFunction;
  Log((__int64)a1, 16, 1717858128, 0LL, (__int64)a2);
  if ( *(_BYTE *)(v9 + 1) < 4u )
    return off_1C005EF98[2 * *(unsigned __int8 *)(v9 + 1)](a1, a2);
  v11 = (PDEVICE_OBJECT *)FdoExt((__int64)a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v11[151], a2);
}
