/*
 * XREFs of Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C001F76C
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 *     RootHub_IsDeviceNative @ 0x1C001F7C0 (RootHub_IsDeviceNative.c)
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 * Callees:
 *     Feature_USB4PowerImprovements__private_IsEnabledFallback @ 0x1C001F7A4 (Feature_USB4PowerImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage()
{
  if ( (Feature_USB4PowerImprovements__private_featureState & 0x10) != 0 )
    return Feature_USB4PowerImprovements__private_featureState & 1;
  else
    return Feature_USB4PowerImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_USB4PowerImprovements__private_featureState,
             3LL);
}
