/*
 * XREFs of ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0069770
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C0075B5C (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpEject(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned __int8 v4; // r8
  unsigned int Status; // ebx
  MxEvent event; // [rsp+30h] [rbp-28h] BYREF

  event.m_DbgFlagIsInitialized = 0;
  FxPkgPnp::SetPendingPnpIrp(This, Irp, 0);
  KeInitializeEvent(&event.m_Event, SynchronizationEvent, 0);
  event.m_DbgFlagIsInitialized = 1;
  *(_QWORD *)&This[1].m_PowerCaps.D3Latency = &event;
  FxPkgPnp::PnpProcessEvent(This, PnpEventEject, v4);
  KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
  *(_QWORD *)&This[1].m_PowerCaps.D3Latency = 0LL;
  Status = Irp->m_Irp->IoStatus.Status;
  This->m_PendingPnPIrp = 0LL;
  FxPkgPnp::CompletePnpRequest(This, Irp, Status);
  return Status;
}
