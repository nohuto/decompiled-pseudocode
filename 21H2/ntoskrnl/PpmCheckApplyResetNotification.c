/*
 * XREFs of PpmCheckApplyResetNotification @ 0x140576E40
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408F5F88 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CC28 (PpmCheckCustomRun.c)
 */

char PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
