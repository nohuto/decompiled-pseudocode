/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C01556EA
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C0154220 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022F6D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C001278C (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C00413C0 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ChildWindowFromPointEx(struct tagWND *a1, struct tagPOINT a2, char a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagPOINT v11; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v12; // [rsp+48h] [rbp+28h] BYREF

  v12 = a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
    TransformPointBetweenCoordinateSpaces(&v12, &v12, a1, 0LL);
  if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 26) & 0x40) != 0 )
      v12.x = *(_DWORD *)(v6 + 112) - v12.x;
    else
      v12.x += *(_DWORD *)(v6 + 104);
    v12.y += *(_DWORD *)(v6 + 108);
  }
  v7 = (_DWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  v11 = v12;
  if ( !PtInRect(v7, *(_QWORD *)&v12) )
    return 0LL;
  if ( tagWND::PtOutsideClipRgnOrMaxClip(a1, &v12) )
    return 0LL;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 && (*(_DWORD *)(v8 + 232) & 2) == 0 && !LayerHitTest(a1, v12) )
    return 0LL;
  v9 = *((_QWORD *)a1 + 14);
  if ( !v9 )
    return a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v12, &v11, v9, a1);
    if ( ((a3 & 1) == 0
       || (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x10) != 0
       && (!(unsigned int)IsWindowDesktopComposed(v9) || !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v9)))
      && ((a3 & 2) == 0 || (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 8) == 0)
      && ((a3 & 4) == 0 || (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 24LL) & 0x20) == 0)
      && PtInRect((_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL), *(_QWORD *)&v12)
      && !tagWND::PtOutsideClipRgnOrMaxClip((tagWND *)v9, &v12)
      && ((*(_BYTE *)(*(_QWORD *)(v9 + 40) + 26LL) & 8) == 0
       || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0
       || LayerHitTest((struct tagWND *)v9, v12)) )
    {
      break;
    }
    v9 = *(_QWORD *)(v9 + 88);
    if ( !v9 )
      return a1;
  }
  return (struct tagWND *)v9;
}
