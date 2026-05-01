/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1802427D0
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18024436C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C00D4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
        DesktopWallpaperHelpers *this,
        const struct Geometry::CRect *a2,
        HWND *a3)
{
  signed int Error; // eax
  unsigned int v6; // ebx
  HWND Window; // rbx
  signed int v9; // eax
  unsigned int LastError; // edi
  const char *v11; // r9
  int v12; // [rsp+60h] [rbp-39h] BYREF
  int *v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+70h] [rbp-29h]
  WNDCLASSEXW v15; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v17; // [rsp+108h] [rbp+6Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)&v15.cbClsExtra = 0LL;
  memset(&v15.hIcon, 0, 32);
  v15.hIconSm = 0LL;
  v15.cbSize = 80;
  v15.style = 0x4000;
  v15.lpfnWndProc = DefWindowProcW;
  v15.hInstance = &_ImageBase;
  v15.lpszClassName = L"DesktopWallpaperManager";
  if ( !RegisterClassExW(&v15) )
  {
    Error = ResultFromKnownLastError();
    v6 = Error;
    if ( Error < 0 )
    {
      if ( Error != -2147023486 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"internal\\pcshellshell\\private\\inc\\DesktopWallpaperHelpers.h",
          (const char *)(unsigned int)Error);
        return v6;
      }
      if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          43LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\DesktopWallpaperHelpers.h",
          (const char *)0x8000FFFFLL);
    }
  }
  Window = CreateWindowExW(
             0x280080u,
             L"DesktopWallpaperManager",
             0LL,
             0x80880000,
             *(_DWORD *)this,
             *((_DWORD *)this + 1),
             *((_DWORD *)this + 2) - *(_DWORD *)this,
             *((_DWORD *)this + 3) - *((_DWORD *)this + 1),
             0LL,
             0LL,
             &_ImageBase,
             0LL);
  if ( !Window )
  {
    v9 = ResultFromKnownLastError();
    LastError = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"internal\\pcshellshell\\private\\inc\\DesktopWallpaperHelpers.h",
        (const char *)(unsigned int)v9);
      return LastError;
    }
  }
  v17 = 1;
  v12 = 17;
  v13 = &v17;
  v14 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, &v12) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3D,
                  (__int64)"internal\\pcshellshell\\private\\inc\\DesktopWallpaperHelpers.h",
                  v11);
    if ( Window )
      DestroyWindow(Window);
    return LastError;
  }
  ShowWindow(Window, 4);
  *(_QWORD *)a2 = Window;
  return 0LL;
}
