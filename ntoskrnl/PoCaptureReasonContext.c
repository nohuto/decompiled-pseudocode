/*
 * XREFs of PoCaptureReasonContext @ 0x1402BD2FC
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetTimerEx @ 0x1402CDBB0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x1403AD470 (NtSetTimer.c)
 *     PoCreatePowerRequest @ 0x1403C09C0 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058B800 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14084B9E0 (PoCreateThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B46D2C (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B6EC5C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopCaptureReasonContext @ 0x1402BD4D4 (PopCaptureReasonContext.c)
 *     PoGetRequester @ 0x1402BDACC (PoGetRequester.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  char v7; // di
  __int64 v8; // rcx
  int v9; // ebx
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v7 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = 0x7FFFFFFF0000LL;
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v11 = *(_OWORD *)a1;
      v12 = *(_OWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)&v11;
    }
    LOBYTE(a2) = v7;
    v9 = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    v9 = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( v9 >= 0 )
  {
    LOBYTE(v8) = v7;
    PoGetRequester(v8, a3, *a6);
  }
  return (unsigned int)v9;
}
