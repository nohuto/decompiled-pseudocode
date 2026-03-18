/*
 * XREFs of TtmNotifySessionPowerRequestPresent @ 0x1409A4780
 * Callers:
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140981800 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x1409818C4 (PopPowerRequestNotifyUserSessionAttributed.c)
 * Callees:
 *     TtmpInsertPowerRequestToSession @ 0x1409A5518 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A5ECC (TtmpUpdatePowerRequestAttribute.c)
 *     TtmiLogSessionPowerRequestAcknowledged @ 0x1409A99BC (TtmiLogSessionPowerRequestAcknowledged.c)
 */

__int64 __fastcall TtmNotifySessionPowerRequestPresent(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, char a7)
{
  if ( a7 )
    TtmpUpdatePowerRequestAttribute(a1, a2, a3, a4, a5);
  else
    TtmpInsertPowerRequestToSession(a1, a2, a3, a4, a5);
  return TtmiLogSessionPowerRequestAcknowledged(a1, a2, a3, a4, a5);
}
