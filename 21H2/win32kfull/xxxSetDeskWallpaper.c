/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C011A1CC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IsThreadDesktopComposed @ 0x1C006DA68 (IsThreadDesktopComposed.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C011A340 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C011A3F0 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C011A46C (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C011A528 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, char *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  struct tagWND *v7; // rbx
  __int64 v8; // rdx
  __int64 CurrentProcess; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[4]; // [rsp+30h] [rbp-248h] BYREF
  int v19; // [rsp+50h] [rbp-228h] BYREF
  char v20[524]; // [rsp+54h] [rbp-224h] BYREF

  memset(v20, 0, 0x200uLL);
  v4 = 0;
  v19 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v20, 256LL, (char *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v20, 256LL);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v20, 256LL);
  }
  else if ( a2 != (char *)-2LL )
  {
    RtlStringCchCopyW(v20, 256LL, a2);
  }
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v6 )
    v7 = *(struct tagWND **)(*(_QWORD *)(v6 + 8) + 168LL);
  else
    v7 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v8), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v7 )
  {
    v18[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v18;
    v18[1] = v7;
    HMLockObject(v7);
    v10 = xxxSendNotifyMessage(v7, 0x34u, 5LL, 0LL, 1);
    ThreadUnlock1(v16, v15, v17);
  }
  else
  {
    v4 = 1;
    v10 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v19);
  }
  if ( v10 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v12 = (void *)ReferenceDwmApiPort(v11);
      DwmAsyncNotifyWallpaperChange(v12);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v10;
}
