/*
 * XREFs of ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A73E4
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *PtiCurrent(void)
{
  return (struct tagTHREADINFO *)gptiCurrent;
}
