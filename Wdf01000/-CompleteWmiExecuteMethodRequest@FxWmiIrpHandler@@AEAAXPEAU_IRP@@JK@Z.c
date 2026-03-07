void __fastcall FxWmiIrpHandler::CompleteWmiExecuteMethodRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx
  unsigned int v5; // r10d

  Parameters = Irp->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v5 = BufferUsed + Parameters[1].OutboundQuota;
  if ( Status < 0 )
  {
    if ( Status == -1073741789 )
    {
      Parameters[1].CompletionMode = v5;
      Parameters->NamedPipeType = 56;
      v5 = 56;
      Parameters[1].ReadMode = 32;
      Status = 0;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    Parameters->NamedPipeType = v5;
    Parameters[1].DefaultTimeout.LowPart = BufferUsed;
    *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  }
  Irp->IoStatus.Information = v5;
  Irp->IoStatus.Status = Status;
}
