/*
 * XREFs of GreGetHwndUpdateIds @ 0x1C026A324
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0147D40 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C000A484 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C000A514 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C001EC6C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 */

__int64 __fastcall GreGetHwndUpdateIds(Gre::Base *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // r14
  Gre::Base *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  SFMLOGICALSURFACE *v12; // rsi
  char v13; // al
  __int64 v14; // rcx
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    v8 = Gre::Base::Globals(v7);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v8 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v8 + 9));
    if ( IsDwmActive(v9) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v16, (HWND)a1, 0LL);
      v11 = v16;
      if ( v16 )
      {
        v12 = *(SFMLOGICALSURFACE **)(v16 + 144);
        if ( v16 != -88 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v11 + 88);
        }
        if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v10) + 32) + 8692LL)
          && *((_QWORD *)v12 + 23)
          && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v12) )
        {
          v13 = SFMLOGICALSURFACE::uiDxPresentFlags(v12);
          v14 = *(unsigned int *)(*((_QWORD *)v12 + 23) + 68LL);
          if ( (v13 & 2) != 0 )
            v14 |= 0x8000000000000000uLL;
          *a2 = v14;
          v6 = 0;
          *a3 = *((_QWORD *)v12 + 35);
        }
        if ( v11 != -88 )
        {
          GreReleasePushLockShared(v11 + 88);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v6 = -1073741811;
      }
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 9));
  }
  return v6;
}
