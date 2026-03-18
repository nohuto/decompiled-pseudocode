/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00203AC
 * Callers:
 *     TrackLayeredZorder @ 0x1C001F3C8 (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F45C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0020620 (IsMessageParentWindow.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020640 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindow(struct tagWND *a1)
{
  struct tagWND *NextLayeredWindowSubtree; // r10
  struct tagWND *v2; // r9
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r9

  NextLayeredWindowSubtree = 0LL;
  v2 = a1;
  if ( a1 )
  {
    while ( !(unsigned int)IsDesktopWindow(v2) && !(unsigned int)IsMessageParentWindow() )
    {
      if ( v3 != v4 && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 8) != 0 )
        return (struct tagWND *)v3;
      NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(*(struct tagWND **)(v3 + 88));
      if ( !NextLayeredWindowSubtree )
      {
        v2 = *(struct tagWND **)(v5 + 104);
        if ( v2 )
          continue;
      }
      return NextLayeredWindowSubtree;
    }
  }
  return NextLayeredWindowSubtree;
}
