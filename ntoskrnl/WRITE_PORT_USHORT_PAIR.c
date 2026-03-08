/*
 * XREFs of WRITE_PORT_USHORT_PAIR @ 0x140504708
 * Callers:
 *     HalMakeBeep @ 0x140504630 (HalMakeBeep.c)
 *     HalpECmosReadByte @ 0x140513340 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140513380 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140525800 (HalpPicSetLineState.c)
 * Callees:
 *     HalpIoDelay @ 0x140411C50 (HalpIoDelay.c)
 */

unsigned __int8 __fastcall WRITE_PORT_USHORT_PAIR(unsigned __int16 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int8 v4; // di^1
  unsigned __int8 result; // al

  __outbyte(a1, a3);
  v4 = HIBYTE(a3);
  HalpIoDelay();
  result = v4;
  __outbyte(a2, v4);
  return result;
}
