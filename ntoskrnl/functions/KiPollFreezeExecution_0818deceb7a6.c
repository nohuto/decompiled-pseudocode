char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
