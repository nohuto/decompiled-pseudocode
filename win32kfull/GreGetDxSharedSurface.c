/*
 * XREFs of GreGetDxSharedSurface @ 0x1C000A248
 * Callers:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000A1BC (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0147D40 (NtUserHwndQueryRedirectionInfo.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C014D550 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C000A484 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C000A514 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000A70C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C001EC6C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C014CAD8 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(HWND a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // esi
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  SFMLOGICALSURFACE *v21; // rcx
  __int64 v22; // r9
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = -1071775733;
  if ( (unsigned int)IsDwmActive() )
  {
    v12 = Gre::Base::Globals(v11);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v12 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v12 + 9));
    if ( !(unsigned int)IsDwmActive() || (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
    {
LABEL_21:
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v12 + 9));
      return v10;
    }
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v23, a1, 0LL);
    v14 = v23[0];
    if ( !v23[0] )
    {
      v10 = -1073741811;
LABEL_19:
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
      goto LABEL_21;
    }
    v15 = *(_QWORD *)(v23[0] + 144LL);
    if ( v23[0] != -88LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v14 + 88);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 32) + 8692LL)
      || !*(_QWORD *)(v15 + 184)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v15)
      || (unsigned int)UserIsRemoteConnection() && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    {
      *a2 = 0LL;
      v10 = -1073741822;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0LL;
      *a3 = 0;
      a3[1] = 0;
      goto LABEL_17;
    }
    if ( *(_QWORD *)(v15 + 192) )
    {
      SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v15);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v15 + 244) & 0x100) != 0 || v23[0] == *(_QWORD *)a3 )
      {
        *a2 = v22;
        *a4 = *(_DWORD *)(v15 + 208);
        *a5 = SFMLOGICALSURFACE::uiDxPresentFlags(v21);
        v17 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v15);
        goto LABEL_14;
      }
    }
    else
    {
      v16 = *(_QWORD *)(v15 + 184);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v16 + 92) & 0x400) != 0 || *(_QWORD *)(v16 + 552) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v16 + 544);
        *a4 = 87;
        *a5 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v15);
        v17 = *(_QWORD *)(v16 + 552);
LABEL_14:
        *(_QWORD *)a3 = v17;
        v18 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v15);
        v19 = *(unsigned int *)(*(_QWORD *)(v15 + 184) + 68LL);
        if ( (v18 & 2) != 0 )
          v19 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v19;
        goto LABEL_17;
      }
    }
    v10 = -1071775484;
LABEL_17:
    if ( v14 != -88 )
    {
      GreReleasePushLockShared(v14 + 88);
      KeLeaveCriticalRegion();
    }
    goto LABEL_19;
  }
  return v10;
}
