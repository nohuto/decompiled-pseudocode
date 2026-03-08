/*
 * XREFs of _DrawIconEx @ 0x1C003B618
 * Callers:
 *     NtUserDrawIconEx @ 0x1C003B810 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CA94C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E6C4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0007754 (GreSetBrushOrg.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C003BA40 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00EEAB0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     BltIcon @ 0x1C011375C (BltIcon.c)
 *     GreGetBrushOrg @ 0x1C02AA4C8 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  char v9; // r12
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int DpiDependentMetric; // r15d
  int v18; // eax
  int v19; // r14d
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r12d
  int v24; // ecx
  unsigned int DpiForSystem; // eax
  unsigned int v27; // eax
  HDC v28; // r12
  __int64 CompatibleBitmapInternal; // rax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // [rsp+28h] [rbp-81h]
  int v34; // [rsp+68h] [rbp-41h]
  __int64 v35; // [rsp+78h] [rbp-31h]
  __int64 v36; // [rsp+80h] [rbp-29h]
  __int64 CompatibleDC; // [rsp+110h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = *(_DWORD *)(a4 + 80);
  v12 = a9 & 0x10;
  v34 = 0;
  a9 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  LODWORD(CompatibleDC) = 0;
  v14 = 0;
  if ( (v11 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7)) != 0LL )
  {
    if ( *((_QWORD *)AnimatedCursorFrame + 16) )
    {
      if ( (v9 & 3) == 3 )
        v14 = 1;
      v34 = v14;
    }
    GetVirtualizedCursorSize(AnimatedCursorFrame, &a9, (int *)&CompatibleDC);
    DpiDependentMetric = a5;
    v18 = v9 & 8;
    if ( !a5 )
    {
      if ( (v9 & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v16, v15);
        DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
        v18 = v9 & 8;
      }
      else
      {
        DpiDependentMetric = a9;
      }
    }
    v19 = a6;
    if ( !a6 )
    {
      if ( v18 )
      {
        v27 = GetDpiForSystem(2LL, v15);
        v20 = GetDpiDependentMetric(6LL, v27);
      }
      else
      {
        v20 = (int)CompatibleDC / 2;
      }
      v19 = v20;
    }
    CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
    v21 = CompatibleDC;
    if ( CompatibleDC )
    {
      if ( a8 )
      {
        v28 = (HDC)GreCreateCompatibleDC(a1);
        if ( v28 )
        {
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal((_DWORD)a1, DpiDependentMetric, v19, 0, 0LL, 0LL);
          v36 = CompatibleBitmapInternal;
          if ( CompatibleBitmapInternal )
          {
            v35 = GreSelectBitmap(v28, CompatibleBitmapInternal);
            GreGetBrushOrg(a1);
            GreSetBrushOrg(v28, 0, 0, 0LL);
            GrePolyPatBlt(v28, v33);
            if ( v34 )
            {
              v30 = 3;
              v31 = v12 != 0 ? -2134114272 : 13369376;
            }
            else
            {
              BltIcon(v28, v19, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v12 != 0 ? -2138570554 : 8913094);
              v30 = 2;
              v31 = v12 != 0 ? -2140798906 : 6684742;
            }
            BltIcon(v28, v19, CompatibleDC, (__int64)AnimatedCursorFrame, v30, v31);
            NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v19, v28, 0, 0, 13369376, -1, 0);
            GreSelectBitmap(v28, v35);
            GreDeleteObject(v36);
            v10 = 1;
          }
          GreDeleteDC(v28);
        }
      }
      else
      {
        if ( v14 )
        {
          BltIcon(a1, v19, CompatibleDC, (__int64)AnimatedCursorFrame, 3, v12 != 0 ? -2134114272 : 13369376);
        }
        else
        {
          v22 = v9 & 1;
          v23 = v9 & 2;
          a9 = v22;
          if ( v22 )
          {
            if ( v23 )
              v24 = v12 != 0 ? -2138570554 : 8913094;
            else
              v24 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon(a1, v19, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v24);
            v21 = CompatibleDC;
            v22 = a9;
          }
          if ( v23 )
          {
            if ( v22 )
              v32 = v12 != 0 ? -2140798906 : 6684742;
            else
              v32 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon(a1, v19, v21, (__int64)AnimatedCursorFrame, 2, v32);
          }
        }
        v10 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return v10;
}
