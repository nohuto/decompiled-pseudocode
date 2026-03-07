__int64 __fastcall FxPkgPnp::PowerDecideD0State(FxPkgPnp *This)
{
  unsigned __int8 m_WaitWakeOwner; // dl

  m_WaitWakeOwner = This->m_SharedPower.m_WaitWakeOwner;
  if ( (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
    return m_WaitWakeOwner != 0 ? 777 : 775;
  else
    return m_WaitWakeOwner != 0 ? 33546 : 33544;
}
