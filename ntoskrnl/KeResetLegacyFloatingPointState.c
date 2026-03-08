/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1404166F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
