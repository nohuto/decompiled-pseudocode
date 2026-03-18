/*
 * XREFs of xxxSetLayeredWindow @ 0x1C0082DD4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C0003730 (GreGetSprite.c)
 *     TrackLayeredZorder @ 0x1C001F3C8 (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020420 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     CreateVisRgnTracker @ 0x1C008300C (CreateVisRgnTracker.c)
 *     CreateSprite @ 0x1C008328C (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0084B9C (GreUpdateSpriteClipRgn.c)
 *     DwmAsyncTextChange @ 0x1C008507C (DwmAsyncTextChange.c)
 *     SendDwmIconChange @ 0x1C0085110 (SendDwmIconChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00FECFC (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     xxxUpdateWindows @ 0x1C023D2E8 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // esi
  struct tagWND *TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int updated; // esi
  HRGN ExplicitClipRgn; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  void *v16; // rax
  __int64 Sprite; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // ebx
  void *v21; // rax
  __int64 DCEx; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int128 v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  __int64 v33; // [rsp+C0h] [rbp+40h] BYREF
  int v34; // [rsp+C8h] [rbp+48h] BYREF
  int v35; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled(a1, *((struct tagWND **)a1 + 13)) && IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
  }
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  if ( (!v8 || !(unsigned int)IsWindowDesktopComposed(v9)) && !v3 )
    return 2151546883LL;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v10 + 88, a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1, a1, 0xA08u, 1);
        CreateVisRgnTracker(a1);
        TrackLayeredZorder(a1);
        if ( IsTopLevelWindow((__int64)a1) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(a1);
          if ( ExplicitClipRgn )
            GreUpdateSpriteClipRgn(v14, *(_QWORD *)a1, ExplicitClipRgn, 0LL);
        }
        v15 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
        UpdateWindowSpriteMonitor((__int64)a1, v15);
        if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
        {
          SendDwmIconChange((ULONG_PTR)a1);
          v16 = (void *)ReferenceDwmApiPort();
          DwmAsyncTextChange(v16);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v33);
        zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
          v23 = DCEx;
          if ( DCEx )
          {
            v33 = 0LL;
            UserGetRedirectedWindowOrigin(DCEx, (__int64)&v33);
            v24 = *((_QWORD *)a1 + 5);
            v34 = *(_DWORD *)(v24 + 88) - v33;
            v35 = *(_DWORD *)(v24 + 92) - HIDWORD(v33);
            updated = zzzUpdateLayeredWindow(a1, v23, (__int64)&v34, 0, 0LL, 12, 0LL);
            _ReleaseDC(v23);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
          v26 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v27 = RectRgnIndirect;
          v32 = 0LL;
          v31 = 0LL;
          if ( v26 )
          {
            ThreadLock((__int64)v26, (__int64 *)&v31);
            GreOffsetRgn(
              v27,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v26 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v26 + 5) + 108LL));
          }
          xxxRedrawWindow(v26, 0LL, v27, 1157);
          if ( v26 )
            ThreadUnlock1(v29, v28, v30);
          xxxUpdateWindows(a1, v27);
          GreDeleteObject(v27);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(struct PDEVOBJ **)a1);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~2u;
  *((_DWORD *)a1 + 80) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v18 = *((_QWORD *)a1 + 5);
  v19 = *(_QWORD *)a1;
  v20 = *(_DWORD *)(v18 + 232);
  v21 = (void *)ReferenceDwmApiPort();
  DwmAsyncChildStyleChange(v21, v19, -268435456, v20);
  return 0LL;
}
