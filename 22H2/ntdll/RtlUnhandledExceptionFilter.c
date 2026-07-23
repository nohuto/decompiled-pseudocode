/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18009CE10
 * Callers:
 *     __raise_securityfailure @ 0x18008C934 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008C960 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
