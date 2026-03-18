/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x1409A4934
 * Callers:
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140989EE0 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140989FA4 (PopPowerRequestNotifyUserSessionAttributed.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x1409A573C (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A6100 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x1409A9BF0 (TtmiLogSessionPowerRequestAcknowledged.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestPresent(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, char a7)
{
  if ( a7 )
    TtmpUpdatePowerRequestAttribute(a1, a2, a3, a4, a5);
  else
    TtmpInsertPowerRequestToSession(a1, a2, a3, a4, a5);
  return TtmiLogSessionPowerRequestAcknowledged(a1, a2, a3, a4, a5);
}
