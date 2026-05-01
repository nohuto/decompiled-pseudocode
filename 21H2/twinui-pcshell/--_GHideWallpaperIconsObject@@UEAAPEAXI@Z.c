/*
 * XREFs of ??_GHideWallpaperIconsObject@@UEAAPEAXI@Z @ 0x1804E7290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
HideWallpaperIconsObject *__fastcall HideWallpaperIconsObject::`scalar deleting destructor'(
        HideWallpaperIconsObject *this,
        char a2)
{
  HWND ShellWindow; // rax

  *(_QWORD *)this = &HideWallpaperIconsObject::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    ShellWindow = GetShellWindow();
    PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 0LL);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
