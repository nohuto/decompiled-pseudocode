/*
 * XREFs of HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x1C001F880
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x1C001743C (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C00285D0 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(v1);
  HUBPDO_NotifyDeviceDisconnected(v1);
  return 1000LL;
}
