/*
 * XREFs of AnFwFadeCompletion @ 0x140AE9FB8
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140AEE4C0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AEE870 (BgpConsoleDisplayString.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140AEA85C (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140C0E3B0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140D16700, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C0B508 )
    {
      BgpGxRectangleDestroy(qword_140C0B508);
      qword_140C0B508 = 0LL;
    }
    if ( qword_140C0B538 )
    {
      BgpGxRectangleDestroy(qword_140C0B538);
      qword_140C0B538 = 0LL;
    }
    if ( qword_140C0B540 )
    {
      BgpGxRectangleDestroy(qword_140C0B540);
      qword_140C0B540 = 0LL;
    }
    if ( qword_140C0B548 )
    {
      BgpGxRectangleDestroy(qword_140C0B548);
      qword_140C0B548 = 0LL;
    }
    if ( qword_140C0B578 )
    {
      BgpGxRectangleDestroy(qword_140C0B578);
      qword_140C0B578 = 0LL;
    }
    if ( qword_140C0B580 )
    {
      BgpGxRectangleDestroy(qword_140C0B580);
      qword_140C0B580 = 0LL;
    }
  }
}
