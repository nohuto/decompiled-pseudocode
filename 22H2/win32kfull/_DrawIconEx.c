/*
 * XREFs of _DrawIconEx @ 0x1C0043EF4
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0043DF0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F2E90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246EAC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     BltIcon @ 0x1C00442EC (BltIcon.c)
 *     GreSetBrushOrg @ 0x1C004558C (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C00456F4 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0066F34 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0081300 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetBrushOrg @ 0x1C015E7E0 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(HDC a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, __int64 a8, int a9)
{
  char v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int DpiDependentMetric; // r12d
  int v18; // eax
  int v19; // r15d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // r14d
  int v24; // ecx
  int v26; // eax
  unsigned int v27; // eax
  HDC CompatibleDC; // r14
  __int64 CompatibleBitmapInternal; // rax
  int v30; // ecx
  int v31; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v33; // eax
  int v34; // [rsp+68h] [rbp-31h]
  __int64 v35; // [rsp+70h] [rbp-29h]
  __int64 v36; // [rsp+78h] [rbp-21h]
  __int64 v40; // [rsp+100h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = *(_DWORD *)(a4 + 80);
  v12 = a9 & 0x10;
  v34 = 0;
  a9 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  LODWORD(v40) = 0;
  v14 = 0;
  if ( (v11 & 8) != 0 )
  {
    AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7);
    if ( !AnimatedCursorFrame )
    {
      UserSetLastError(87LL);
      return v10;
    }
  }
  if ( *((_QWORD *)AnimatedCursorFrame + 16) )
  {
    if ( (v9 & 3) == 3 )
      v14 = 1;
    v34 = v14;
  }
  GetVirtualizedCursorSize(AnimatedCursorFrame, &a9, (int *)&v40);
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
  v20 = 2;
  if ( !a6 )
  {
    if ( v18 )
    {
      v33 = GetDpiForSystem(2LL, v15);
      v21 = GetDpiDependentMetric(6LL, v33);
      v20 = 2;
    }
    else
    {
      v21 = (int)v40 / 2;
    }
    v19 = v21;
  }
  if ( !a8 )
  {
    if ( v14 )
    {
      v20 = 3;
      v27 = v12 != 0 ? 0x80000000 : 0;
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
        BltIcon(a1, v19, ghdcMem, (__int64)AnimatedCursorFrame, 1, v24);
        v22 = a9;
        v20 = 2;
      }
      if ( !v23 )
        return 1;
      if ( v22 )
      {
        v26 = v12 != 0 ? -2140798906 : 6684742;
LABEL_24:
        BltIcon(a1, v19, ghdcMem, (__int64)AnimatedCursorFrame, v20, v26);
        return 1;
      }
      v27 = v12 != 0 ? 0x80000000 : 0;
    }
    v26 = v27 + 13369376;
    goto LABEL_24;
  }
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  if ( CompatibleDC )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
    v36 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      v40 = 0LL;
      v35 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
      GreGetBrushOrg(a1);
      GreSetBrushOrg(CompatibleDC);
      GrePolyPatBlt(CompatibleDC);
      if ( v34 )
      {
        v30 = 3;
        v31 = v12 != 0 ? -2134114272 : 13369376;
      }
      else
      {
        BltIcon(CompatibleDC, v19, ghdcMem, (__int64)AnimatedCursorFrame, 1, v12 != 0 ? -2138570554 : 8913094);
        v30 = 2;
        v31 = v12 != 0 ? -2140798906 : 6684742;
      }
      BltIcon(CompatibleDC, v19, ghdcMem, (__int64)AnimatedCursorFrame, v30, v31);
      NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v19, (__int64)CompatibleDC, 0, 0, 13369376, -1, 0);
      GreSelectBitmap(CompatibleDC, v35);
      GreDeleteObject(v36);
      v10 = 1;
    }
    GreDeleteDC(CompatibleDC);
  }
  return v10;
}
