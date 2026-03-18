/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140808E28
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140808DA0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     xHalGetInterruptTranslator @ 0x1406DAEB0 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407F274C (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407F27F4 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x1407F5040 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1407FE640 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140808480 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140808910 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408091B0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14080C690 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140995CC0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140995D10 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  LogEntry = PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 3);
  UserData.Reserved = 0;
  v6 = 0;
  *(_OWORD *)(LogEntry + 24) = xmmword_140C20BD0;
  UserData.Size = 4;
  v5 = 4;
  *(_OWORD *)(LogEntry + 40) = xmmword_140C20BE0;
  *(_QWORD *)(LogEntry + 56) = qword_140C20BF0;
  *(_OWORD *)(LogEntry + 64) = xmmword_140C20BF8;
  *(_OWORD *)(LogEntry + 80) = xmmword_140C20C08;
  UserData.Ptr = (ULONGLONG)&xmmword_140C20BD0;
  v4 = &xmmword_140C20BF8;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorTargetStateContexts[6 * (int)xmmword_140C20BD0]
                                           + (int)xmmword_140C20BF8))(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 4) + 24) = v1;
  return v1;
}
