__int64 __fastcall FxPkgPnp::PnpEventPdoInitFailed(FxPkgPnp *This)
{
  FxObject::EarlyDispose(This->m_DeviceBase);
  FxObject::DestroyChildren(This->m_DeviceBase);
  return 309LL;
}
