__int64 __fastcall FxPkgPdo::_PnpCompleteIrp(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePnpRequest(This, Irp, Irp->m_Irp->IoStatus.Status);
}
