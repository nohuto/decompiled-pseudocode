/*
 * XREFs of ResFwFreeContext @ 0x1409F207C
 * Callers:
 *     BgFreeContext @ 0x1409F2038 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x1409F21AC (BgpFwReservePoolSwap.c)
 *     LogFwReport @ 0x1409F2524 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x1409F31B4 (AnFwFadeCompletion.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 *     ResFwBackgroundTransition @ 0x1409F4408 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F44CC (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x1409F45FC (RaspClearCache.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  struct _MDL *v4; // rcx

  if ( (dword_140C134F0 & 0x100000) != 0 )
  {
    v2 = TxtpTextCache;
    v3 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != v2 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v3;
      *(_QWORD *)(v3 + 8) = &TxtpTextCache;
      if ( v2 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy(v2[6]);
      BgpFwFreeMemory((__int64)v2);
      v2 = TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v3 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C02CA8 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1LL, 0LL, 0LL, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140C134F0 &= 0xFFEFF7FD;
    qword_140C135B0 = BgpAnimationRegionSave;
    qword_140C135B8 = BgpTextRegionSave;
    qword_140C134A0 = 0LL;
    BgInternal = 0LL;
    xmmword_140C13490 = 0LL;
    ResFwBackgroundTransition(1LL);
  }
  else
  {
    v4 = *(struct _MDL **)(a1 + 8);
    if ( v4 )
    {
      MmFreePagesFromMdl(v4);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
