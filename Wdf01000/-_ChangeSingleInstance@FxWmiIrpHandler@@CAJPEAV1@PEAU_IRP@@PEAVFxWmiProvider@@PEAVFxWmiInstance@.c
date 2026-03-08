/*
 * XREFs of ?_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002A820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C002A0A8 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_ChangeSingleInstance(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  unsigned int m_MinInstanceBufferSize; // ebx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdi
  int v10; // eax
  __int64 OutboundQuota; // rdx
  char *v12; // r8

  m_MinInstanceBufferSize = 0;
  Parameters = Irp->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( Instance->IsSetInstanceSupported(Instance) )
  {
    OutboundQuota = Parameters[1].OutboundQuota;
    m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
    if ( (unsigned int)OutboundQuota >= m_MinInstanceBufferSize )
    {
      m_MinInstanceBufferSize = Parameters[1].OutboundQuota;
      if ( (_DWORD)OutboundQuota )
        v12 = (char *)Parameters + Parameters[1].InboundQuota;
      else
        v12 = 0LL;
      v10 = Instance->SetInstance(Instance, OutboundQuota, v12);
      if ( v10 == 259 )
      {
        v10 = -1073741823;
        m_MinInstanceBufferSize = 0;
      }
    }
    else
    {
      v10 = -1073741789;
    }
  }
  else
  {
    v10 = -1073741114;
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v10, m_MinInstanceBufferSize);
}
