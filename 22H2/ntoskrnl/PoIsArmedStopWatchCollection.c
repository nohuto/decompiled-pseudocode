/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x14034CFC4
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x1406F5FC0 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F66E0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
