/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403A839C
 * Callers:
 *     HalpDispatchPnp @ 0x1407645A0 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099B988 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
