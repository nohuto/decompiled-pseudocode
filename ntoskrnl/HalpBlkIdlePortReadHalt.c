/*
 * XREFs of HalpBlkIdlePortReadHalt @ 0x140B11070
 * Callers:
 *     HalpBlkIdleLoop @ 0x140B13530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkIdlePortReadHalt(unsigned __int16 a1)
{
  __inbyte(a1);
  _enable();
  __halt();
}
