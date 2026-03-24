/*
 * XREFs of PoIsRunningStopWatch @ 0x14034CE8C
 * Callers:
 *     PopPausePowerRequestStats @ 0x1406F6108 (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
