/*
 * XREFs of ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800E624C
 * Callers:
 *     _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x180031A6C (_lambda_d726b1e7ec95932be2432bf4c2269415_--operator().c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x180037730 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CProcessResourceAttributionReporter::HighResourceUsageReport *__fastcall CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        CProcessResourceAttributionReporter::HighResourceUsageReport *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  operator delete(this, 0x30uLL);
  return this;
}
