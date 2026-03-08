/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C002B8C8
 * Callers:
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000A248 (GreGetDxSharedSurface.c)
 *     GreSetRedirection @ 0x1C0021DE4 (GreSetRedirection.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     IsWindowContentProtected @ 0x1C002E710 (IsWindowContentProtected.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     DesktopFromDesktopWindow @ 0x1C00BF0C8 (DesktopFromDesktopWindow.c)
 *     GreReferenceObject @ 0x1C00D7C78 (GreReferenceObject.c)
 *     GreSetBitmapContentOwner @ 0x1C00DFBB4 (GreSetBitmapContentOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00E98A4 (GetWindowMonitorAdapterLuid.c)
 *     GreGetSpriteAttributes @ 0x1C010CF4C (GreGetSpriteAttributes.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, __int64 *a4)
{
  __int64 v4; // r13
  __int64 v6; // rcx
  int v8; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // r12d
  HWND v13; // rdx
  _DWORD *v14; // rdx
  int v15; // r15d
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // zf
  __int64 CompatibleBitmapInternal; // rbx
  __int64 v20; // r15
  unsigned int v21; // r12d
  __int64 TopLevelWindow; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  struct _BLENDFUNCTION v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+4Ch] [rbp-14h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v31; // [rsp+B8h] [rbp+58h]

  v31 = a4;
  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  v28 = 0LL;
  v8 = 0;
  LODWORD(v25) = 0;
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v10 = *(_DWORD *)(a1 + 320);
  v11 = 0x4000000;
  if ( (v10 & 0x20000) == 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    *(_DWORD *)(a1 + 320) = v10 | 0x20000;
  }
  v11 = 201326592;
LABEL_5:
  v12 = 1;
  if ( (*(_BYTE *)(v6 + 26) & 8) == 0
    || (unsigned int)IsDesktopWindow(a1)
    || (v13 = *(HWND *)a1,
        v26 = 0,
        v30 = 0,
        (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v13, &v26, &v30, 1))
    && (v30 & 1) != 0 )
  {
    v11 |= 0x1000000u;
  }
  v14 = *(_DWORD **)(a1 + 40);
  v15 = 1;
  if ( v14[24] - v14[22] > 1 )
    v15 = v14[24] - v14[22];
  if ( v14[25] - v14[23] > 1 )
    v12 = v14[25] - v14[23];
  if ( !a2 && (unsigned int)IsDesktopWindow(a1) )
  {
    CompatibleBitmapInternal = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v30) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared() + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 40);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v24 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v24 != 96 )
              LOWORD(v30) = GreGetScaledLogPixels(v24);
          }
        }
      }
    }
    if ( (v11 & 0x1000000) == 0 )
    {
      v18 = (*(_DWORD *)(a1 + 320) & 0x20000) == 0;
      v26 = 0;
      if ( v18 || (int)GreGetDxSharedSurface(*(HWND *)a1, &v29, &v28, &v27, &v26, &v25) < 0 )
        GetWindowMonitorAdapterLuid(a1, &v28);
    }
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                 *(_QWORD *)(gpDispInfo + 56LL),
                                 v15,
                                 v12,
                                 v11,
                                 (__int64)&v28,
                                 (__int64)&v30);
    LODWORD(v25) = 1;
  }
  if ( !CompatibleBitmapInternal )
  {
    v8 = -2143354872;
    goto LABEL_37;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v21 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1) )
    goto LABEL_53;
  if ( !TopLevelWindow || a1 == TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_27:
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
    {
      v23 = DesktopFromDesktopWindow(a1);
      if ( v23 )
        v4 = ***(_QWORD ***)(v23 + 8);
    }
    else
    {
      v4 = ***(_QWORD ***)(*(_QWORD *)(v20 + 456) + 8LL);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v25 )
    {
      v8 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v8 < 0 )
        goto LABEL_35;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( !(unsigned int)GreSetRedirection(CompatibleBitmapInternal, 1LL)
        || !(unsigned int)GreSetBitmapContentOwner(CompatibleBitmapInternal, v4, v21) )
      {
        GreMarkDeletableBitmap(CompatibleBitmapInternal);
        v8 = -2143354871;
      }
      if ( v8 >= 0 )
        goto LABEL_35;
    }
    else
    {
      v8 = -2143354871;
    }
    GreDereferenceObject(CompatibleBitmapInternal, 0LL);
LABEL_35:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v8 < 0 )
    {
      GreDeleteObject(CompatibleBitmapInternal);
      CompatibleBitmapInternal = 0LL;
    }
    goto LABEL_37;
  }
  if ( *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
LABEL_53:
    v21 = *(_DWORD *)(*(_QWORD *)(v20 + 424) + 56LL);
    goto LABEL_27;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v8 = -1073741790;
LABEL_37:
  *v31 = CompatibleBitmapInternal;
  return (unsigned int)v8;
}
