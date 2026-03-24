/*
 * XREFs of GreGetHwndUpdateIds @ 0x1C026F170
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCC40 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0017620 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C0118DB0 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0118DDC (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreGetHwndUpdateIds(HWND a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbx
  SFMLOGICALSURFACE *v9; // rbp
  __int64 v10; // r8
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v12, a1, 0LL);
    v8 = v12;
    if ( v12 )
    {
      v9 = *(SFMLOGICALSURFACE **)(v12 + 168);
      if ( v12 != -88 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v8 + 88);
      }
      v7 = *((_QWORD *)v9 + 23);
      if ( v7 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v9) )
      {
        if ( (SFMLOGICALSURFACE::uiDxPresentFlags(v9) & 2) != 0 )
          v10 |= 0x8000000000000000uLL;
        *a2 = v10;
        v6 = 0;
        *a3 = *((_QWORD *)v9 + 35);
      }
      if ( v8 != -88 )
      {
        GreReleasePushLockShared(v8 + 88);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v8 )
      DEC_SHARE_REF_CNT(v8, v7);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return v6;
}
