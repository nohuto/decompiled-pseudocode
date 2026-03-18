/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x140809310
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1407FE640 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140808480 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140808910 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14080C690 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407F274C (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407F27F4 (PopPowerAggregatorAllocateLogEntry.c)
 */

__int64 __fastcall PopPowerAggregatorSetCurrentState(__int64 a1, __int64 a2)
{
  int v2; // eax
  _OWORD *v3; // rbx
  __int64 result; // rax
  __int128 v7; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = (_OWORD *)(a1 + 56);
  v8.Ptr = a1 + 56;
  v8.Reserved = 0;
  *(_DWORD *)(a2 + 4) = v2;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 32);
  v8.Size = 4;
  v9 = a2;
  v11 = 0;
  v10 = 4;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_INTERNAL_STATE_CHANGE, 2u, &v8);
  result = PopPowerAggregatorAllocateLogEntry(a1, 2);
  *(_OWORD *)(result + 24) = *v3;
  *(_OWORD *)(result + 40) = v3[1];
  *(_OWORD *)(result + 56) = *(_OWORD *)a2;
  *(_OWORD *)(result + 72) = *(_OWORD *)(a2 + 16);
  *v3 = *(_OWORD *)a2;
  v7 = *(_OWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 8) |= 2u;
  v3[1] = v7;
  return result;
}
