__int64 NtUserUpdatePerUserImmEnabling()
{
  EnterCrit(0LL, 0LL);
  if ( (unsigned int)IsIMMEnabledSystem() )
    _InterlockedOr(gpsi, 4u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFFFB);
  UserSessionSwitchLeaveCrit(gpsi);
  return 1LL;
}
