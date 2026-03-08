/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140872018
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140871F90 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140757580 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407577FC (PopPowerAggregatorDiagTraceEvent.c)
 *     xHalGetInterruptTranslator @ 0x140794500 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x1407F92D0 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140879470 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140879490 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140880F30 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140990660 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140990A90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140990AE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140990E50 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140990EA0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140990FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
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
  *(_OWORD *)(LogEntry + 24) = xmmword_140C3A710;
  UserData.Size = 4;
  v5 = 4;
  *(_OWORD *)(LogEntry + 40) = xmmword_140C3A720;
  *(_QWORD *)(LogEntry + 56) = qword_140C3A730;
  *(_OWORD *)(LogEntry + 64) = xmmword_140C3A738;
  *(_OWORD *)(LogEntry + 80) = xmmword_140C3A748;
  UserData.Ptr = (ULONGLONG)&xmmword_140C3A710;
  v4 = &xmmword_140C3A738;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorTargetStateContexts[6 * (int)xmmword_140C3A710]
                                           + (int)xmmword_140C3A738))(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 4) + 24) = v1;
  return v1;
}
