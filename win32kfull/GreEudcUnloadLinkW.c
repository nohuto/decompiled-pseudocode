/*
 * XREFs of GreEudcUnloadLinkW @ 0x1C02A13F0
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C02A3450 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B7924 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00B918C (-IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00DEFF0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A2A34 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(wchar_t *Str1, __int64 a2, unsigned __int16 *a3)
{
  int v5; // esi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  v7 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus((__int64)Str1) )
    return 0LL;
  v9 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
  v10[0] = *(_QWORD *)(v9 + 13288);
  GreAcquireSemaphore(v10[0]);
  GreAcquireSemaphore(*(_QWORD *)(v9 + 13272));
  if ( !IsConcurrentEUDCOperationInProgress((struct Gre::Full::SESSION_GLOBALS *)v9) )
  {
    if ( Str1 )
    {
      v5 = bDeleteFlEntry(Str1, a3);
      if ( !v5 )
        v5 = bDeleteFlEntry(Str1, a3);
    }
    else if ( *(_QWORD *)(v9 + 13320) || *(_QWORD *)(v9 + 13328) )
    {
      vUnlinkAllEudcRFONTsAndPFEs(0LL);
      bUnloadEudcFont((__int64 *)(v9 + 13320));
      *(_OWORD *)(v9 + 13320) = 0LL;
      ++*(_DWORD *)(v9 + 13896);
      *(_WORD *)(v9 + 13336) = 0;
      bWriteUserSystemEUDCRegistry((PVOID)&FLOAT_0_0);
    }
    v7 = v5;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v9 + 13272));
  SEMOBJ::vUnlock((SEMOBJ *)v10);
  return v7;
}
