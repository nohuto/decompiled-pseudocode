__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  signed int v4; // esi

  FxPkgFdo::HandleQueryCapabilities(This, Irp);
  v4 = This->SendIrpSynchronously(This, Irp);
  if ( v4 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp);
  FxPkgPnp::CompletePnpRequest(This, Irp, v4);
  return (unsigned int)v4;
}
