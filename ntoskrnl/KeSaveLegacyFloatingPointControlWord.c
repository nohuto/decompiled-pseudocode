/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x140416700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
