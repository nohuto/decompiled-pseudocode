/*
 * XREFs of PpmCheckApplyResetNotification @ 0x140576B40
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408F5E78 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CB48 (PpmCheckCustomRun.c)
 */

char PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
