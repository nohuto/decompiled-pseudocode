/*
 * XREFs of ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800EA834
 * Callers:
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800D2F48 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800DF020 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x1800EA864 (_lambda_d726b1e7ec95932be2432bf4c2269415_--operator().c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180153220 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800EAA40 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(
        CProcessResourceAttributionReporter::HighResourceUsageReport **a1,
        unsigned int a2)
{
  CProcessResourceAttributionReporter::HighResourceUsageReport *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v2, a2);
  return result;
}
