/*
 * XREFs of PopSetupUserPresencePredictionNotification @ 0x1408615A8
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupUserPresencePredictionNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_PO_USER_AWAY_PREDICTION,
           1,
           0,
           (__int64)PopWnfUserAwayPredictionCallback,
           0LL);
}
