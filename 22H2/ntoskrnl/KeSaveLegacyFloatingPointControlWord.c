/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14041EA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
