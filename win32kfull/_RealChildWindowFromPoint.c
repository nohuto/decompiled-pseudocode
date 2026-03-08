/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C023336C
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C01D9D80 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C00DEEB0 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

tagWND *__fastcall RealChildWindowFromPoint(tagWND *this, struct tagPOINT a2)
{
  tagWND *v2; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rcx
  tagWND *v5; // rbx
  tagWND *v6; // rsi
  struct tagPOINT v8; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v9; // [rsp+48h] [rbp+28h] BYREF

  v9 = a2;
  v2 = this;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(this);
  if ( (unsigned __int8)ShouldVirtualizeWindowRect(v2, CurrentThreadDpiAwarenessContext) )
    TransformPointBetweenCoordinateSpaces(&v9, &v9, v2, 0LL);
  if ( v2 != (tagWND *)GetDesktopWindow((__int64)v2) )
  {
    v4 = *((_QWORD *)v2 + 5);
    v9.x += *(_DWORD *)(v4 + 104);
    v9.y += *(_DWORD *)(v4 + 108);
  }
  if ( !PtInRect((_DWORD *)(*((_QWORD *)v2 + 5) + 104LL), *(_QWORD *)&v9) || tagWND::PtOutsideClipRgnOrMaxClip(v2, &v9) )
    return 0LL;
  v5 = (tagWND *)*((_QWORD *)v2 + 14);
  v6 = 0LL;
  v8 = v9;
  if ( v5 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0
        && (!(unsigned int)IsWindowDesktopComposed(v5) || !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v5)) )
      {
        TransformPointBetweenCoordinateSpaces(&v9, &v8, v5, v2);
        if ( PtInRect((_DWORD *)(*((_QWORD *)v5 + 5) + 88LL), *(_QWORD *)&v9)
          && !tagWND::PtOutsideClipRgnOrMaxClip(v5, &v9) )
        {
          if ( *(_WORD *)(gpsi + 868LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)v5 + 5) + 28LL) & 0xF) != 7 )
          {
            return v5;
          }
          v6 = v5;
        }
      }
      v5 = (tagWND *)*((_QWORD *)v5 + 11);
    }
    while ( v5 );
    if ( v6 )
      return v6;
  }
  return v2;
}
