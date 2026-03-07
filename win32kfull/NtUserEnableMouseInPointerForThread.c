__int64 NtUserEnableMouseInPointerForThread()
{
  EnterCrit(0LL, 0LL);
  *(_DWORD *)(gptiCurrent + 1272LL) |= 0x2000000u;
  UserSessionSwitchLeaveCrit(gptiCurrent);
  return 1LL;
}
