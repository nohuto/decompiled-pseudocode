/*
 * XREFs of TrackLayeredZorder @ 0x1C002C250
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C3EC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002C508 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     GreZorderSprite @ 0x1C002CF5C (GreZorderSprite.c)
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
