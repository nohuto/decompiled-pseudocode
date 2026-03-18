/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C00750D0
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0074D88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0074EA4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimCompleteReads @ 0x1C0074F84 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075024 (rimIssueReads.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C80 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  if ( (unsigned int)(v1 - 1) > 1 )
    return 0LL;
  return 60LL;
}
