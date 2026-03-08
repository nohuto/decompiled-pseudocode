/*
 * XREFs of ??$?4U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801CF3E8
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800E62AC (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
        void **a1,
        void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4);
  }
  return a1;
}
