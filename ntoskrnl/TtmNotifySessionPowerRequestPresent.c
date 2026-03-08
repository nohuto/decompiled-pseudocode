/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x1409A16F0
 * Callers:
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x14097E750 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x14097E814 (PopPowerRequestNotifyUserSessionAttributed.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x1409A2488 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A2E3C (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x1409A6934 (TtmiLogSessionPowerRequestAcknowledged.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestPresent(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, char a7)
{
  if ( a7 )
    TtmpUpdatePowerRequestAttribute(a1, a2, a3, a4, a5);
  else
    TtmpInsertPowerRequestToSession(a1, a2, a3, a4, a5);
  return TtmiLogSessionPowerRequestAcknowledged(a1, a2, a3, a4, a5);
}
