void __fastcall FxWmiIrpHandler::CompleteWmiQueryAllDataRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r11
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r10
  unsigned int v6; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v6 = BufferUsed + Parameters[1].CompletionMode;
  if ( Status < 0 )
  {
    if ( Status != -1073741789 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  if ( v6 > CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
LABEL_5:
    Parameters[1].CompletionMode = v6;
    Parameters->NamedPipeType = 56;
    v6 = 56;
    Parameters[1].ReadMode = 32;
    Status = 0;
    goto LABEL_7;
  }
  *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  Parameters->NamedPipeType = v6;
LABEL_7:
  Irp->IoStatus.Information = v6;
  Irp->IoStatus.Status = Status;
}
