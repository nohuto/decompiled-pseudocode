/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140AEE558
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     BgDisplayProgressIndicator @ 0x140AF06AC (BgDisplayProgressIndicator.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252440 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     BgpTxtDisplayCharacter @ 0x140384188 (BgpTxtDisplayCharacter.c)
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x140AEE500 (RaspClearCache.c)
 *     LogFwStat @ 0x140AEE81C (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140AEEA30 (BgpGxRectangleDestroy.c)
 *     AnFwpDisableProgressTimer @ 0x140AF05E0 (AnFwpDisableProgressTimer.c)
 *     AnFwpProgressAnimationManual @ 0x140AF32AC (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al
  unsigned __int16 i; // ax
  __int64 v5; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rax

  LOBYTE(a3) = byte_140CF7BA8;
  if ( !(_BYTE)a1 && !byte_140CF7BA8 )
    return 0LL;
  v3 = 0;
  if ( (dword_140C0E4B0 & 0x100000) != 0 )
    v3 = (dword_140C0E4B0 & 0x1000) != 0;
  if ( !(_BYTE)a1 )
  {
    v7 = dword_140C0E4B0 & 0xC00;
    if ( (_DWORD)v7 != 3072 && !v3 )
      AnFwpDisableProgressTimer(3072LL, v7, a3);
    word_140C0B4EC = -7989;
    BgpTxtDisplayCharacter(qword_140C0E570, 57547LL, 0, 0LL, 0LL);
    v8 = TxtpTextCache;
    v9 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_27:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v9 + 8) != v8 )
        goto LABEL_27;
      TxtpTextCache = (_UNKNOWN *)v9;
      *(_QWORD *)(v9 + 8) = &TxtpTextCache;
      if ( v8 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy(v8[6]);
      BgpFwFreeMemory((__int64)v8);
      v8 = TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_27;
      v9 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C043D8 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_140CF7BA8 )
  {
    if ( v3 )
      goto LABEL_20;
    return 3221225659LL;
  }
  else if ( qword_140C0E570 )
  {
    if ( (dword_140C0E4B0 & 0x40000) == 0 )
    {
      byte_140CF7BA8 = 1;
      if ( !v3 )
      {
        word_140C0B4EC = word_140C0B4E8;
        LogFwStat(1LL, 2LL, 0LL);
        for ( i = word_140C0B4EC; i <= (unsigned __int16)word_140C0B4F0; i = ++word_140C0B4EC )
          BgpTxtDisplayCharacter(qword_140C0E570, i, 1, 0LL, 0LL);
        v5 = 57718LL;
        if ( dword_140C0E63C != 1 )
          v5 = 57547LL;
        word_140C0B4EC = v5;
        BgpTxtDisplayCharacter(qword_140C0E570, v5, 0, 0LL, 0LL);
        qword_140CF7BB0 = LogFwStat(0LL, 2LL, 0LL);
        KeInitializeTimerEx(&stru_140D16A40, NotificationTimer);
        KeInitializeDpc(&stru_140D169C0, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_140D16A40, 0LL, 0x1Eu, 0, &stru_140D169C0);
        return 0LL;
      }
      qword_140CF7BB0 = 0LL;
      word_140C0B4EC = word_140C0B4E8 - 1;
LABEL_20:
      AnFwpProgressAnimationManual(a1, (unsigned int)dword_140C0E4B0, a3);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
