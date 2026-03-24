/*
 * XREFs of PpmCheckApplyResetNotification @ 0x140576C00
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408F5E28 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037D0D8 (PpmCheckCustomRun.c)
 */

char PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
