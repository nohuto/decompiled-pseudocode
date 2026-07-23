/*
 * XREFs of WRITE_PORT_USHORT_PAIR @ 0x1404BDD2C
 * Callers:
 *     HalMakeBeep @ 0x1404BDC60 (HalMakeBeep.c)
 *     HalpECmosReadByte @ 0x1404CC430 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1404CC470 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1404DD050 (HalpPicSetLineState.c)
 * Callees:
 *     HalpIoDelay @ 0x1403F9EB0 (HalpIoDelay.c)
 */

unsigned __int8 __fastcall WRITE_PORT_USHORT_PAIR(unsigned __int16 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int8 v3; // di^1
  unsigned __int8 result; // al

  v3 = HIBYTE(a3);
  __outbyte(a1, a3);
  HalpIoDelay();
  result = v3;
  __outbyte(a2, v3);
  return result;
}
