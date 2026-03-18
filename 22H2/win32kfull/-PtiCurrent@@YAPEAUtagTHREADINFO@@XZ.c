/*
 * XREFs of ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A622C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *PtiCurrent(void)
{
  return (struct tagTHREADINFO *)gptiCurrent;
}
