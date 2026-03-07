void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx
  _UNKNOWN **v3; // rbx
  __int64 v4; // rax

  if ( (dword_140C0E3B0 & 0x100000) != 0 )
  {
    v3 = (_UNKNOWN **)TxtpTextCache;
    v4 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_6:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v4 + 8) != v3 )
        goto LABEL_6;
      TxtpTextCache = (_UNKNOWN *)v4;
      *(_QWORD *)(v4 + 8) = &TxtpTextCache;
      if ( v3 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v3[6]);
      BgpFwFreeMemory((__int64)v3);
      v3 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_6;
      v4 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C04370 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1, 0LL, 0, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140C0E3B0 &= 0xFFEFF7FD;
    qword_140C0E470 = BgpAnimationRegionSave;
    qword_140C0E478 = BgpTextRegionSave;
    qword_140C0E360 = 0LL;
    BgInternal = 0LL;
    xmmword_140C0E350 = 0LL;
    ResFwpPageOutBackground();
  }
  else
  {
    v2 = *(struct _MDL **)(a1 + 8);
    if ( v2 )
    {
      MmFreePagesFromMdl(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
