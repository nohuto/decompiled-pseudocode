/*
 * XREFs of ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800E9B88
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x180036C08 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800E62AC (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
        unsigned __int64 **a1,
        unsigned __int64 a2)
{
  return **a1 < a2;
}
