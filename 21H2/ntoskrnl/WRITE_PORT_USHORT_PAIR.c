/*
 * XREFs of WRITE_PORT_USHORT_PAIR @ 0x14050A55C
 * Callers:
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     HalpECmosReadByte @ 0x140518340 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140518380 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x14052AB00 (HalpPicSetLineState.c)
 * Callees:
 *     HalpIoDelay @ 0x14041B0A0 (HalpIoDelay.c)
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
