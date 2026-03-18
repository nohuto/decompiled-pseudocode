/*
 * XREFs of UsbhPdoPower @ 0x1C001B290
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C003D238 (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhPdoPower(ULONG_PTR a1, IRP *a2)
{
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char Lock; // r8
  int MinorFunction; // r9d
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int Status; // ebx
  _DWORD *v12; // rax
  int v13; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v12 = PdoExt(a1);
    v13 = Usbh_HubDeferIrpProcessing(*((_QWORD *)v12 + 148), a1, UsbhPdoPowerWorker, a2);
    Status = v13;
    if ( v13 >= 0 )
      return 259;
    a2->IoStatus.Status = v13;
    goto LABEL_23;
  }
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
    goto LABEL_23;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Lock = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  switch ( (_BYTE)MinorFunction )
  {
    case 2:
      goto LABEL_7;
    case 0:
      Lock = CurrentStackLocation->Parameters.SetLock.Lock;
      break;
    case 3:
LABEL_7:
      Lock = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
      if ( CurrentStackLocation->Parameters.Create.Options == 1 )
        Lock |= 0x80u;
      break;
  }
  v8 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 908), 1u) + 1) & 0xF;
  *(_BYTE *)(v8 + v4 + 912) = MinorFunction;
  *(_BYTE *)(v8 + v4 + 928) = Lock;
  *(_DWORD *)(v4 + 1176) = MinorFunction;
  v9 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v9 >= 4u )
  {
    Status = a2->IoStatus.Status;
LABEL_23:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)off_1C005F168[2 * v9](a1, (ULONG_PTR)a2);
}
