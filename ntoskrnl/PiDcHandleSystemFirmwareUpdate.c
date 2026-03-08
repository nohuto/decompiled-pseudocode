/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x1409582A0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x1408793AC (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
