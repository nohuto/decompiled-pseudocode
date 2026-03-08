/*
 * XREFs of ExpInitializeResource @ 0x1403BF090
 * Callers:
 *     ExInitializeFastResource @ 0x1403BEFD0 (ExInitializeFastResource.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlStdLogStackTrace @ 0x1405A70F4 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1405A7180 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405A7574 (RtlpStdGetRecordedStackTraceIndex.c)
 */

void *__fastcall ExpInitializeResource(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  void *v5; // r14
  __int16 v6; // bp

  result = memset(a1, 0, 0x68uLL);
  a1[1] = a1;
  v3 = 0LL;
  *a1 = a1;
  *((_OWORD *)a1 + 2) = 0LL;
  a1[12] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      result = (void *)RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
      v5 = result;
      if ( result )
      {
        result = (void *)RtlpStdGetRecordedStackTraceIndex(v4, result);
        v6 = (__int16)result;
        if ( !(_DWORD)result )
          result = (void *)RtlStdReleaseStackTrace(v4, v5);
      }
      else
      {
        v6 = 0;
      }
      LOWORD(v3) = v6;
    }
    v3 = (unsigned __int16)v3;
  }
  a1[11] = v3;
  return result;
}
