/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C00F1FE4
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1BD0 (NtUserUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013E1FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C013E34C (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7B44 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C023E2B0 (zzzMoveShadow.c)
 * Callees:
 *     OffsetChildren @ 0x1C004CA1C (OffsetChildren.c)
 *     DwmChildRectChange @ 0x1C004E18C (DwmChildRectChange.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00731F0 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00750B0 (GreClientRgnUpdated.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     UpdateSprite @ 0x1C00BEA24 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C00BEF20 (GetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00EF7E8 (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF958 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C00F22C4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C00F2430 (GetRedirectionFlags.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79BC (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E8A10 (InvalidateGDIWindows.c)
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
  HSURF v10; // rdi
  struct tagSIZE *v11; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rcx
  BOOL v19; // esi
  char RedirectionFlags; // al
  __int64 v21; // r8
  unsigned int v22; // r12d
  int v23; // r15d
  __int64 v24; // r8
  int v25; // esi
  unsigned int v26; // r13d
  int updated; // r14d
  unsigned int v28; // ecx
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // rdx
  int v33; // eax
  int v34; // [rsp+20h] [rbp-B1h]
  int v35; // [rsp+60h] [rbp-71h] BYREF
  int v36; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v37; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v38; // [rsp+70h] [rbp-61h]
  HDC v39; // [rsp+78h] [rbp-59h]
  struct tagRECT *v40; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v41; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v42; // [rsp+90h] [rbp-41h]
  int v43[2]; // [rsp+98h] [rbp-39h]
  HDC v44; // [rsp+A0h] [rbp-31h]
  __int128 v45; // [rsp+A8h] [rbp-29h]
  __int128 v46; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v35 = 0;
  v11 = a4;
  v36 = 0;
  v39 = a5;
  v42 = a6;
  v41 = a8;
  v40 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v38 = a4;
  *(_QWORD *)v43 = a3;
  v44 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v37 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v45 = v15;
  v46 = v16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v17 + 232) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 27) & 0x20) != 0 )
      {
        UnsetRedirectedWindow(a1, 1);
        v17 = *((_QWORD *)a1 + 5);
      }
      *(_DWORD *)(v17 + 232) &= ~0x40u;
    }
  }
  v18 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v18 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v18 + 232) & 0x20) != 0 )
    return 3221225485LL;
  v19 = GetRedirectionBitmap((__int64)a1) != 0;
  RedirectionFlags = GetRedirectionFlags(a1);
  if ( v19 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v22 = a9;
  if ( (a9 & 8) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, v11, &v35, &v36);
    v23 = v35;
    if ( v19 && v35 )
    {
      v33 = RecreateRedirectionBitmap((void **)a1, 0, 0, 0, 0, (HSURF *)&v37);
      v10 = (HSURF)v37;
      updated = v33;
      if ( v33 < 0 )
        goto LABEL_47;
      v11 = v38;
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v25 = v36;
    if ( v23 || v36 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
        DwmChildRectChange((unsigned __int64)a1, v30, v31);
      if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
      {
        InvalidateGDIWindows(a1, v30, v31);
        GreClientRgnUpdated(1);
      }
      GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    }
    v26 = v22 | 0x20000000;
    if ( !v39 )
      v26 = v22;
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 40LL),
                a1,
                v24,
                v44,
                *(struct tagPOINT **)v43,
                v11,
                v39,
                v42,
                a7,
                v41,
                v26,
                v40);
    if ( updated >= 0 && v25 )
      OffsetChildren(
        a1,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v45,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v45),
        0LL,
        v34);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( updated >= 0 )
    {
      if ( v10 )
        DeleteOrSetRedirectionBitmap((__int64)a1, v10, 1);
      if ( v23 || v25 )
        GenerateMouseMove(0LL);
      if ( (v26 & 0x20) == 0 || v23 || v25 )
      {
        v28 = 3;
        if ( !gdwDeferWinEvent )
          v28 = 1;
        xxxWindowEvent(0x800Bu, a1, 0, 0, v28);
      }
      return (unsigned int)updated;
    }
LABEL_47:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v45;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v46;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, (HBITMAP)v10) )
      DeleteOrSetRedirectionBitmap((__int64)a1, v10, 1);
    return (unsigned int)updated;
  }
  if ( !v11 || (v32 = (_DWORD *)*((_QWORD *)a1 + 5), v11->cx == v32[24] - v32[22]) && v11->cy == v32[25] - v32[23] )
  {
    v22 = a9 & 0xFFFFFFF7;
    goto LABEL_7;
  }
  UserSetLastError(1462LL, (__int64)v32, v21);
  return 2151546881LL;
}
