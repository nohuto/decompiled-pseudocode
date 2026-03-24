/*
 * XREFs of AnFwFadeCompletion @ 0x1409F21B4
 * Callers:
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F67B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F6B60 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x1409F27D8 (LogFwStat.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C134F0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140CF3300, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C10E88 )
    {
      BgpGxRectangleDestroy(qword_140C10E88);
      qword_140C10E88 = 0LL;
    }
    if ( qword_140C10EB0 )
    {
      BgpGxRectangleDestroy(qword_140C10EB0);
      qword_140C10EB0 = 0LL;
    }
    if ( qword_140C10EB8 )
    {
      BgpGxRectangleDestroy(qword_140C10EB8);
      qword_140C10EB8 = 0LL;
    }
    if ( qword_140C10EC0 )
    {
      BgpGxRectangleDestroy(qword_140C10EC0);
      qword_140C10EC0 = 0LL;
    }
    if ( qword_140C10EE8 )
    {
      BgpGxRectangleDestroy(qword_140C10EE8);
      qword_140C10EE8 = 0LL;
    }
    if ( qword_140C10EF0 )
    {
      BgpGxRectangleDestroy(qword_140C10EF0);
      qword_140C10EF0 = 0LL;
    }
  }
}
