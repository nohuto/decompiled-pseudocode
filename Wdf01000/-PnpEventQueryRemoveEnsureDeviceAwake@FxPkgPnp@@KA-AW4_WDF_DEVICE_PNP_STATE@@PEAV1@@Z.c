__int64 __fastcall FxPkgPnp::PnpEventQueryRemoveEnsureDeviceAwake(FxPkgPnp *This)
{
  int _a2; // ebx
  const void *_a1; // rax

  _a2 = FxPkgPnp::PnpPowerReferenceDuringQueryPnp(This);
  if ( _a2 == 259 )
    return 314LL;
  if ( _a2 >= 0 )
    return 268LL;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x12u, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2);
  This->m_PendingPnPIrp->IoStatus.Status = _a2;
  return 281LL;
}
