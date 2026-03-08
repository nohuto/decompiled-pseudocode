/*
 * XREFs of PoRegisterSystemState @ 0x14058B800
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLegacyPowerRequestFlags @ 0x1402B8BEC (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1402B8C40 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     PoCaptureReasonContext @ 0x1402BD2FC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1402BDBE4 (PoDestroyReasonContext.c)
 *     PoSetSystemState @ 0x14058B8D0 (PoSetSystemState.c)
 *     PopDiagTraceRegisterSystemState @ 0x140592068 (PopDiagTraceRegisterSystemState.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  _DWORD *v2; // rbx
  int v5; // eax
  _QWORD *v6; // rsi
  int v7; // eax
  char LegacyPowerRequestFlags; // al
  char v9; // dl
  _DWORD *v11; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags <= 0 )
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v2 = StateHandle;
      v11 = StateHandle;
      if ( StateHandle
        || (v5 = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, &P), v6 = P, v5 >= 0)
        && (v7 = PopPowerRequestCreateCommon(P, 0, &v11), v2 = v11, v7 >= 0) )
      {
        LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(v2, Flags, 0LL);
        PopApplyLegacyPowerRequestFlags(v2, v9, LegacyPowerRequestFlags);
      }
      else if ( v6 )
      {
        PoDestroyReasonContext(v6);
      }
    }
    else
    {
      PoSetSystemState(Flags);
    }
  }
  return v2;
}
