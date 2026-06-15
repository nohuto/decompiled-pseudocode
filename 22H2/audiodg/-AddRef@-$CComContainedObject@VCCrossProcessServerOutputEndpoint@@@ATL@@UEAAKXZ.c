/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14005C2F0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14002B270 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x14002B280 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x14002B290 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14002B2A0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14002B2B0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ @ 0x14002B2C0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x14002B300 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x14002B310 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 8LL))(*(_QWORD *)(a1 + 488));
}
