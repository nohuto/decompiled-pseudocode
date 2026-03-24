/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x1405C417C
 * Callers:
 *     PopShutdownHandler @ 0x1409B2730 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x1405C53BC (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
