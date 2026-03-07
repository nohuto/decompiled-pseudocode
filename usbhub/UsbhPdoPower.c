__int64 __fastcall UsbhPdoPower(ULONG_PTR a1, IRP *a2)
{
  __int64 v4; // r8
  unsigned int Status; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  char QuadPart; // r10
  int MinorFunction; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v12; // rax
  int v13; // eax

  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    if ( *(_DWORD *)(v4 + 1124) == 6 )
    {
      Status = -1073741130;
      a2->IoStatus.Status = -1073741130;
    }
    else
    {
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
      v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 908), 1u) + 1) & 0xF;
      *(_BYTE *)(v9 + v4 + 912) = MinorFunction;
      *(_BYTE *)(v9 + v4 + 928) = QuadPart;
      *(_DWORD *)(v4 + 1176) = MinorFunction;
      v10 = CurrentStackLocation->MinorFunction;
      if ( (unsigned __int8)v10 < 4u )
        return off_1C005EFD8[2 * v10](a1, (ULONG_PTR)a2);
      Status = a2->IoStatus.Status;
    }
    goto LABEL_18;
  }
  v12 = PdoExt(a1);
  v13 = Usbh_HubDeferIrpProcessing(*((_QWORD *)v12 + 148), a1, UsbhPdoPowerWorker, a2);
  Status = v13;
  if ( v13 < 0 )
  {
    a2->IoStatus.Status = v13;
LABEL_18:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return 259LL;
}
