__int64 __fastcall FxPkgPnp::PnpEventFailedStarted(FxPkgPnp *This, unsigned __int8 a2)
{
  This->m_PendingPnPIrp->IoStatus.Status = -1073741436;
  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  return 302LL;
}
