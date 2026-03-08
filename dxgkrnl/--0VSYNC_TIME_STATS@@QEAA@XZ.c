/*
 * XREFs of ??0VSYNC_TIME_STATS@@QEAA@XZ @ 0x1C0024020
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

VSYNC_TIME_STATS *__fastcall VSYNC_TIME_STATS::VSYNC_TIME_STATS(VSYNC_TIME_STATS *this)
{
  VSYNC_TIME_STATS *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  `vector constructor iterator'(
    (char *)this + 16,
    24LL,
    3LL,
    (void (__fastcall *)(char *))VSYNC_TIME_COUNTERS::VSYNC_TIME_COUNTERS);
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
