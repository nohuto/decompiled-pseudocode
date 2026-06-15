/*
 * XREFs of ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x14005D7B0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D144 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D27C (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D4EC (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessServerOutputEndpoint::InternalFinalConstructRelease(
        CCrossProcessServerOutputEndpoint *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 122);
}
