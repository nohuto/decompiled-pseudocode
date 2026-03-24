/*
 * XREFs of xxxSetLayeredWindow @ 0x1C0035D20
 * Callers:
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E6B48 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C00075B4 (GreGetSprite.c)
 *     CreateVisRgnTracker @ 0x1C0035F74 (CreateVisRgnTracker.c)
 *     CreateSprite @ 0x1C0038614 (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     SendDwmIconChange @ 0x1C0038960 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00471A0 (DwmAsyncTextChange.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C004C3B0 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00BA178 (GreUpdateSpriteClipRgn.c)
 *     TrackLayeredZorder @ 0x1C00BD408 (TrackLayeredZorder.c)
 *     UpdateWindowSpriteDPI @ 0x1C00BD5D8 (UpdateWindowSpriteDPI.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1C94 (zzzUpdateLayeredWindow.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0111B98 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxUpdateThreadsWindows @ 0x1C0212ABC (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // ebx
  struct tagWND *TopLevelWindow; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  __int64 Sprite; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 DCEx; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rcx
  _BYTE v31[8]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v32; // [rsp+68h] [rbp-18h] BYREF
  __int64 v33; // [rsp+78h] [rbp-8h]
  __int64 v34; // [rsp+C0h] [rbp+40h] BYREF
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  int v36; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, *((_QWORD *)a1 + 13))
     && (unsigned int)IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
  }
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v8) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v9 + 88, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1LL, a1, 2568LL, 1LL);
      CreateVisRgnTracker(a1);
      TrackLayeredZorder(a1);
      if ( (unsigned int)IsTopLevelWindow(a1) )
      {
        v13 = *((_QWORD *)a1 + 5);
        v14 = *(_QWORD *)(v13 + 168);
        if ( v14 )
        {
          if ( (*(_BYTE *)(v13 + 21) & 8) == 0 )
            GreUpdateSpriteClipRgn(v12, *(_QWORD *)a1, v14, 0LL);
        }
      }
      v15 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v15);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        SendDwmIconChange(a1);
        v18 = (void *)ReferenceDwmApiPort(v17, v16);
        DwmAsyncTextChange(v18);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v31);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
        v24 = DCEx;
        if ( DCEx )
        {
          v34 = 0LL;
          UserGetRedirectedWindowOrigin(DCEx, &v34);
          v25 = *((_QWORD *)a1 + 5);
          v35 = *(_DWORD *)(v25 + 88) - v34;
          v36 = *(_DWORD *)(v25 + 92) - HIDWORD(v34);
          updated = zzzUpdateLayeredWindow(a1, v24, (__int64)&v35, 0, 0LL, 12, 0LL);
          _ReleaseDC(v24);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v27 = *((_QWORD *)a1 + 13);
        v28 = RectRgnIndirect;
        v33 = 0LL;
        v32 = 0LL;
        if ( v27 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v32;
          *((_QWORD *)&v32 + 1) = v27;
          HMLockObject(v27);
          GreOffsetRgn(
            v28,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v27 + 40) + 104LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v27 + 40) + 108LL));
        }
        xxxRedrawWindow((struct tagWND *)v27);
        if ( v27 )
          ThreadUnlock1(v30);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v28);
        GreDeleteObject(v28);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, *(struct PDEVOBJ **)a1);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  v21 = *((_QWORD *)a1 + 5);
  *(_DWORD *)(v21 + 232) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v22 = (void *)ReferenceDwmApiPort(v21, v20);
  DwmAsyncChildStyleChange(v22);
  return 0LL;
}
