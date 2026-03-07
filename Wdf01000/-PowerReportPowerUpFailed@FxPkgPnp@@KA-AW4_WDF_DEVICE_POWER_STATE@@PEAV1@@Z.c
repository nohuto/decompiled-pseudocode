__int64 __fastcall FxPkgPnp::PowerReportPowerUpFailed(FxPkgPnp *This, __int64 a2)
{
  FxPkgPnp_vtbl *v2; // rax

  v2 = This->__vftable;
  LOBYTE(a2) = 1;
  This->m_SystemPowerAction = 0;
  v2->PowerReleasePendingDeviceIrp(This, a2);
  FxPkgPnp::PowerSendPowerUpFailureEvent(This);
  return 873LL;
}
