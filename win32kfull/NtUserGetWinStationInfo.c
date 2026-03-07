__int64 __fastcall NtUserGetWinStationInfo(__int64 a1)
{
  __int64 WinStationInfo; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  WinStationInfo = (int)GetWinStationInfo(a1);
  UserSessionSwitchLeaveCrit(v3);
  return WinStationInfo;
}
