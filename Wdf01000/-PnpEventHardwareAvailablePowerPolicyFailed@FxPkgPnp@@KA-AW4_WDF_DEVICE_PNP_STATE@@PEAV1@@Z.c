__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailablePowerPolicyFailed(FxPkgPnp *This)
{
  This->m_PendingPnPIrp->IoStatus.Status = -1073741666;
  return 298LL;
}
