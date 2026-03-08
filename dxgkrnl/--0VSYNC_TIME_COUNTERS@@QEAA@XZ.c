/*
 * XREFs of ??0VSYNC_TIME_COUNTERS@@QEAA@XZ @ 0x1C0019480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

VSYNC_TIME_COUNTERS *__fastcall VSYNC_TIME_COUNTERS::VSYNC_TIME_COUNTERS(VSYNC_TIME_COUNTERS *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
