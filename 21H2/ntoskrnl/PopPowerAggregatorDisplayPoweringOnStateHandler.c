/*
 * XREFs of PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140808910
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorStartNextSession @ 0x1408095C4 (PopPowerAggregatorStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorDisplayPoweringOnStateHandler(__int64 a1)
{
  __int64 v2; // rdx
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    memset(v4, 0, sizeof(v4));
    PopPowerAggregatorSetCurrentState(a1, v4);
    v2 = *(unsigned int *)(a1 + 24);
    PoModernStandbyActionInProgress = 0;
    PopPowerAggregatorStartNextSession(0LL, v2);
  }
  return 0LL;
}
