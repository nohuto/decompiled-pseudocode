/*
 * XREFs of TtmNotifySessionPowerRequestCreated @ 0x1409A1540
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x1409A2488 (TtmpInsertPowerRequestToSession.c)
 *     TtmiLogSessionPowerRequestCreated @ 0x1409A6A80 (TtmiLogSessionPowerRequestCreated.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestCreated(unsigned int a1, unsigned int a2, int a3, int a4)
{
  __int64 v6; // r8

  LOBYTE(v6) = TtmpInsertPowerRequestToSession(a1, a2, a3, a4, 0LL);
  return TtmiLogSessionPowerRequestCreated(a1, a2, v6);
}
