/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C016D33A
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C01F1CF0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00036E4 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 */

struct tagWND *__fastcall ChildWindowFromPointEx(struct tagWND *a1, struct tagPOINT a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct tagWND *DesktopWindow; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  const struct tagWND *v11; // rbx
  struct tagPOINT v13; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v14; // [rsp+48h] [rbp+28h] BYREF

  v14 = a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v6 + 224) & 0x20) == 0 )
      {
        v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                v6,
                                                                                v5) >> 8)) & 0x1FF) != 0 )
          TransformPointBetweenCoordinateSpaces(&v14, &v14, a1, 0LL);
      }
    }
  }
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  v9 = *((_QWORD *)a1 + 5);
  if ( a1 != DesktopWindow )
  {
    if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
      v14.x = *(_DWORD *)(v9 + 112) - v14.x;
    else
      v14.x += *(_DWORD *)(v9 + 104);
    v14.y += *(_DWORD *)(v9 + 108);
  }
  v13 = v14;
  if ( !PtInRect((_DWORD *)(v9 + 104), *(_QWORD *)&v14) )
    return 0LL;
  if ( tagWND::PtOutsideClipRgnOrMaxClip(a1, &v14) )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 26) & 8) != 0 && (*(_DWORD *)(v10 + 232) & 2) == 0 && !LayerHitTest(a1, v14) )
    return 0LL;
  v11 = (const struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !v11 )
    return a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v14, &v13, v11, a1);
    if ( ((a3 & 1) == 0
       || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0x10) != 0
       && (!(unsigned int)IsWindowDesktopComposed(v11) || !(unsigned int)GetWindowCloakState(v11)))
      && ((a3 & 2) == 0 || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 8) == 0)
      && ((a3 & 4) == 0 || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 24LL) & 0x20) == 0)
      && PtInRect((_DWORD *)(*((_QWORD *)v11 + 5) + 88LL), *(_QWORD *)&v14)
      && !tagWND::PtOutsideClipRgnOrMaxClip(v11, &v14)
      && ((*(_BYTE *)(*((_QWORD *)v11 + 5) + 26LL) & 8) == 0
       || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0
       || LayerHitTest(v11, v14)) )
    {
      break;
    }
    v11 = (const struct tagWND *)*((_QWORD *)v11 + 11);
    if ( !v11 )
      return a1;
  }
  return v11;
}
