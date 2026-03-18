/*
 * XREFs of TrackLayeredZorder @ 0x1C00D3BE0
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00D3D7C (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00D3E98 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     GreZorderSprite @ 0x1C00D4B8C (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  struct tagWND *NextLayeredWindow; // rsi

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  IsWindowDesktopComposed(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v3);
  ReorderChildrenSpriteList(a1, a1);
}
