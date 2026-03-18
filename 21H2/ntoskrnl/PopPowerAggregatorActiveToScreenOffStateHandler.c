/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14080C690
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorStartNextSession @ 0x1408095C4 (PopPowerAggregatorStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 3;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v3);
  PopPowerAggregatorStartNextSession(1u, *(_DWORD *)(a1 + 24));
  return 0LL;
}
