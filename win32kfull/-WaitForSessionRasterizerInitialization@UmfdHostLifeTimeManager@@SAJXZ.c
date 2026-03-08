/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00B8670 (xxxLW_LoadFonts.c)
 *     NtGdiAddFontResourceW @ 0x1C00D0870 (NtGdiAddFontResourceW.c)
 *     NtGdiWaitForTextReady @ 0x1C00F5200 (NtGdiWaitForTextReady.c)
 *     GreWaitForTextReady @ 0x1C00F64F0 (GreWaitForTextReady.c)
 *     GreGetCharSet @ 0x1C0111B08 (GreGetCharSet.c)
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0111D54 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0118E20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreGetTextFaceW @ 0x1C011A714 (GreGetTextFaceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0290B74 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02C4500 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C800 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

NTSTATUS __fastcall UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  struct _KEVENT *v3; // rcx
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rbp
  bool v7; // si
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // bl
  __int64 v16; // rcx

  v1 = 0;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v3 = *(struct _KEVENT **)(v2 + 23552);
  if ( !v3 || !*(_QWORD *)(v2 + 23568) )
    return -1073741595;
  if ( KeReadStateEvent(v3) )
  {
    v4 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
    if ( *(_BYTE *)(v4 + 23560) )
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v2 + 23568)) )
        return v1;
    }
  }
  v6 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  v7 = KeReadStateEvent(*(PRKEVENT *)(v6 + 23568)) != 0;
  v9 = *(_QWORD *)(SGDGetSessionState(v8) + 32) + 23520LL;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v9);
  v11 = *(_QWORD *)(SGDGetSessionState(v10) + 32);
  v15 = *(_QWORD *)(v11 + 23496) == PsGetCurrentProcess(v13, v12, v14);
  if ( v9 )
  {
    GreReleasePushLockShared(v9);
    KeLeaveCriticalRegion();
  }
  if ( v15 || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
    return !v7 ? 0x103 : 0;
  if ( !v7 && (unsigned int)UserIsUserCritSecIn() )
    return -1073741595;
  result = KeWaitForSingleObject(*(PVOID *)(v6 + 23552), Executive, 0, 0, 0LL);
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v16) + 32) + 23560LL) )
    {
      KeWaitForSingleObject(*(PVOID *)(v6 + 23568), Executive, 0, 0, 0LL);
      return 0;
    }
    return -1073741595;
  }
  return result;
}
