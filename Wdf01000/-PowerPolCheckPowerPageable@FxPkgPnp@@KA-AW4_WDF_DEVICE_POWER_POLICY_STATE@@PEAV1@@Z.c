__int64 __fastcall FxPkgPnp::PowerPolCheckPowerPageable(FxPkgPnp *This)
{
  return (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 ? 1297 : 34074;
}
