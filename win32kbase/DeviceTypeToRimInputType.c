/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0039CC0
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004D20 (RIMAddInjectionDeviceOfType.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00374F8 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0039A94 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimCompleteReads @ 0x1C0039B74 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0039C14 (rimIssueReads.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01A3530 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01A3C50 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
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
