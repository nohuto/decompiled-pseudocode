/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0044E70
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0044B20 (RIMDiscoverDevicesOfInputType.c)
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0044CE0 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimIssueReads @ 0x1C0044DC0 (rimIssueReads.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0181990 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
    return 60;
  return v1;
}
