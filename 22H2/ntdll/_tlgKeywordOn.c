/*
 * XREFs of _tlgKeywordOn @ 0x1800854C4
 * Callers:
 *     RtlpLogCapabilityCheckLatency @ 0x180042364 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x180085378 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CF554 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF660 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CF964 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFBF4 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFD40 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800CFE44 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800CFF24 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D0004 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
