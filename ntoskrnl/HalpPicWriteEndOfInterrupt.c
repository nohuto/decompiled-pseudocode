/*
 * XREFs of HalpPicWriteEndOfInterrupt @ 0x140525900
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x140411C50 (HalpIoDelay.c)
 */

void HalpPicWriteEndOfInterrupt()
{
  __outbyte(0xA0u, 0x20u);
  __outbyte(0x20u, 0x20u);
  __inbyte(0x20u);
  HalpIoDelay();
}
