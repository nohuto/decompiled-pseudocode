/*
 * XREFs of HalpCmosReadByte @ 0x14036D900
 * Callers:
 *     HalpGetSetCmosData @ 0x14039F6CC (HalpGetSetCmosData.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpCmosReadByte(unsigned __int8 a1)
{
  __outbyte(0x70u, a1);
  return __inbyte(0x71u);
}
