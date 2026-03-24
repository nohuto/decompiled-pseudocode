/*
 * XREFs of KiPollFreezeExecution @ 0x14032CBA8
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140995370 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
