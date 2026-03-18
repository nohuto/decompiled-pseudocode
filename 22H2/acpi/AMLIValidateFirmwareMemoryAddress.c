/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0048ECC
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C008B814 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C004AD68 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 AMLIValidateFirmwareMemoryAddress()
{
  return AmlpValidateFirmwareMemoryAddress();
}
