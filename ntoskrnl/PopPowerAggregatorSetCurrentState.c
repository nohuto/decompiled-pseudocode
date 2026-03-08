/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x140879638
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140879490 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140990660 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140990734 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140990E50 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140990EA0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140990FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140757580 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407577FC (PopPowerAggregatorDiagTraceEvent.c)
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
