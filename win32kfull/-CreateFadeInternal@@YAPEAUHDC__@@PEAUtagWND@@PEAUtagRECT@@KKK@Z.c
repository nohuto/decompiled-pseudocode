/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01BE79C (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0219098 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateSprite @ 0x1C0028A54 (GreCreateSprite.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002C60C (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     DeleteFadeSprite @ 0x1C01BDE40 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  struct tagRECT v10; // xmm6
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int32 v13; // r10d
  __int32 v14; // r8d
  LONG top; // r9d
  __int32 v16; // edx
  LONG left; // eax
  __int32 v18; // ecx
  struct tagMINIWINDOWINFO *v19; // r9
  Gre::Base *v20; // rcx
  HSPRITE Sprite; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // r14d
  unsigned int v28; // r15d
  __int64 v29; // rdx
  unsigned __int16 v31[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v32[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __m128i v33; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v34; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v35[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-78h]
  _BYTE v37[80]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v38[3]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v39; // [rsp+118h] [rbp+10h]

  if ( *(_QWORD *)&gfade[4] )
    return 0LL;
  if ( *(_QWORD *)&gfade[2] )
  {
    GreCleanDC();
    GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    *(_QWORD *)&gfade[2] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
    v9 = *(_QWORD *)&gfade[2];
    if ( !v9 )
      return 0LL;
    GreSetDCOwnerEx(v9, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    a2 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v31[0] = 96;
  if ( a1 )
  {
    gfade[12] |= 8u;
    *(_QWORD *)gfade = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared(v22) + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v23) + 57) + 8LL) + 64LL) & 1) != 0 )
        {
          v24 = *((_QWORD *)a1 + 5);
          v25 = *(_DWORD *)(v24 + 288);
          if ( (v25 & 0xF) == 0 && (v25 & 0x40000000) != 0 )
          {
            v26 = *(unsigned __int16 *)(v24 + 284);
            if ( (_WORD)v26 != 96 )
              v31[0] = GreGetScaledLogPixels(v26);
          }
        }
      }
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v32);
    xxxSetLayeredWindow((struct tagWND **)a1, 0, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v32);
  }
  else
  {
    v10 = *a2;
    v34 = 0LL;
    v33 = (__m128i)v10;
    if ( (a5 & 0xF) == 2 )
    {
      v34 = (_QWORD *)MonitorFromRect((__int64)a2, 2u, a5);
    }
    else
    {
      v35[0] = 0;
      v35[1] = 0;
      LogicalToPhysicalDPIPoint(v35, a2, a5, &v34);
      if ( *(_WORD *)(v34[5] + 60LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *((_QWORD *)PtiCurrentShared(v11) + 57)
          && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v12) + 57) + 8LL) + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v36 = 0LL;
          v31[0] = GreGetScaledLogPixels(*(unsigned __int16 *)(v34[5] + 60LL));
          ScaleDPIRect(&v33, &v33, v31[0], 0x60u, 0LL, 0LL);
          v13 = v33.m128i_i32[1];
          v14 = v33.m128i_i32[0];
          top = a2->top;
          v16 = v33.m128i_i32[1] - top;
          left = a2->left;
          v18 = v33.m128i_i32[0] - a2->left;
          v33.m128i_i32[2] += v33.m128i_i32[0];
          a2->right += v18;
          a2->bottom += v16;
          v33.m128i_i32[3] += v13;
          a2->left = v18 + left;
          a2->top = top + v16;
          v33.m128i_i32[0] = 2 * v14;
          v33.m128i_i32[1] = 2 * v13;
          v10 = (struct tagRECT)v33;
        }
        else
        {
          v10 = (struct tagRECT)v33;
        }
      }
    }
    memset_0(v37, 0, 0x48uLL);
    InitializeMonitorInfo((__int64)v37, a5, v34, 0LL);
    gfade[12] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset_0(v38, 0, 0x88uLL);
      v19 = (struct tagMINIWINDOWINFO *)v38;
      a4 &= ~0x100u;
      v38[0] = v10;
      v38[1] = v10;
      v39 = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v19 = 0LL;
    }
    Sprite = (HSPRITE)GreCreateSprite(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, a2, v19, 0x9900u, 1, 1, 0, 0, 0, v31);
    *(_QWORD *)gfade = Sprite;
    if ( *(_QWORD *)gfade )
      GreDwmNotifySpriteMonitorChange(v20, 0LL, Sprite);
  }
  if ( !*(_QWORD *)gfade )
    return 0LL;
  v27 = a2->right - a2->left;
  v28 = a2->bottom - a2->top;
  *(_QWORD *)&gfade[4] = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 56LL), v27, v28, 0, 0LL, v31);
  v29 = *(_QWORD *)&gfade[4];
  if ( !v29 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)&gfade[2], v29);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 2147483650LL, 0LL, 1LL);
  gfade[6] = a2->left;
  gfade[7] = a2->top;
  gfade[8] = v27;
  gfade[9] = v28;
  gfade[10] = a3;
  gfade[12] |= a4;
  gfade[13] = (gfade[12] & 0x40) != 0 ? 0xFF00FF : 0;
  return *(HDC *)&gfade[2];
}
