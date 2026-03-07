__int64 __fastcall IopPowerDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int Status; // ebx
  ULONG Options; // ecx
  _DWORD *SecurityContext; // rcx
  int v9; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = 0;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      break;
    case 1u:
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      v9 = PoPowerSequence;
      *SecurityContext = PoPowerSequence;
      SecurityContext[1] = v9;
      SecurityContext[2] = v9;
      goto LABEL_14;
    case 2u:
      Options = CurrentStackLocation->Parameters.Create.Options;
      if ( Options )
      {
        if ( Options == 1 )
          PoSetPowerState(DeviceObject, DevicePowerState, CurrentStackLocation->Parameters.Power.State);
        else
          Status = -1073741637;
      }
      if ( Status == -1073741637 )
        break;
LABEL_14:
      Irp->IoStatus.Status = Status;
      goto LABEL_6;
    case 3u:
      goto LABEL_14;
  }
  Status = Irp->IoStatus.Status;
LABEL_6:
  IofCompleteRequest(Irp, 0);
  return Status;
}
