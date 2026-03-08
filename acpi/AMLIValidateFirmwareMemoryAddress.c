/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0048EAC
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C008B804 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C004AD48 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 AMLIValidateFirmwareMemoryAddress()
{
  return AmlpValidateFirmwareMemoryAddress();
}
