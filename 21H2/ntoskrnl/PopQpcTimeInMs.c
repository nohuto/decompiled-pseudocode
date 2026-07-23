/*
 * XREFs of PopQpcTimeInMs @ 0x140991634
 * Callers:
 *     PopPowerTransitionTimesInMs @ 0x140382B34 (PopPowerTransitionTimesInMs.c)
 *     PopWriteBsdPoInfo @ 0x1403F8074 (PopWriteBsdPoInfo.c)
 *     PopDiagTracePerfTrackData @ 0x1407744D4 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x14077460C (PopDiagTraceHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
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
