/*
 * XREFs of ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAJ1AEAH11AEAM3@Z @ 0x180194B18
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1801963D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIJJHJJMM@Z @ 0x180195EFC (-MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIJJHJJMM@Z.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,long &,long &,int &,long &,long &,float &,float &>(
        unsigned int *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        float *a7,
        float *a8)
{
  __int64 v12; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v12, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
      (ISMTracing *)(unsigned int)*a5,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8);
  }
}
