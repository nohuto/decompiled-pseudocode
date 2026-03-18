/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C00D564C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00588D8 (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     DesktopFromDesktopWindow @ 0x1C006CAB4 (DesktopFromDesktopWindow.c)
 *     GreReferenceObject @ 0x1C0079EC8 (GreReferenceObject.c)
 *     GreSetBitmapContentOwner @ 0x1C00A8F1C (GreSetBitmapContentOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00B0DB4 (GetWindowMonitorAdapterLuid.c)
 *     GreSetRedirection @ 0x1C00C830C (GreSetRedirection.c)
 *     GreGetSpriteAttributes @ 0x1C00C8640 (GreGetSpriteAttributes.c)
 *     IsWindowContentProtected @ 0x1C00CF0C0 (IsWindowContentProtected.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r13
  __int64 v6; // rcx
  int v8; // edi
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // r8
  HWND v15; // rdx
  _DWORD *v16; // rdx
  unsigned int v17; // r15d
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  bool v21; // zf
  HSURF v22; // rbx
  __int64 v23; // r15
  int v24; // r12d
  __int64 TopLevelWindow; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  struct _BLENDFUNCTION v29; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-14h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+40h] BYREF
  HSURF *v34; // [rsp+B8h] [rbp+58h]

  v34 = a4;
  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  v31 = 0LL;
  v8 = 0;
  LODWORD(v28) = 0;
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
    || (LOBYTE(v13) = IsDesktopWindow(a1), v13)
    || (v15 = *(HWND *)a1,
        v29 = 0,
        v33 = 0,
        (unsigned int)GreGetSpriteAttributes(*(Gre::Base **)(gpDispInfo + 40LL), v15, v14, &v30, &v29, &v33, 1))
    && (v33 & 1) != 0 )
  {
    v11 |= 0x1000000u;
  }
  v16 = *(_DWORD **)(a1 + 40);
  v17 = 1;
  if ( v16[24] - v16[22] > 1 )
    v17 = v16[24] - v16[22];
  if ( v16[25] - v16[23] > 1 )
    v12 = v16[25] - v16[23];
  if ( !a2 && (LOBYTE(v18) = IsDesktopWindow(a1), v18) )
  {
    v22 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v33) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared() + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
        {
          v19 = *(_QWORD *)(a1 + 40);
          v20 = *(_DWORD *)(v19 + 288);
          if ( (v20 & 0xF) == 0 && (v20 & 0x40000000) != 0 )
          {
            v27 = *(unsigned __int16 *)(v19 + 284);
            if ( (_WORD)v27 != 96 )
              LOWORD(v33) = GreGetScaledLogPixels(v27);
          }
        }
      }
    }
    if ( (v11 & 0x1000000) == 0 )
    {
      v21 = (*(_DWORD *)(a1 + 320) & 0x20000) == 0;
      v29 = 0;
      if ( v21 || (int)GreGetDxSharedSurface(*(HWND *)a1, &v32, &v31, &v30, &v29, &v28) < 0 )
        GetWindowMonitorAdapterLuid(a1, (__int64)&v31);
    }
    v22 = (HSURF)GreCreateCompatibleBitmapInternal(
                   *(_QWORD *)(gpDispInfo + 56LL),
                   v17,
                   v12,
                   v11,
                   &v31,
                   (unsigned __int16 *)&v33);
    LODWORD(v28) = 1;
  }
  if ( !v22 )
  {
    v8 = -2143354872;
    goto LABEL_37;
  }
  v23 = *(_QWORD *)(a1 + 16);
  v24 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1) )
    goto LABEL_53;
  if ( !TopLevelWindow || a1 == TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_27:
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
    {
      v26 = DesktopFromDesktopWindow(a1);
      if ( v26 )
        v4 = ***(_QWORD ***)(v26 + 8);
    }
    else
    {
      v4 = ***(_QWORD ***)(*(_QWORD *)(v23 + 456) + 8LL);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v28 )
    {
      v8 = GreReferenceObject(v22);
      if ( v8 < 0 )
        goto LABEL_35;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(v22) )
    {
      if ( !(unsigned int)GreSetRedirection(v22, 1) || !(unsigned int)GreSetBitmapContentOwner(v22, v4, v24) )
      {
        GreMarkDeletableBitmap(v22);
        v8 = -2143354871;
      }
      if ( v8 >= 0 )
        goto LABEL_35;
    }
    else
    {
      v8 = -2143354871;
    }
    GreDereferenceObject(v22, 0);
LABEL_35:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v8 < 0 )
    {
      GreDeleteObject(v22);
      v22 = 0LL;
    }
    goto LABEL_37;
  }
  if ( *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
LABEL_53:
    v24 = *(_DWORD *)(*(_QWORD *)(v23 + 424) + 56LL);
    goto LABEL_27;
  }
  GreDeleteObject(v22);
  v22 = 0LL;
  v8 = -1073741790;
LABEL_37:
  *v34 = v22;
  return (unsigned int)v8;
}
