/*
 * XREFs of PoCaptureReasonContext @ 0x140209BF8
 * Callers:
 *     NtSetTimerEx @ 0x14032E400 (NtSetTimerEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036D81C (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetTimer @ 0x1403B2290 (NtSetTimer.c)
 *     PoCreatePowerRequest @ 0x1403C6280 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058DD30 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1407A92D0 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14084ED90 (PoCreateThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B51BB0 (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B72EA4 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopCaptureReasonContext @ 0x1402096D8 (PopCaptureReasonContext.c)
 *     PoGetRequester @ 0x140209D54 (PoGetRequester.c)
 *     Feature_2932140347__private_IsEnabledDeviceUsage @ 0x140410994 (Feature_2932140347__private_IsEnabledDeviceUsage.c)
 *     PoGetRequesterOld @ 0x1404109EC (PoGetRequesterOld.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, char a2, __int64 a3, char a4, bool *a5, __int64 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Requester; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int IsEnabledDeviceUsage; // eax
  __int64 v14; // r8
  _BOOL8 v15; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  __int128 v18; // [rsp+28h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-10h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *a6 = 0LL;
  if ( a1 && a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v18 = *(_OWORD *)a1;
      v19 = *(_OWORD *)(a1 + 16);
      v20 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)&v18;
    }
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
    v17 = Requester;
  }
  else
  {
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( Requester >= 0 )
  {
    IsEnabledDeviceUsage = Feature_2932140347__private_IsEnabledDeviceUsage(v9, v8, v11, v12, v17, v18);
    v15 = IsEnabledDeviceUsage != 0;
    v14 = *a6;
    LOBYTE(v15) = a2;
    if ( IsEnabledDeviceUsage )
    {
      Requester = PoGetRequester(v15, a3, v14);
      if ( Requester < 0 && *a6 )
      {
        ExFreePoolWithTag((PVOID)*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    else
    {
      PoGetRequesterOld(v15, a3, v14);
    }
  }
  return (unsigned int)Requester;
}
