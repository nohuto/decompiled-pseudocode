__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  int Common; // ebx
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING v4[3]; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140C3A6D8 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset(&PopPowerAggregatorContext, 0, 0x1158uLL);
    DWORD2(xmmword_140C3A710) = 1;
    qword_140C3B840 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C3A738) = 0;
    stru_140C3A760.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C3B848 = 0LL;
    qword_140C3B830 = 0LL;
    stru_140C3A760.Parameter = 0LL;
    stru_140C3A760.List.Flink = 0LL;
    word_140C3A782 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140C3A780, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140C3A808 = 0;
    qword_140C3A818 = (__int64)&qword_140C3A810;
    qword_140C3A810 = (__int64)&qword_140C3A810;
    byte_140C3A80A = 6;
    dword_140C3A80C = 0;
    return 0;
  }
  if ( a1 != 1 )
    return 0;
  v3[1] = 1;
  v3[0] = 0;
  memset(v4, 0, 32);
  RtlInitUnicodeString(v4, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext((unsigned __int64)v3, 0LL, 0LL, 1, 0LL, &P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 1, &PopPowerAggregatorIdleDisabledPowerRequest);
    if ( Common < 0 )
    {
      PoDestroyReasonContext(P);
      return (unsigned int)Common;
    }
    return 0;
  }
  return (unsigned int)Common;
}
