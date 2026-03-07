void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x10) != 0 )
  {
    v5 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6643LL);
  }
  v4[0] = *(_QWORD *)(a1 + 40) - *((_QWORD *)PtiCurrentShared() + 59);
  v4[1] = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v4, 16LL, &v7, &v6);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
}
