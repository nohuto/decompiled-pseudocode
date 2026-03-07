__int64 __fastcall FxPkgPnp::_S0IdleSetInstance(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int a3,
        unsigned __int8 *InBuffer)
{
  FxPkgPnp::PowerPolicySetS0IdleState(Device->m_PkgPnp, *InBuffer);
  return 0LL;
}
