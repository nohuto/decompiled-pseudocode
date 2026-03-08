/*
 * XREFs of HalpBlkIdleHalt @ 0x140B11060
 * Callers:
 *     HalpBlkIdleLoop @ 0x140B13530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
