VSYNC_TIME_COUNTERS *__fastcall VSYNC_TIME_COUNTERS::VSYNC_TIME_COUNTERS(VSYNC_TIME_COUNTERS *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
