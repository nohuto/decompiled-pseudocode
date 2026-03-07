__int64 __fastcall FxPkgPnp::_SxWakeSetInstance(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int a3,
        unsigned __int8 *InBuffer)
{
  FxPkgPnp::PowerPolicySetSxWakeState(Device->m_PkgPnp, *InBuffer);
  return 0LL;
}
