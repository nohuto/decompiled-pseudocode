/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0063804
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00B1914 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C002A10C (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
