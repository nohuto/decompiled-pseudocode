/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C001C81C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0016A64 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C00382A4 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEtwMiniportEventProxy @ 0x1C003864C (StorEtwMiniportEventProxy.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C003A494 (StorPortpInvokeAcpiMethod.c)
 *     StorpBuildScatterGatherList @ 0x1C003B364 (StorpBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  switch ( a1 )
  {
    case -2147483643:
      return 3238002692LL;
    case -1073741822:
      return 3238002690LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741496:
      return 3238002696LL;
  }
  if ( a1 < 0 )
    return 3238002689LL;
  return 0LL;
}
