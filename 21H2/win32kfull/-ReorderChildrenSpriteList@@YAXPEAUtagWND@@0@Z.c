/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F45C
 * Callers:
 *     TrackLayeredZorder @ 0x1C001F3C8 (TrackLayeredZorder.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00203AC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreZorderSprite @ 0x1C0021834 (GreZorderSprite.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, HWND *a2)
{
  struct tagWND *v2; // rax
  struct tagWND *v4; // rbx
  HWND v5; // r8
  struct tagWND *NextLayeredWindow; // rax

  v2 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( v2 )
  {
    do
    {
      v4 = v2;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 14);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) == 0 )
        goto LABEL_9;
      do
      {
        IsWindowDesktopComposed(v4);
        if ( a2 )
          v5 = *a2;
        else
          v5 = 0LL;
        GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)v4, v5);
LABEL_9:
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
      }
      while ( NextLayeredWindow && NextLayeredWindow != (struct tagWND *)a2 );
    }
  }
}
