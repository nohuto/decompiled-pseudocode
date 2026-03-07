__int64 __fastcall FxWmiIrpHandler::CompleteWmiRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v5; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v8; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = Status;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      FxWmiIrpHandler::CompleteWmiQueryAllDataRequest(this, Irp, Status, BufferUsed);
      goto LABEL_13;
    case 1u:
      FxWmiIrpHandler::CompleteWmiQuerySingleInstanceRequest(this, Irp, Status, BufferUsed);
      goto LABEL_13;
    case 2u:
    case 3u:
      if ( Status == -1073741789 )
      {
        m_Globals = this->m_Globals;
        v5 = -1073741113;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_dd(m_Globals, 5u, 0xCu, 0x18u, WPP_FxWmiIrpHandler_cpp_Traceguids, -1073741789, -1073741113);
      }
      goto LABEL_10;
  }
  if ( CurrentStackLocation->MinorFunction != 9 )
  {
LABEL_10:
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v5;
    goto LABEL_13;
  }
  FxWmiIrpHandler::CompleteWmiExecuteMethodRequest(this, Irp, Status, BufferUsed);
LABEL_13:
  v8 = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return v8;
}
