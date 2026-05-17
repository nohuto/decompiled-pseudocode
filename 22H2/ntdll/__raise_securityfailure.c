/*
 * XREFs of __raise_securityfailure @ 0x18008C934
 * Callers:
 *     __report_securityfailure @ 0x18008CACC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009CE10 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
