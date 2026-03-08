/*
 * XREFs of HalpIoDelay @ 0x140411C50
 * Callers:
 *     HalMakeBeep @ 0x140504630 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140504708 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x140513340 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140513380 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140525800 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x140525900 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x14052592C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140A933D0 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
