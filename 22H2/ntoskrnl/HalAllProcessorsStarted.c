/*
 * XREFs of HalAllProcessorsStarted @ 0x140A74130
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099B988 (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22, 0LL) >= 0;
}
