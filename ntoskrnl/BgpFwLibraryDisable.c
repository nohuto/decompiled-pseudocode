__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C0E3B0;
  if ( (dword_140C0E3B0 & 2) != 0 )
  {
    if ( (dword_140C0E3B0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C0E478 )
    {
      BgpTxtDestroyRegion();
      if ( BgpTextRegionSave == qword_140C0E478 )
        BgpTextRegionSave = 0LL;
      qword_140C0E478 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140C0E470 )
    {
      BgpTxtDestroyRegion();
      if ( BgpAnimationRegionSave == qword_140C0E470 )
        BgpAnimationRegionSave = 0LL;
      qword_140C0E470 = 0LL;
    }
    if ( qword_140C0E458 )
    {
      BgpFoDestroy();
      if ( *(_QWORD *)qword_140C0E458 )
      {
        if ( (*(_DWORD *)(qword_140C0E458 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C0E458);
      }
      BgpFwFreeMemory(qword_140C0E458);
      qword_140C0E458 = 0LL;
    }
    LogFwReport();
    ResFwpPageOutBackground();
    result = 0LL;
    dword_140C0E3B0 &= ~2u;
    BgInternal = 0LL;
    qword_140C0E360 = 0LL;
    xmmword_140C0E350 = 0LL;
  }
  return result;
}
