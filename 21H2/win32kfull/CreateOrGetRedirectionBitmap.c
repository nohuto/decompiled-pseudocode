/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C00BF148
 * Callers:
 *     SetRedirectedWindow @ 0x1C00BD1BC (SetRedirectedWindow.c)
 *     zzzDwmStartRedirection @ 0x1C00E977C (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 * Callees:
 *     DesktopFromDesktopWindow @ 0x1C000E98C (DesktopFromDesktopWindow.c)
 *     IsWindowContentProtected @ 0x1C00388B4 (IsWindowContentProtected.c)
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     IsDesktopWindow @ 0x1C004C5F0 (IsDesktopWindow.c)
 *     GreReferenceObject @ 0x1C00659E0 (GreReferenceObject.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AAFE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetSpriteAttributes @ 0x1C00EDB94 (GreGetSpriteAttributes.c)
 *     GreSetRedirection @ 0x1C00EFA08 (GreSetRedirection.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C01182CC (GreSetRedirectionBitmapOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C0118E78 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C0118EDC (GreGetDxSharedSurface.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r10
  int v5; // esi
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // r13d
  int v12; // eax
  HWND v13; // rdx
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  HSURF v19; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v21; // rcx
  unsigned int v22; // [rsp+40h] [rbp-30h] BYREF
  struct _BLENDFUNCTION v23; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v28; // [rsp+C8h] [rbp+58h]

  v28 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v27) = 0;
  v25 = 0LL;
  if ( (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v9 = *(_DWORD *)(v4 + 232);
  v10 = 0x4000000;
  if ( (v9 & 0x80000) != 0 )
    goto LABEL_47;
  if ( a3 )
  {
    *(_DWORD *)(v4 + 232) = v9 | 0x80000;
    v4 = *(_QWORD *)(a1 + 40);
LABEL_47:
    v10 = 201326592;
  }
  v11 = 1;
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (LOBYTE(v12) = IsDesktopWindow(a1), v12) )
  {
    v10 |= 0x1000000u;
  }
  else
  {
    v13 = *(HWND *)a1;
    v23 = 0;
    v22 = 0;
    if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v13, &v23, &v22, 1) && (v22 & 1) != 0 )
      v10 |= 0x1000000u;
    v4 = *(_QWORD *)(a1 + 40);
  }
  v14 = 1;
  if ( *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 88) > 1 )
    v14 = *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 88);
  if ( *(_DWORD *)(v4 + 100) - *(_DWORD *)(v4 + 92) > 1 )
    v11 = *(_DWORD *)(v4 + 100) - *(_DWORD *)(v4 + 92);
  if ( !a2 && (LOBYTE(v15) = IsDesktopWindow(a1), v15) )
  {
    v19 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v27) = 96;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 40);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v21 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v21 != 96 )
              LOWORD(v27) = GreGetScaledLogPixels(v21);
          }
        }
      }
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      LODWORD(v24) = 0;
      if ( (*(_DWORD *)(v18 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)&v24, (__int64)&v26) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v25);
      }
    }
    v19 = (HSURF)GreCreateCompatibleBitmapInternal(
                   *(HDC *)(gpDispInfo + 56LL),
                   v14,
                   v11,
                   v10,
                   &v25,
                   (unsigned __int16 *)&v27);
    LODWORD(v27) = 1;
  }
  if ( !v19 )
  {
    v5 = -2143354872;
    goto LABEL_40;
  }
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1)
    || !TopLevelWindow
    || a1 == TopLevelWindow
    || !(unsigned int)IsWindowContentProtected(TopLevelWindow)
    || *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
      DesktopFromDesktopWindow(a1);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v27 )
    {
      v5 = GreReferenceObject(v19);
      if ( v5 < 0 )
        goto LABEL_38;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(v19) )
    {
      if ( (unsigned int)GreSetRedirection(v19) && (unsigned int)GreSetRedirectionBitmapOwner(v19) )
      {
LABEL_36:
        if ( v5 < 0 )
          GreDereferenceObject(v19, 0);
LABEL_38:
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        if ( v5 < 0 )
        {
          GreDeleteObject(v19);
          v19 = 0LL;
        }
        goto LABEL_40;
      }
      GreMarkDeletableBitmap(v19);
    }
    v5 = -2143354871;
    goto LABEL_36;
  }
  GreDeleteObject(v19);
  v19 = 0LL;
  v5 = -1073741790;
LABEL_40:
  *v28 = v19;
  return (unsigned int)v5;
}
