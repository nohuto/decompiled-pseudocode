/*
 * XREFs of _tlgKeywordOn @ 0x1C0042420
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C0041664 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     imp_WdfDriverCreate @ 0x1C004BEB0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004C310 (imp_WdfDriverErrorReportApiMissing.c)
 *     LogDriverInfoStream @ 0x1C00600B0 (LogDriverInfoStream.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008E768 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall tlgKeywordOn(const _tlgProvider_t *hProvider, unsigned __int64 keyword)
{
  char v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & hProvider->KeywordAny) != 0 && (keyword & hProvider->KeywordAll) == hProvider->KeywordAll )
    return 1;
  return v2;
}
