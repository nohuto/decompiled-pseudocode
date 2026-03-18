/*
 * XREFs of HalpIoDelay @ 0x140419FE0
 * Callers:
 *     HalMakeBeep @ 0x140506710 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1405067E8 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x140515870 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1405158B0 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140527D30 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x140527E30 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x140527E5C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140A96510 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
