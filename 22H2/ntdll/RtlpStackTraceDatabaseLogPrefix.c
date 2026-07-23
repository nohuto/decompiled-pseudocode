/*
 * XREFs of RtlpStackTraceDatabaseLogPrefix @ 0x18010AEE0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800F34E4 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800526A0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     RtlpRegisterStackTrace @ 0x18010AC98 (RtlpRegisterStackTrace.c)
 */

__int64 __fastcall RtlpStackTraceDatabaseLogPrefix(__int64 a1, __int64 a2, unsigned int a3, char **a4)
{
  USHORT v5; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a3 == 1 )
  {
    *a4 = (char *)16;
  }
  else if ( a3 > 1 && (a3 <= 3 || a3 - 5 <= 1) )
  {
    if ( a4 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
      *a4 = RtlpRegisterStackTrace(v5, BackTrace, BackTraceHash[0]);
    }
  }
  return 0LL;
}
