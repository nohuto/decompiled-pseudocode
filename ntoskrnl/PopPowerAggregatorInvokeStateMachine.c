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
