/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$12 @ 0x14002BDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(a2 + 128);
}
