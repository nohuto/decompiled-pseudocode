/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C01BE8C0
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01BDC84 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0224188 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzMoveShadow @ 0x1C022482C (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C02248CC (zzzUpdateShadowAlpha.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C0021D34 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C002E7A8 (UpdateSprite.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetRedirectionBitmap @ 0x1C0043F00 (GetRedirectionBitmap.c)
 *     OffsetChildren @ 0x1C004CB34 (OffsetChildren.c)
 *     GreClientRgnUpdated @ 0x1C005464C (GreClientRgnUpdated.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C0096CD0 (GetRedirectionFlags.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C01454BA (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BDB10 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01BEE24 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        HDC a2,
        const struct tagPOINT *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct tagRECT *a10)
{
  HBITMAP v10; // rdi
  struct tagSIZE *v11; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  BOOL v18; // esi
  char RedirectionFlags; // al
  unsigned int v20; // r12d
  _DWORD *v21; // rdx
  int v23; // r15d
  int v24; // eax
  int updated; // r14d
  __int64 v26; // r8
  int v27; // esi
  unsigned int v28; // r13d
  int v29; // ecx
  int v30; // [rsp+60h] [rbp-71h] BYREF
  int v31; // [rsp+64h] [rbp-6Dh] BYREF
  HBITMAP v32; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v33; // [rsp+70h] [rbp-61h]
  HDC v34; // [rsp+78h] [rbp-59h]
  struct tagRECT *v35; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v36; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v37; // [rsp+90h] [rbp-41h]
  struct tagPOINT *v38; // [rsp+98h] [rbp-39h]
  HDC v39; // [rsp+A0h] [rbp-31h]
  __int128 v40; // [rsp+A8h] [rbp-29h]
  __int128 v41; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v30 = 0;
  v11 = a4;
  v31 = 0;
  v34 = a5;
  v37 = a6;
  v36 = a8;
  v35 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v33 = a4;
  v38 = (struct tagPOINT *)a3;
  v39 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v32 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v40 = v15;
  v41 = v16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && (*((_DWORD *)a1 + 80) & 0x8000) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1);
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 26) & 8) != 0 && (*(_DWORD *)(v17 + 232) & 2) == 0 )
  {
    v18 = GetRedirectionBitmap((__int64)a1) != 0;
    RedirectionFlags = GetRedirectionFlags((__int64)a1);
    if ( !v18 || (RedirectionFlags & 8) != 0 )
    {
      v20 = a9;
      if ( (a9 & 8) != 0 )
      {
        if ( v11 )
        {
          v21 = (_DWORD *)*((_QWORD *)a1 + 5);
          if ( v11->cx != v21[24] - v21[22] || v11->cy != v21[25] - v21[23] )
          {
            UserSetLastError(1462);
            return 2151546881LL;
          }
        }
        v20 = a9 & 0xFFFFFFF7;
      }
      UpdateWindowRects(a1, a3, v11, &v30, &v31);
      v23 = v30;
      if ( v18 && v30 )
      {
        v24 = RecreateRedirectionBitmap((void **)a1, 0, 0, 0, 0, (HBRUSH *)&v32);
        v10 = v32;
        updated = v24;
        if ( v24 < 0 )
          goto LABEL_44;
        v11 = v33;
      }
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v27 = v31;
      if ( v23 || v31 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          DwmChildRectChange(a1);
          DirtyVisRgnTrackers((__int64)a1);
        }
        if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
        {
          InvalidateGDIWindows(a1);
          GreClientRgnUpdated((Gre::Base *)1);
        }
        GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
      }
      v28 = v20 | 0x20000000;
      if ( !v34 )
        v28 = v20;
      updated = UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v26, v39, v38, v11, v34, v37, a7, v36, v28, v35);
      if ( updated >= 0 && v27 )
        OffsetChildren(
          a1,
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v40,
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v40),
          0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( updated >= 0 )
      {
        if ( v10 )
          DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v10, 1);
        if ( v23 || v27 )
          GenerateMouseMove(0LL);
        if ( (v28 & 0x20) == 0 || v23 || v27 )
        {
          v29 = 3;
          if ( !gdwDeferWinEvent )
            v29 = 1;
          xxxWindowEvent(0x800Bu, a1, 0, 0, v29);
        }
        return (unsigned int)updated;
      }
LABEL_44:
      *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v40;
      *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v41;
      if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap((void **)a1, v10) )
        DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v10, 1);
      return (unsigned int)updated;
    }
  }
  return 3221225485LL;
}
