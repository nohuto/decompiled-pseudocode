__int64 __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int BusInformation; // eax

  BusInformation = FxPkgPnp::HandleQueryBusInformation(
                     *(FxPkgPnp **)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL),
                     Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, BusInformation);
}
