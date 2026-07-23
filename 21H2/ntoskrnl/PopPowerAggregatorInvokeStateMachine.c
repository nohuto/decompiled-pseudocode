/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140776368
 * Callers:
 *     PopPowerAggregatorWorker @ 0x1407762E0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     xHalGetInterruptTranslator @ 0x14061BE40 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x140726650 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140774CE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140774DA0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140776468 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407764F4 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EE060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EE280 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408EE690 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE6E0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408EE900 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EEB00 (PopPowerAggregatorScreenOffExitStateHandler.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  LogEntry = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 3LL);
  UserData.Reserved = 0;
  v6 = 0;
  *(_OWORD *)(LogEntry + 24) = xmmword_140C217F8;
  UserData.Size = 4;
  v5 = 4;
  *(__m256 *)(LogEntry + 40) = ymmword_140C21808;
  *(_OWORD *)(LogEntry + 72) = xmmword_140C21828;
  *(_OWORD *)(LogEntry + 88) = xmmword_140C21838;
  UserData.Ptr = (ULONGLONG)&xmmword_140C217F8;
  v4 = &xmmword_140C21828;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorInternalStateContexts[4 * (int)xmmword_140C21828]
                                           + (int)xmmword_140C217F8))(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 4LL) + 24) = v1;
  return v1;
}
