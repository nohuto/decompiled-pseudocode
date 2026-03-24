/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C012E7EC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00499CC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsThreadDesktopComposed @ 0x1C006A378 (IsThreadDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C012E960 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C012EA10 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C012EA8C (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012EB48 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, char *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+30h] [rbp-248h] BYREF
  int v20; // [rsp+50h] [rbp-228h] BYREF
  char v21[524]; // [rsp+54h] [rbp-224h] BYREF

  memset(v21, 0, 0x200uLL);
  v4 = 0;
  v20 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v21, 256LL, (char *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v21, 256LL);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v21, 256LL);
  }
  else if ( a2 != (char *)-2LL )
  {
    RtlStringCchCopyW(v21, 256LL, a2);
  }
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v7 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 168LL);
  else
    v8 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5, v6) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v9, v10), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v8 )
  {
    v19[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v19;
    v19[1] = v8;
    HMLockObject(v8);
    v12 = xxxSendNotifyMessage(v8, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v18);
  }
  else
  {
    v4 = 1;
    v12 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v20);
  }
  if ( v12 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v15 = (void *)ReferenceDwmApiPort(v14, v13);
      DwmAsyncNotifyWallpaperChange(v15);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v12;
}
