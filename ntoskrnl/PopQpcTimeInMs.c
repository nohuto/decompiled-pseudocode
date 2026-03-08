/*
 * XREFs of PopQpcTimeInMs @ 0x140A84A40
 * Callers:
 *     PopWriteBsdPoInfo @ 0x1402B9F3C (PopWriteBsdPoInfo.c)
 *     PopPowerTransitionTimesInMs @ 0x140581020 (PopPowerTransitionTimesInMs.c)
 *     PopDiagTraceHiberStats @ 0x14098C828 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x14098D168 (PopDiagTracePerfTrackData.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 */

__int64 __fastcall PopQpcTimeInMs(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned __int64 v4; // r11
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = 0;
  pullResult = 0LL;
  if ( v2 )
  {
    if ( RtlULongLongMult(v2 - *a1, 0x3E8uLL, &pullResult) < 0 )
      return (unsigned int)(v4 / (PopQpcFrequency / 0x3E8));
    else
      return (unsigned int)(pullResult / PopQpcFrequency);
  }
  return v3;
}
