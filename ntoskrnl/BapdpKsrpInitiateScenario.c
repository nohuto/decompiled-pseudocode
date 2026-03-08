/*
 * XREFs of BapdpKsrpInitiateScenario @ 0x140603380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BapdpKsrpInitiateScenario(int a1, int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // eax

  v3 = 50331648LL;
  v4 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) != 0 || !v4 )
    return 3221225485LL;
  if ( !(_QWORD)ExKsrInterface )
    return 3221225659LL;
  LOBYTE(v3) = 1;
  return ((__int64 (__fastcall *)(_QWORD, __int64))ExKsrInterface)(v4, v3);
}
