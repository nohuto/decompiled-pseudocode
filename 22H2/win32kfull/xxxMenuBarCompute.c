/*
 * XREFs of xxxMenuBarCompute @ 0x1C0102284
 * Callers:
 *     xxxCalcClientRect @ 0x1C004A800 (xxxCalcClientRect.c)
 *     xxxPaintMenuBar @ 0x1C0101DB0 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C0102164 (xxxCalcMenuBar.c)
 *     xxxMenuBarDraw @ 0x1C024CF54 (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7B4 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01023FC (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C010251C (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 ***a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int16 WindowDpiLastNotify; // bx
  int v13; // ebp
  int v14; // ebx
  __int64 result; // rax
  __int64 *v16; // rcx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = *(_DWORD *)(v9 + 288) & 0xF;
    if ( (_DWORD)v10 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v9 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else if ( !(_DWORD)v10
           && (v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL)) != 0
           && (v10 = **(_QWORD **)(v11 + 8), (*(_DWORD *)(v10 + 64) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL);
      WindowDpiLastNotify = *(_WORD *)(v10 + 284);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1) & 0xF) != 0 )
      WindowDpiLastNotify = *(_WORD *)(PsGetCurrentProcessWin32Process(v10) + 284);
    else
      WindowDpiLastNotify = 96;
    v9 = MEMORY[0x28];
  }
  if ( ((*(_DWORD *)(v9 + 232) & 0x10000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 820) & 0x100000) != 0)
    && *((_WORD *)**a1 + 38) != WindowDpiLastNotify )
  {
    v16 = (__int64 *)a1[2];
    if ( !v16 )
      v16 = **a1;
    MNClearCachedPopupSizes(v16);
    *((_WORD *)**a1 + 38) = WindowDpiLastNotify;
  }
  v13 = a5;
  v14 = xxxMNCompute(a1, a2, a2, a3, a4, a5, &v17);
  if ( (*(_DWORD *)((**a1)[5] + 40) & 1) == 0 )
  {
    if ( v17 )
      v14 = xxxMNCompute(a1, a2, a2, a3, a4, v13, &v17);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v14 + 1);
  if ( !v14 )
    return 0LL;
  return result;
}
