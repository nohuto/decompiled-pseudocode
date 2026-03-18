/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C0244DD4
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C01FB660 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 */

tagWND *__fastcall RealChildWindowFromPoint(tagWND *this, struct tagPOINT a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  tagWND *DesktopWindow; // rax
  __int64 v7; // rcx
  tagWND *v8; // rbx
  tagWND *v9; // rsi
  struct tagPOINT v11; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v12; // [rsp+48h] [rbp+28h] BYREF

  v12 = a2;
  if ( this )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v4 + 224) & 0x20) == 0 )
      {
        v5 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
        if ( (((unsigned __int16)(v5 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                v4,
                                                                                v3) >> 8)) & 0x1FF) != 0 )
          TransformPointBetweenCoordinateSpaces(&v12, &v12, this, 0LL);
      }
    }
  }
  DesktopWindow = (tagWND *)GetDesktopWindow((__int64)this);
  v7 = *((_QWORD *)this + 5);
  if ( this != DesktopWindow )
  {
    v12.x += *(_DWORD *)(v7 + 104);
    v12.y += *(_DWORD *)(v7 + 108);
  }
  if ( !PtInRect((_DWORD *)(v7 + 104), *(_QWORD *)&v12) || tagWND::PtOutsideClipRgnOrMaxClip(this, &v12) )
    return 0LL;
  v8 = (tagWND *)*((_QWORD *)this + 14);
  v9 = 0LL;
  v11 = v12;
  if ( !v8 )
    return this;
  do
  {
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v8) || !(unsigned int)GetWindowCloakState(v8)) )
    {
      TransformPointBetweenCoordinateSpaces(&v12, &v11, v8, this);
      if ( PtInRect((_DWORD *)(*((_QWORD *)v8 + 5) + 88LL), *(_QWORD *)&v12)
        && !tagWND::PtOutsideClipRgnOrMaxClip(v8, &v12) )
      {
        if ( *(_WORD *)(gpsi + 868LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL) + 2LL)
          || (*(_BYTE *)(*((_QWORD *)v8 + 5) + 28LL) & 0xF) != 7 )
        {
          return v8;
        }
        v9 = v8;
      }
    }
    v8 = (tagWND *)*((_QWORD *)v8 + 11);
  }
  while ( v8 );
  if ( !v9 )
    return this;
  return v9;
}
