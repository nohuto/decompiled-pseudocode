/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1403FDC60
 * Callers:
 *     KiParkUmsThread @ 0x140525E60 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408BD970 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
