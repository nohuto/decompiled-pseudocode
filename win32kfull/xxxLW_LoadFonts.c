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
