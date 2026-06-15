/*
 * XREFs of ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14004F590
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14002A730 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14002A740 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 8LL))(*(_QWORD *)(a1 + 336));
}
