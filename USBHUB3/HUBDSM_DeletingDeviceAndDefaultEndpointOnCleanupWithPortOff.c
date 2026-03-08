/*
 * XREFs of HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001F650
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x1C0019884 (HUBPDO_SignalPnpPowerEvent.c)
 *     HUBUCX_DeleteDeviceFromUCX @ 0x1C00286EC (HUBUCX_DeleteDeviceFromUCX.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C00287B8 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0028870 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0030714 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 */

__int64 __fastcall HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 48) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  HUBMISC_RemoveDeviceInfoFromGlobalChildList(v1);
  HUBPDO_SignalPnpPowerEvent(v1);
  return 4077LL;
}
