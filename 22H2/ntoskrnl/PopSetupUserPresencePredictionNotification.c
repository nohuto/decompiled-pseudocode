/*
 * XREFs of PopSetupUserPresencePredictionNotification @ 0x140865D88
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
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
