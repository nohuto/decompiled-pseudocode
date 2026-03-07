__int64 __fastcall FxWmiIrpHandler::_QuerySingleInstance(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int size; // [rsp+58h] [rbp+10h] BYREF

  size = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - Parameters[1].InboundQuota;
  if ( Instance->IsQueryInstanceSupported(Instance) )
  {
    if ( v10 >= Provider->m_MinInstanceBufferSize )
    {
      v11 = Instance->QueryInstance(Instance, v10, (char *)Parameters + Parameters[1].InboundQuota, &size);
      Parameters[1].OutboundQuota = size;
    }
    else
    {
      size = Provider->m_MinInstanceBufferSize;
      v11 = -1073741789;
    }
  }
  else
  {
    v11 = -1073741808;
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v11, size);
}
