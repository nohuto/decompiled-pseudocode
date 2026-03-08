/*
 * XREFs of ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0069830
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x1C007265C (-HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int BusInformation; // eax

  BusInformation = FxPkgPnp::HandleQueryBusInformation(
                     *(FxPkgPnp **)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL),
                     Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, BusInformation);
}
