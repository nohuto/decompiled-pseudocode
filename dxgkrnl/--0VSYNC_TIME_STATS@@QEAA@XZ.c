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
