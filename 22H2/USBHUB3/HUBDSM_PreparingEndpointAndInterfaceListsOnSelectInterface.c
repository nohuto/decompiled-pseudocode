/*
 * XREFs of HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C0024490
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002F738 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 */

__int64 __fastcall HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface(__int64 a1)
{
  return HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(*(_QWORD *)(a1 + 960));
}
