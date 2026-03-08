/*
 * XREFs of ACPILateRestore @ 0x1C0036AB0
 * Callers:
 *     <none>
 * Callees:
 *     READ_PM1_CONTROL @ 0x1C0038D00 (READ_PM1_CONTROL.c)
 */

LARGE_INTEGER ACPILateRestore()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v1; // rax
  LARGE_INTEGER v2; // rcx
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rbx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( AcpiKsrInProgress && AcpiKsrUseFallback && !*((_BYTE *)AcpiInformation + 84) )
  {
    __outbyte(*((_QWORD *)AcpiInformation + 13), *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 53LL));
    v1 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v3 = PerformanceFrequency.QuadPart / 5uLL;
    v4 = PerformanceFrequency.QuadPart / 5uLL + v1.QuadPart;
    do
    {
      result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD))READ_PM1_CONTROL)((LARGE_INTEGER)v2.QuadPart, v3);
      if ( (result.LowPart & 1) == 0 )
        break;
      result = KeQueryPerformanceCounter(0LL);
    }
    while ( result.QuadPart < v4 );
  }
  return result;
}
