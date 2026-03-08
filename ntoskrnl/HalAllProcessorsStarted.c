/*
 * XREFs of HalAllProcessorsStarted @ 0x140B72860
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A88D44 (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22, 0LL) >= 0;
}
