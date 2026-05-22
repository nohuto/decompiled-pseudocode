/*
 * XREFs of _MPCManager::MPCManager_::_1_::dtor$3 @ 0x18005180E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManager::MPCManager_::_1_::dtor_3(__int64 a1, BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[8],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
