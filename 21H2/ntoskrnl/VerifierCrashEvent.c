/*
 * XREFs of VerifierCrashEvent @ 0x1405A0D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierCrashEvent(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // r9d
  __int64 v4; // r10

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( VfClearanceFlag && (VfRuleClassesRecord & 0x400000) != 0 )
  {
    v3 = 1;
    *(_DWORD *)a1 = VfBugcheckTmpData;
    *(_QWORD *)(a1 + 8) = BugCheckParameter1;
    v4 = 2LL;
    *(_QWORD *)(a1 + 16) = qword_140D4A038;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&xmmword_140D4A040;
    do
    {
      *(_DWORD *)(v1 + *(_QWORD *)(a1 + 40)) = *(_DWORD *)((char *)&VfRuleClassesRecord + v1);
      v1 += 4LL;
      --v4;
    }
    while ( v4 );
    *(_DWORD *)(a1 + 48) = VfOptionFlags;
    *(_DWORD *)(a1 + 52) = VfFlightOptions;
  }
  else
  {
    return 0;
  }
  return v3;
}
