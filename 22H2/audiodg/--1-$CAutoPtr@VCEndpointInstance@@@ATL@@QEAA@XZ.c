/*
 * XREFs of ??1?$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ @ 0x14004A2B0
 * Callers:
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$0 @ 0x14004A524 (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140047E3C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall ATL::CAutoPtr<CEndpointInstance>::~CAutoPtr<CEndpointInstance>(CEndpointInstance **a1)
{
  CEndpointInstance *v2; // rcx
  CEndpointInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CEndpointInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
