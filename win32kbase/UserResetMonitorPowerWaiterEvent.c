/*
 * XREFs of UserResetMonitorPowerWaiterEvent @ 0x1C017CD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall UserResetMonitorPowerWaiterEvent(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserGdiSessionState(a1);
  return KeResetEvent(*(PRKEVENT *)(v1 + 8));
}
