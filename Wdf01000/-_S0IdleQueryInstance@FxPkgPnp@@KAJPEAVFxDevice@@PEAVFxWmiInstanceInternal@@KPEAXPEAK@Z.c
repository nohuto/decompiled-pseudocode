__int64 __fastcall FxPkgPnp::_S0IdleQueryInstance(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int a3,
        unsigned __int8 *OutBuffer,
        unsigned int *BufferUsed)
{
  *OutBuffer = Device->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
  *BufferUsed = 1;
  return 0LL;
}
