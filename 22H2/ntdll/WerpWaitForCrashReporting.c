/*
 * XREFs of WerpWaitForCrashReporting @ 0x1800DDB80
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 * Callees:
 *     WerpProcessId @ 0x180061E0C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtWaitForMultipleObjects @ 0x18009E030 (NtWaitForMultipleObjects.c)
 */

__int64 __fastcall WerpWaitForCrashReporting(void *a1, void *a2, void *a3, LARGE_INTEGER *a4)
{
  unsigned int v4; // edi
  ULONG v9; // esi
  int UniqueProcess; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  NTSTATUS v13; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v9 = 0;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)WerpProcessId(a1) != UniqueProcess )
    {
      Handles[0] = a1;
      v9 = 1;
    }
  }
  if ( a2 )
  {
    v11 = v9++;
    Handles[v11] = a2;
  }
  if ( a3 )
  {
    v12 = v9++;
    Handles[v12] = a3;
  }
  if ( v9 )
  {
    if ( v9 <= 3 )
    {
      do
      {
        v13 = NtWaitForMultipleObjects(v9, Handles, WaitAny, 1u, a4);
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( v13 < (int)v9 )
          return v4;
      }
      while ( v13 != 258 );
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741684;
    }
  }
  return v4;
}
