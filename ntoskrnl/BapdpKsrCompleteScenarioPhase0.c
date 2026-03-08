/*
 * XREFs of BapdpKsrCompleteScenarioPhase0 @ 0x1406032F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BapdpKsrCompleteScenarioPhase0(int a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) == v2 && *((_QWORD *)&ExKsrInterface + 1) )
    return (*((__int64 (__fastcall **)(_QWORD))&ExKsrInterface + 1))(v2);
  else
    return 3221225659LL;
}
