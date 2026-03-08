/*
 * XREFs of VfUtilCrashEvent @ 0x1405CBE14
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D2190 (CarReportUnusualShutdown.c)
 * Callees:
 *     <none>
 */

char __fastcall VfUtilCrashEvent(__int64 a1)
{
  __int64 v1; // r8
  char v3; // r9
  __int64 v4; // r10

  v1 = 0LL;
  if ( !a1 )
    return 0;
  if ( !(_DWORD)VfRuleClassesRecord )
    return 0;
  v3 = 1;
  *(_DWORD *)a1 = VfBugcheckTmpData;
  *(_QWORD *)(a1 + 8) = BugCheckParameter1;
  v4 = 2LL;
  *(_QWORD *)(a1 + 16) = qword_140D70500;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&xmmword_140D70508;
  do
  {
    *(_DWORD *)(v1 + *(_QWORD *)(a1 + 40)) = *(_DWORD *)((char *)&VfRuleClassesRecord + v1);
    v1 += 4LL;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 48) = VfOptionFlags;
  *(_DWORD *)(a1 + 52) = VfFlightOptions;
  *(_DWORD *)(a1 + 56) = VfTriageContext;
  return v3;
}
