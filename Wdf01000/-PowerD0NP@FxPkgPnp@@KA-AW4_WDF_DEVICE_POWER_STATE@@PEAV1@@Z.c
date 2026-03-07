__int64 __fastcall FxPkgPnp::PowerD0NP(FxPkgPnp *This)
{
  return (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 ? 787 : 873;
}
