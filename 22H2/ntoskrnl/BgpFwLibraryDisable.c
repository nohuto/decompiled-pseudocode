/*
 * XREFs of BgpFwLibraryDisable @ 0x140AED1B0
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140AEFA48 (BgpFwLibraryDestroy.c)
 *     BgLibraryDisable @ 0x140AF01D0 (BgLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x140AED0B8 (LogFwReport.c)
 *     BgpTxtDestroyRegion @ 0x140AED8C8 (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140AEDF7C (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x140AF0360 (BgpFoDestroy.c)
 *     ResFwpPageOutBackground @ 0x140AF0490 (ResFwpPageOutBackground.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AF06E8 (AnFwDisableBackgroundUpdateTimer.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C0E4B0;
  if ( (dword_140C0E4B0 & 2) != 0 )
  {
    if ( (dword_140C0E4B0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C0E578 )
    {
      BgpTxtDestroyRegion();
      if ( BgpTextRegionSave == qword_140C0E578 )
        BgpTextRegionSave = 0LL;
      qword_140C0E578 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140C0E570 )
    {
      BgpTxtDestroyRegion();
      if ( BgpAnimationRegionSave == qword_140C0E570 )
        BgpAnimationRegionSave = 0LL;
      qword_140C0E570 = 0LL;
    }
    if ( qword_140C0E558 )
    {
      BgpFoDestroy();
      if ( *(_QWORD *)qword_140C0E558 )
      {
        if ( (*(_DWORD *)(qword_140C0E558 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C0E558);
      }
      BgpFwFreeMemory(qword_140C0E558);
      qword_140C0E558 = 0LL;
    }
    LogFwReport();
    ResFwpPageOutBackground();
    result = 0LL;
    dword_140C0E4B0 &= ~2u;
    BgInternal = 0LL;
    qword_140C0E460 = 0LL;
    xmmword_140C0E450 = 0LL;
  }
  return result;
}
