/*
 * XREFs of xxxSetLayeredWindow @ 0x1C0028C1C
 * Callers:
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C00130A0 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C002772C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     CreateVisRgnTracker @ 0x1C00287F0 (CreateVisRgnTracker.c)
 *     CreateSprite @ 0x1C002891C (CreateSprite.c)
 *     TrackLayeredZorder @ 0x1C002C250 (TrackLayeredZorder.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C002C598 (UpdateWindowSpriteMonitor.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0038F40 (UserGetRedirectedWindowOrigin.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00647C8 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SendDwmIconChange @ 0x1C00A1060 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00A5394 (DwmAsyncTextChange.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00DE2B0 (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 *     xxxUpdateWindows @ 0x1C0217D90 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND **a1, int a2, __int64 *a3)
{
  int v3; // esi
  struct tagWND *TopLevelWindow; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int updated; // esi
  tagWND *v12; // rcx
  HRGN ExplicitClipRgn; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rax
  void *v16; // rax
  __int64 Sprite; // rax
  void *v18; // rax
  __int64 DCEx; // rax
  __int64 v20; // rbx
  struct tagWND *v21; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v23; // rbx
  HRGN v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF
  int v31; // [rsp+C8h] [rbp+48h] BYREF
  int v32; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == (struct tagWND *)a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, a1[13])
     && IsChildWindowDpiBoundary((const struct tagWND *)a1)) )
  {
    v3 = 1;
  }
  if ( (!(unsigned int)IsDesktopWindow(a1) || !(unsigned int)IsWindowDesktopComposed(v8)) && !v3 )
    return 2151546883LL;
  if ( (*((_DWORD *)a1[5] + 58) & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(HDEV *)(gpDispInfo + 40LL), (__int64)a1, (struct tagRECT *)(v9 + 88), a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1LL, a1, 2568LL, 1LL);
        CreateVisRgnTracker((struct tagWND *)a1, 1);
        TrackLayeredZorder((struct tagWND *)a1);
        if ( (unsigned int)IsTopLevelWindow(a1) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(v12);
          if ( ExplicitClipRgn )
            GreUpdateSpriteClipRgn(v14, (HWND)*a1, ExplicitClipRgn, 0);
        }
        v15 = ValidateHmonitorNoRip(*((_QWORD *)a1[5] + 32));
        UpdateWindowSpriteMonitor(a1, v15);
        if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        {
          SendDwmIconChange((struct tagWND *)a1);
          v16 = (void *)ReferenceDwmApiPort();
          DwmAsyncTextChange(v16);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v30);
        zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v30);
        if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(a1[13], 0LL, 3LL);
          v20 = DCEx;
          if ( DCEx )
          {
            v30 = 0LL;
            UserGetRedirectedWindowOrigin(DCEx, &v30);
            v21 = a1[5];
            v31 = *((_DWORD *)v21 + 22) - v30;
            v32 = *((_DWORD *)v21 + 23) - HIDWORD(v30);
            updated = zzzUpdateLayeredWindow((struct tagWND *)a1, v20, (__int64)&v31, 0, 0LL, 12, 0LL);
            _ReleaseDC(v20);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1[5] + 88);
          v23 = a1[13];
          v24 = (HRGN)RectRgnIndirect;
          v29 = 0LL;
          v28 = 0LL;
          if ( v23 )
          {
            ThreadLock(v23, &v28);
            GreOffsetRgn(
              v24,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v23 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v23 + 5) + 108LL));
          }
          xxxRedrawWindow(v23);
          if ( v23 )
            ThreadUnlock1(v26, v25, v27);
          xxxUpdateWindows((struct tagWND *)a1, v24);
          GreDeleteObject(v24);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, (HWND)*a1);
  *((_DWORD *)a1[5] + 58) &= ~2u;
  *((_DWORD *)a1 + 80) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v18 = (void *)ReferenceDwmApiPort();
  DwmAsyncChildStyleChange(v18);
  return 0LL;
}
