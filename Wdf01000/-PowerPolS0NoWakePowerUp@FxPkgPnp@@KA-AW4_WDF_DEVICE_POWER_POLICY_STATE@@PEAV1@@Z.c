__int64 __fastcall FxPkgPnp::PowerPolS0NoWakePowerUp(FxPkgPnp *This)
{
  int v2; // eax
  unsigned int v3; // ecx

  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  v2 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, Retry, RequestD0ForOther);
  v3 = 1472;
  if ( v2 < 0 )
    return 1389;
  return v3;
}
