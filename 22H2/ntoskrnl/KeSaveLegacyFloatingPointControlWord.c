/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1403FDC70
 * Callers:
 *     KiSwapToUmsThread @ 0x1408BD970 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1408BEBA0 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
