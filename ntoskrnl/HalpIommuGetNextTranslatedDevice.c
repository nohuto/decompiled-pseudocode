/*
 * XREFs of HalpIommuGetNextTranslatedDevice @ 0x140409CB8
 * Callers:
 *     IvtHandleInterrupt @ 0x14052A980 (IvtHandleInterrupt.c)
 * Callees:
 *     HalpDmaGetNextTranslatedDevice @ 0x1404FDE54 (HalpDmaGetNextTranslatedDevice.c)
 */

__int64 HalpIommuGetNextTranslatedDevice()
{
  return HalpDmaGetNextTranslatedDevice();
}
