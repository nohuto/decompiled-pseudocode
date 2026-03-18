/*
 * XREFs of PopDiagGetDriverName @ 0x140591954
 * Callers:
 *     PopDiagTraceDeviceAcquireIrp @ 0x14028D8D4 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpFinish @ 0x14028E3F4 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E474 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140592588 (PopDiagTraceDIrpAfterSx.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405A25C4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x140AA7B00 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403951E0 (RtlStringCbCopyNW.c)
 */

NTSTATUS __fastcall PopDiagGetDriverName(__int64 a1, wchar_t *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8

  if ( a1 && (v2 = *(_QWORD *)(a1 + 8), (v3 = *(const wchar_t **)(v2 + 64)) != 0LL) && *(_WORD *)(v2 + 56) )
    return RtlStringCbCopyNW(a2, 0x80uLL, v3, *(unsigned __int16 *)(v2 + 56));
  else
    return -1073741823;
}
