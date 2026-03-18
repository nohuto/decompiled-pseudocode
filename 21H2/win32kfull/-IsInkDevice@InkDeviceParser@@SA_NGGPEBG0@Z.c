/*
 * XREFs of ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1C024D5B0
 * Callers:
 *     InkProcessorIsInkDevice @ 0x1C021AC20 (InkProcessorIsInkDevice.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02522C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InkDeviceParser::IsInkDevice(
        __int16 a1,
        __int16 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  return a1 == -241 && a2 == 256 && (!a3 || *a3 == 1118) && (!a4 || *a4 == 85);
}
