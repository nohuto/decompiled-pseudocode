/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CCrossProcessClientInputEndpoint>>,ATL::CComCreator<ATL::CComAggObject<CCrossProcessClientInputEndpoint>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CCrossProcessClientInputEndpoint>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CCrossProcessClientInputEndpoint>>::CreateInstance();
}
