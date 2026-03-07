void __fastcall RIMFreeHidTLCInfo(void ***a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  void **v6; // rcx
  void **v7; // rax
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, (struct _KTHREAD **)(v5 + 288));
  if ( *((_DWORD *)a1 + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
  if ( *((_DWORD *)a1 + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  if ( *((_DWORD *)a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 213);
  if ( *((_DWORD *)a1 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 214);
  if ( *((_DWORD *)a1 + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 215);
  v6 = *a1;
  if ( (*a1)[1] != a1 || (v7 = a1[1], *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  if ( !*((_DWORD *)a1 + 11) )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
}
