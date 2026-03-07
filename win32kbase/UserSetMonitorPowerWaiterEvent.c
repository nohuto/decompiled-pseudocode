LONG __fastcall UserSetMonitorPowerWaiterEvent(__int64 Increment, BOOLEAN a2)
{
  KPRIORITY v3; // edi
  __int64 v4; // rax

  v3 = Increment;
  v4 = SGDGetUserGdiSessionState(Increment);
  return KeSetEvent(*(PRKEVENT *)(v4 + 8), v3, a2);
}
