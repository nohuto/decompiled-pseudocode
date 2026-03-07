__int64 __fastcall HalpDispatchPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Status; // ebx
  int MinorFunction; // edx
  int v7; // eax
  unsigned int v8; // esi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( **(_DWORD **)(a1 + 64) == 193 )
  {
    if ( (unsigned int)(MinorFunction - 2) <= 1 )
    {
      if ( !CurrentStackLocation->Parameters.Create.Options )
      {
        v7 = HalpDispatchSystemStateTransition((__int64)a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          a2->IoStatus.Status = v7;
          IofCompleteRequest(a2, 0);
          return v8;
        }
      }
      a2->IoStatus.Status = 0;
    }
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  }
  else
  {
    if ( MinorFunction == 2 || MinorFunction == 3 )
    {
      Status = 0;
      a2->IoStatus.Status = 0;
    }
    IofCompleteRequest(a2, 0);
  }
  return Status;
}
