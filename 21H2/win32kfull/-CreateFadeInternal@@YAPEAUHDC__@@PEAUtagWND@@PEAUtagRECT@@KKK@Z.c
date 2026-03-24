/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7108
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00DB220 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E88C8 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236740 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C00387EC (GreCreateSprite.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     ScaleDPIRect @ 0x1C0042960 (ScaleDPIRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AAFE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00BD998 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C00BE530 (InitializeDPIINFO.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     DeleteFadeSprite @ 0x1C01E7D60 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  struct tagRECT v10; // xmm6
  __int32 v11; // r10d
  __int32 v12; // r8d
  LONG top; // r9d
  __int32 v14; // edx
  LONG left; // eax
  __int32 v16; // ecx
  struct tagMINIWINDOWINFO *v17; // r9
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v30[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-50h]
  _OWORD v32[9]; // [rsp+C0h] [rbp-40h] BYREF

  if ( gfade[2] )
    return 0LL;
  if ( gfade[1] )
  {
    GreCleanDC();
    GreSetLayout(gfade[1], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    gfade[1] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
    v9 = gfade[1];
    if ( !v9 )
      return 0LL;
    GreSetDCOwnerEx(v9, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    a2 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  LOWORD(v25) = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v18 = *((_QWORD *)a1 + 5);
          v19 = *(_DWORD *)(v18 + 288);
          if ( (v19 & 0xF) == 0 && (v19 & 0x40000000) != 0 )
          {
            v20 = *(unsigned __int16 *)(v18 + 284);
            if ( (_WORD)v20 != 96 )
              LOWORD(v25) = GreGetScaledLogPixels(v20);
          }
        }
      }
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
    xxxSetLayeredWindow(a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v28);
  }
  else
  {
    v10 = *a2;
    v27 = 0LL;
    v26 = (__m128i)v10;
    if ( (a5 & 0xF) == 2 )
    {
      v27 = MonitorFromRect(a2, 2u, a5);
    }
    else
    {
      v29[0] = 0;
      v29[1] = 0;
      LogicalToPhysicalDPIPoint(v29, a2, a5, &v27);
      if ( *(_WORD *)(*(_QWORD *)(v27 + 40) + 64LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v28 = 0LL;
          LOWORD(v25) = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v27 + 40) + 64LL));
          ScaleDPIRect(&v26, &v26, v25, 0x60u, 0LL, 0LL);
          v11 = v26.m128i_i32[1];
          v12 = v26.m128i_i32[0];
          top = a2->top;
          v14 = v26.m128i_i32[1] - top;
          left = a2->left;
          v16 = v26.m128i_i32[0] - a2->left;
          v26.m128i_i32[2] += v26.m128i_i32[0];
          a2->right += v16;
          a2->bottom += v14;
          v26.m128i_i32[3] += v11;
          a2->left = v16 + left;
          a2->top = top + v14;
          v26.m128i_i32[0] = 2 * v12;
          v26.m128i_i32[1] = 2 * v11;
          v10 = (struct tagRECT)v26;
        }
        else
        {
          v10 = (struct tagRECT)v26;
        }
      }
    }
    v31 = 0LL;
    memset(v30, 0, sizeof(v30));
    InitializeDPIINFO((__int64)v30, a5, v27, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v32, 0, 0x88uLL);
      v17 = (struct tagMINIWINDOWINFO *)v32;
      a4 &= ~0x100u;
      v32[0] = v10;
      v32[1] = v10;
      *(_QWORD *)&v32[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v17 = 0LL;
    }
    gfade[0] = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 a2,
                 v17,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v25);
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v21 = a2->right - a2->left;
  v22 = a2->bottom - a2->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v21, v22, 0, 0LL, (unsigned __int16 *)&v25);
  v23 = gfade[2];
  if ( !v23 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v23);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 1LL);
  LODWORD(gfade[3]) = a2->left;
  HIDWORD(gfade[3]) = a2->top;
  LODWORD(gfade[4]) = v21;
  HIDWORD(gfade[4]) = v22;
  LODWORD(gfade[5]) = a3;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}
