/*
 * XREFs of WdiDispatchControl @ 0x1407894A0
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     EtwGetProviderIdFromHandle @ 0x14039F178 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x14078972C (WdipStartEndScenario.c)
 */

__int64 __fastcall WdiDispatchControl(unsigned int *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  result = EtwGetProviderIdFromHandle((PVOID *)*a1, 1, &v3);
  if ( (int)result >= 0 )
    return WdipStartEndScenario(&v3, a1 + 6, a1 + 2, a1[10]);
  return result;
}
