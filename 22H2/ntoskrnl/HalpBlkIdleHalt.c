/*
 * XREFs of HalpBlkIdleHalt @ 0x140B15060
 * Callers:
 *     HalpBlkIdleLoop @ 0x140B17530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
