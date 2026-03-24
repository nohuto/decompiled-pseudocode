/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00E6120
 * Callers:
 *     UserOnGreTextReady @ 0x1C00E5F8C (UserOnGreTextReady.c)
 * Callees:
 *     xxxAddFontResourceW @ 0x1C0021D64 (xxxAddFontResourceW.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0025D38 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0025E90 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C009B854 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     EngCloseFNTCache @ 0x1C00E61F0 (EngCloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00E6368 (ClientLoadLocalT1Fonts.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  unsigned int v6; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  UserSessionSwitchLeaveCrit(a1);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0LL, 1LL);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 1LL);
    if ( v1 )
    {
      Interval.QuadPart = 0LL;
      v6 = 0;
      if ( gbPermanentFontsLoaded )
      {
LABEL_8:
        xxxLoadUserAndNetworkFonts(v3, v2, v4, v5);
      }
      else
      {
        while ( !gbNonServiceSession || v6 < 0x960 )
        {
          if ( gdwInAtomicOperation )
          {
            v3 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v3);
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          EnterCrit(0LL, 1LL);
          ++v6;
          if ( gbPermanentFontsLoaded )
            goto LABEL_8;
        }
      }
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf", 1, 0LL);
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval.QuadPart = ghsemFntCache;
          GreAcquireSemaphore(ghsemFntCache);
          EngCloseFNTCache();
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
