__int64 __fastcall FxPkgPnp::PowerD0BusWakeOwner(FxPkgPnp *This)
{
  if ( (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
    return This->m_SharedPower.m_WaitWakeIrp != 0LL ? 773 : 873;
  else
    return 787LL;
}
