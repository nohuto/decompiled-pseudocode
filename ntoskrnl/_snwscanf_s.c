/*
 * XREFs of _snwscanf_s @ 0x1403D9280
 * Callers:
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A5D904 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1403DCB80 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
