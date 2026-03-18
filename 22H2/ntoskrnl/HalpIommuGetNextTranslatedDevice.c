/*
 * XREFs of HalpIommuGetNextTranslatedDevice @ 0x14040F308
 * Callers:
 *     IvtHandleInterrupt @ 0x14052CEB0 (IvtHandleInterrupt.c)
 * Callees:
 *     HalpDmaGetNextTranslatedDevice @ 0x1404FFF34 (HalpDmaGetNextTranslatedDevice.c)
 */

__int64 HalpIommuGetNextTranslatedDevice()
{
  return HalpDmaGetNextTranslatedDevice();
}
