/*
 * XREFs of AcquireGL @ 0x1C004ACB0
 * Callers:
 *     AccFieldUnit @ 0x1C0051630 (AccFieldUnit.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(), __int64))ghGlobalLock)(
           5LL,
           0LL,
           qword_1C0070280,
           RestartCtxtCallback,
           a1 + 328);
    v1 = v3;
    if ( v3 == 259 )
    {
      return 32772;
    }
    else if ( v3 )
    {
      v1 = -1072431086;
      LogError(3222536210LL);
      AcpiDiagTraceAmlError(a1, -1072431086);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  return v1;
}
