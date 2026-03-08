/*
 * XREFs of KiPollFreezeExecution @ 0x1405746E0
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
