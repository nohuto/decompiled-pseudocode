/*
 * XREFs of PopDiagGetDriverName @ 0x14058F424
 * Callers:
 *     PopDiagTraceDeviceAcquireIrp @ 0x1402B9AE4 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpFinish @ 0x1402BB864 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402BB8E4 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140590058 (PopDiagTraceDIrpAfterSx.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405A00D4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x140AA48D0 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14039301C (RtlStringCbCopyNW.c)
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
