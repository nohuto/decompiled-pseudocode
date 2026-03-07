__int64 __fastcall FxPkgPdo::_PnpQueryInterface(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int v4; // eax
  unsigned __int8 completeIrp; // [rsp+40h] [rbp+18h] BYREF

  completeIrp = 0;
  v4 = FxPkgPnp::HandleQueryInterface(This, Irp, &completeIrp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, v4);
}
