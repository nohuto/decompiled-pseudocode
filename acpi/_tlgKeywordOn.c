/*
 * XREFs of _tlgKeywordOn @ 0x1C0009240
 * Callers:
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C00079E8 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0008798 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C00089D4 (AcpiDiagTraceTemperatureTelemetry.c)
 *     IrqTraceAffinityPolicy @ 0x1C009FFC0 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1)
{
  return (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(a1 + 24) & 0x400000000000LL) == *(_QWORD *)(a1 + 24);
}
