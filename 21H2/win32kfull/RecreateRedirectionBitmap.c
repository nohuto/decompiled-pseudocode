/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C008F778
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C016CB60 (NtUserHwndQueryRedirectionInfo.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E2880 (UserRecreateRedirectionBitmap.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C001FCCC (ChangeRedirectionParentInDCEs.c)
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     HintSpriteShape @ 0x1C00210C4 (HintSpriteShape.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C008EBE0 (GreAdjustSpriteDirtyAccum.c)
 *     GetRedirectionFlags @ 0x1C0090390 (GetRedirectionFlags.c)
 *     GreNotifyDirtySprite @ 0x1C0090400 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009050C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, HSURF *a6)
{
  int v8; // eax
  int v9; // r12d
  __int64 v10; // rcx
  HSURF RedirectionBitmap; // rsi
  int v12; // eax
  HBRUSH v13; // rbx
  unsigned int v14; // r13d
  struct _RECTL *v15; // r9
  LONG x; // r15d
  bool v17; // zf
  int v18; // r12d
  __int64 v19; // rcx
  HWND v20; // rdx
  LONG v21; // eax
  int v22; // ebx
  struct _POINTL v25; // [rsp+48h] [rbp-81h] BYREF
  int v26; // [rsp+50h] [rbp-79h]
  unsigned int v27; // [rsp+54h] [rbp-75h]
  struct _POINTL v28; // [rsp+58h] [rbp-71h] BYREF
  tagBITMAP v29; // [rsp+60h] [rbp-69h] BYREF
  struct tagBITMAP v30; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v31[32]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-9h]
  struct _RECTL v33; // [rsp+C8h] [rbp-1h] BYREF

  v25.x = a2;
  v28 = 0LL;
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v26 = 0;
  v27 = 0;
  RedirectionBitmap = (HSURF)GetRedirectionBitmap(v10);
  SURFREF::SURFREF((SURFREF *)v31, RedirectionBitmap);
  if ( !v32 )
  {
    SURFREF::~SURFREF((SURFREF *)v31);
    goto LABEL_3;
  }
  v22 = *(_DWORD *)(v32 + 112);
  DEC_SHARE_REF_CNT(v32);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
  if ( (v22 & 0x800000) == 0 || !a4 || v9 )
  {
LABEL_3:
    v12 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (HSURF *)&v28);
    v13 = (HBRUSH)v28;
    v14 = v12;
    if ( v12 >= 0 )
    {
      if ( (unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v28, 0) )
        goto LABEL_7;
      DeleteOrSetRedirectionBitmap(a1, v13, 1LL);
      v14 = -1073741801;
    }
    SetRedirectionBitmap(a1, 0LL, 0);
    v27 = 1;
LABEL_7:
    if ( v13 && !v9 )
    {
      if ( RedirectionBitmap )
      {
        GreExtGetObjectW((HBRUSH)RedirectionBitmap, 32LL, (char *)&v30);
        v26 = 1;
      }
      GreExtGetObjectW(v13, 32LL, (char *)&v29);
    }
    if ( (GetRedirectionFlags(a1) & 1) != 0
      && (HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, v9 == 0 ? 2 : 0), v13) )
    {
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, (__int64)v13, v9 == 0 ? 2 : 0);
      x = v25.x;
      v17 = v9 == 0;
      v18 = a3;
      if ( v17 )
      {
        v19 = *((_QWORD *)a1 + 5);
        v20 = *(HWND *)a1;
        v28.x = *(_DWORD *)(v19 + 88);
        v21 = *(_DWORD *)(v19 + 92);
        v33.left = 0;
        v33.top = 0;
        v28.y = v21;
        v33.right = v29.bmWidth;
        v33.bottom = v29.bmHeight;
        v25.x = -v25.x;
        v25.y = -a3;
        GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v20, &v33, v15, &v25, &v28);
      }
    }
    else
    {
      v18 = a3;
      x = v25.x;
    }
    if ( v26 )
    {
      BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)RedirectionBitmap, (HBITMAP)v13, &v30, &v29, x, v18);
      GreNotifyDirtySprite(*(HWND *)a1);
    }
    ChangeRedirectionParentInDCEs(a1, v27);
    if ( a6 )
    {
      *a6 = RedirectionBitmap;
    }
    else if ( RedirectionBitmap )
    {
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 1LL);
    }
    return v14;
  }
  if ( a6 )
    *a6 = 0LL;
  return 0LL;
}
