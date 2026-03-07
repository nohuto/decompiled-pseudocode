__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, const unsigned __int16 *a2)
{
  int v4; // ebp
  struct tagWND *ShellWindow; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // [rsp+30h] [rbp-248h] BYREF
  __int64 v20; // [rsp+40h] [rbp-238h]
  int v21; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v22[262]; // [rsp+54h] [rbp-224h] BYREF

  memset_0(v22, 0, 0x200uLL);
  v4 = 0;
  v21 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v22, 0x100uLL, (const unsigned __int16 *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v22, 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v22, 256LL);
  }
  else if ( a2 != (const unsigned __int16 *)-2LL )
  {
    RtlStringCchCopyW(v22, 0x100uLL, a2);
  }
  ShellWindow = _GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  if ( (PsGetCurrentProcess(v7, v6, v8) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v9, v10), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && ShellWindow )
  {
    v19 = 0LL;
    v20 = 0LL;
    ThreadLockAlways(ShellWindow, &v19);
    v12 = xxxSendNotifyMessage(ShellWindow, 52LL, 5LL, 0LL, 1);
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
    v4 = 1;
    v12 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v21);
  }
  if ( v12 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v14 = (void *)ReferenceDwmApiPort(v13);
      DwmAsyncNotifyWallpaperChange(v14);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v12;
}
