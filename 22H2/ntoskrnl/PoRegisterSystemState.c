/*
 * XREFs of PoRegisterSystemState @ 0x14058DD30
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14032EC58 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032ECAC (PopApplyLegacyPowerRequestFlags.c)
 *     PoSetSystemState @ 0x14058DE00 (PoSetSystemState.c)
 *     PopDiagTraceRegisterSystemState @ 0x140594584 (PopDiagTraceRegisterSystemState.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  _DWORD *v2; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  int v10; // eax
  char LegacyPowerRequestFlags; // al
  char v12; // dl
  _DWORD *v14; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags <= 0 )
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v2 = StateHandle;
      v14 = StateHandle;
      if ( StateHandle
        || (v5 = PoCaptureReasonContext(0LL, 0, 0LL, 1, 0LL, (__int64 *)&P), v9 = P, v5 >= 0)
        && (v10 = PopPowerRequestCreateCommon(P, 0, &v14), v2 = v14, v10 >= 0) )
      {
        LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(v2, Flags, 0LL);
        PopApplyLegacyPowerRequestFlags(v2, v12, LegacyPowerRequestFlags);
      }
      else if ( v9 )
      {
        PoDestroyReasonContext(v9, v6, v7, v8);
      }
    }
    else
    {
      PoSetSystemState(Flags);
    }
  }
  return v2;
}
