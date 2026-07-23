/*
 * XREFs of TppReportExceptionFilter @ 0x1801123DC
 * Callers:
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
