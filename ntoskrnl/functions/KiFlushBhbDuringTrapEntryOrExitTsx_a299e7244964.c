void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14042CACD
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
