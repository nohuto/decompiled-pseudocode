/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C3EC
 * Callers:
 *     TrackLayeredZorder @ 0x1C002C250 (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002C508 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C488 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindow(struct tagWND *a1)
{
  struct tagWND *NextLayeredWindowSubtree; // r10
  struct tagWND *v2; // r9
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9

  NextLayeredWindowSubtree = 0LL;
  v2 = a1;
  if ( a1 )
  {
    while ( !(unsigned int)IsDesktopWindow(v2) )
    {
      v5 = *(_QWORD *)(v3 + 24);
      v6 = 0LL;
      if ( v5 )
        v6 = *(_QWORD *)(v5 + 104);
      if ( v3 == v6 )
        break;
      if ( v3 != v4 && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 8) != 0 )
        return (struct tagWND *)v3;
      NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(*(struct tagWND **)(v3 + 88));
      if ( !NextLayeredWindowSubtree )
      {
        v2 = *(struct tagWND **)(v7 + 104);
        if ( v2 )
          continue;
      }
      return NextLayeredWindowSubtree;
    }
  }
  return NextLayeredWindowSubtree;
}
