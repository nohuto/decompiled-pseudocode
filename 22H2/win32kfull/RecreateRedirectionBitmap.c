/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00F1598
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00701D0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1018 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1C94 (zzzUpdateLayeredWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7C30 (UserRecreateRedirectionBitmap.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCC40 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C004C63C (ChangeRedirectionParentInDCEs.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     HintSpriteShape @ 0x1C00BD538 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C00BEBC0 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00BEC48 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BEDE8 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF608 (DeleteOrSetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C00F20E0 (GetRedirectionFlags.c)
 *     GreNotifyDirtySprite @ 0x1C00F2114 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00F2220 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00F2658 (GreAdjustSpriteDirtyAccum.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(void **a1, LONG a2, int a3, int a4, int a5, HSURF *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rcx
  HSURF RedirectionBitmap; // rsi
  __int64 v12; // rdx
  int v13; // eax
  HSURF v14; // rbx
  int v15; // r12d
  LONG x; // r15d
  bool v17; // zf
  int v18; // r13d
  _DWORD *v19; // rcx
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
    SURFREF::~SURFREF((SURFREF *)v31, v12);
    goto LABEL_3;
  }
  v22 = *(_DWORD *)(v32 + 112);
  DEC_SHARE_REF_CNT(v32, v12);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
  if ( (v22 & 0x800000) == 0 || !a4 || v9 )
  {
LABEL_3:
    v13 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (HSURF *)&v28);
    v14 = (HSURF)v28;
    v15 = v13;
    if ( v13 < 0 )
      goto LABEL_7;
    if ( !(unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v28, 0) )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, v14, 1);
      v15 = -1073741801;
    }
    if ( v15 < 0 )
    {
LABEL_7:
      SetRedirectionBitmap(a1, 0LL, 0);
      v27 = 1;
    }
    if ( v14 && !v9 )
    {
      if ( RedirectionBitmap )
      {
        GreExtGetObjectW(RedirectionBitmap, 32LL, (char *)&v30);
        v26 = 1;
      }
      GreExtGetObjectW(v14, 32LL, (char *)&v29);
    }
    if ( (GetRedirectionFlags(a1) & 1) != 0
      && (HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, 0LL, v9 == 0 ? 2 : 0), v14) )
    {
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, (HBITMAP)v14, v9 == 0 ? 2 : 0);
      x = v25.x;
      v17 = v9 == 0;
      v18 = a3;
      if ( v17 )
      {
        v19 = a1[5];
        v20 = (HWND)*a1;
        v28.x = v19[22];
        v21 = v19[23];
        v33.left = 0;
        v33.top = 0;
        v28.y = v21;
        v33.right = v29.bmWidth;
        v33.bottom = v29.bmHeight;
        v25.x = -v25.x;
        v25.y = -a3;
        GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v20, &v33, &v25, &v28);
      }
    }
    else
    {
      v18 = a3;
      x = v25.x;
    }
    if ( v26 )
    {
      BltOldRedirectionBitsToNewBitmap(
        (struct tagWND *)a1,
        (HBITMAP)RedirectionBitmap,
        (HBITMAP)v14,
        &v30,
        &v29,
        x,
        v18);
      GreNotifyDirtySprite((HWND)*a1);
    }
    ChangeRedirectionParentInDCEs((struct tagWND *)a1, v27);
    if ( a6 )
    {
      *a6 = RedirectionBitmap;
    }
    else if ( RedirectionBitmap )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 1);
    }
    return (unsigned int)v15;
  }
  if ( a6 )
    *a6 = 0LL;
  return 0LL;
}
