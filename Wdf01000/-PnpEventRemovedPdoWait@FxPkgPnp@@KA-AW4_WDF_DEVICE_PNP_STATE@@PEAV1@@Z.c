__int64 __fastcall FxPkgPnp::PnpEventRemovedPdoWait(FxPkgPnp *This)
{
  if ( This->m_DeviceRemoveProcessed )
    This->m_SetDeviceRemoveProcessed = 1;
  return 314LL;
}
