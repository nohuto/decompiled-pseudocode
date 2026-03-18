/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140B51BB0
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KiInitializeTimer2 @ 0x14031E33C (KiInitializeTimer2.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  int Common; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING v7[3]; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140C3BC08 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset(&PopPowerAggregatorContext, 0, 0x1158uLL);
    DWORD2(xmmword_140C3AAB0) = 1;
    qword_140C3BBE0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C3AAD8) = 0;
    stru_140C3AB00.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C3BBE8 = 0LL;
    qword_140C3BBD0 = 0LL;
    stru_140C3AB00.Parameter = 0LL;
    stru_140C3AB00.List.Flink = 0LL;
    word_140C3AB22 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140C3AB20, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140C3ABA8 = 0;
    qword_140C3ABB8 = (__int64)&qword_140C3ABB0;
    qword_140C3ABB0 = (__int64)&qword_140C3ABB0;
    byte_140C3ABAA = 6;
    dword_140C3ABAC = 0;
    return 0;
  }
  if ( a1 != 1 )
    return 0;
  v6[1] = 1;
  v6[0] = 0;
  memset(v7, 0, 32);
  RtlInitUnicodeString(v7, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext((unsigned __int64)v6, 0, 0LL, 1, 0LL, (__int64 *)&P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 1, &PopPowerAggregatorIdleDisabledPowerRequest);
    if ( Common < 0 )
    {
      PoDestroyReasonContext(P, v2, v3, v4);
      return (unsigned int)Common;
    }
    return 0;
  }
  return (unsigned int)Common;
}
