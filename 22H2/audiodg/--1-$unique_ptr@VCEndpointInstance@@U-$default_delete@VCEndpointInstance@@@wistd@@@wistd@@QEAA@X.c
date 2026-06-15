/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A3BC
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$12 @ 0x14002BDF0 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$12.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$9 @ 0x14004AC4A (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$9.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140047E3C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(
        CEndpointInstance **a1)
{
  CEndpointInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CEndpointInstance::`scalar deleting destructor'(result);
  return result;
}
