/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00B8670
 * Callers:
 *     UserOnGreTextReady @ 0x1C00B8554 (UserOnGreTextReady.c)
 *     NtUserLW_LoadFonts @ 0x1C00B8630 (NtUserLW_LoadFonts.c)
 * Callees:
 *     ClientLoadLocalT1Fonts @ 0x1C00B81FC (ClientLoadLocalT1Fonts.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00B8314 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EngCloseFNTCache @ 0x1C00B83B8 (EngCloseFNTCache.c)
 *     xxxAddFontResourceW @ 0x1C00B8754 (xxxAddFontResourceW.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00B87A0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00B88F8 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rcx
  unsigned int v6; // edi
  unsigned int Count; // eax
  __int64 v8; // rcx
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  UserSessionSwitchLeaveCrit(a1);
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(1LL, 0LL);
    return 0LL;
  }
  else
  {
    EnterCrit(1LL, 0LL);
    if ( v1 )
    {
      Interval.QuadPart = 0LL;
      v6 = 0;
      while ( !gbPermanentFontsLoaded )
      {
        if ( gbNonServiceSession && v6 >= 0x960 )
          goto LABEL_11;
        Count = AtomicExecutionCheck::GetCount(v2);
        if ( Count )
        {
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
          DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        }
        UserSessionSwitchLeaveCrit(v8);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        EnterCrit(1LL, 0LL);
        ++v6;
      }
      xxxLoadUserAndNetworkFonts();
LABEL_11:
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval = *(union _LARGE_INTEGER *)((char *)Gre::Base::Globals(v3) + 64);
          ((void (__fastcall *)(_QWORD))GreAcquireSemaphore)((union _LARGE_INTEGER)Interval.QuadPart);
          EngCloseFNTCache(v4);
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
