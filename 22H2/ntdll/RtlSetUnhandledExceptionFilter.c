/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x1800802D0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  __int64 v1; // rdx
  int v3; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v3 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v3 < 0 )
      RtlRaiseStatus(v3);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  RtlpUnhandledExceptionFilter = __ROR8__((unsigned __int64)UnhandledExceptionFilter ^ v1, v1 & 0x3F);
}
