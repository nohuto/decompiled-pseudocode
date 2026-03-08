/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x1C0022960
 * Callers:
 *     UsbhPdoPowerWorker @ 0x1C003CAA0 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR a1, IRP *a2)
{
  unsigned int Status; // edi
  _DWORD *v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  char QuadPart; // r9
  int MinorFunction; // esi
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( PdoExt(a1)[281] == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
LABEL_12:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  v5 = PdoExt(a1);
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
  v9 = ((unsigned __int8)_InterlockedExchangeAdd(v5 + 227, 1u) + 1) & 0xF;
  *((_BYTE *)v5 + v9 + 912) = MinorFunction;
  *((_BYTE *)v5 + v9 + 928) = QuadPart;
  v5[294] = MinorFunction;
  v10 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v10 >= 4u )
  {
    Status = a2->IoStatus.Status;
    goto LABEL_12;
  }
  return (unsigned int)off_1C005EFD8[2 * v10](a1, (ULONG_PTR)a2);
}
