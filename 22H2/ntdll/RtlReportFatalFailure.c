/*
 * XREFs of RtlReportFatalFailure @ 0x1800FF3C0
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800FF2FC (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18010862C (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
