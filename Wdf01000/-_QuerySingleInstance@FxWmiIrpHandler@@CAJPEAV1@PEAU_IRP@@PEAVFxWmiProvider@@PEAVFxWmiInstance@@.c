/*
 * XREFs of ?_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002B140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C002A0A8 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

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
