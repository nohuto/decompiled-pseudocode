__int64 __fastcall UserGetMonitorPowerWaiterEvent(__int64 a1)
{
  return *(_QWORD *)(SGDGetUserGdiSessionState(a1) + 8);
}
