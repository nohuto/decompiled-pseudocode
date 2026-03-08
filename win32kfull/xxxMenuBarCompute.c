/*
 * XREFs of xxxMenuBarCompute @ 0x1C023BEA8
 * Callers:
 *     xxxCalcMenuBar @ 0x1C00A4B90 (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     xxxMenuBarDraw @ 0x1C0238AB0 (xxxMenuBarDraw.c)
 *     xxxPaintMenuBar @ 0x1C02392F4 (xxxPaintMenuBar.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023BD88 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023A5CC (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C023B1B0 (MNClearCachedPopupSizes.c)
 *     xxxMNCompute @ 0x1C023B4C8 (xxxMNCompute.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 **a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int16 WindowDpiLastNotify; // bx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rcx
  int v16; // ebp
  int v17; // ebx
  __int64 result; // rax
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  if ( a2 )
  {
    v12 = *(_QWORD *)(a2 + 40);
    v9 = *(_DWORD *)(v12 + 288) & 0xF;
    if ( (_DWORD)v9 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(v12 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
      goto LABEL_15;
    }
    if ( (_DWORD)v9
      || (v13 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL)) == 0
      || (v9 = **(_QWORD **)(v13 + 8), (*(_DWORD *)(v9 + 64) & 1) == 0) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL);
      WindowDpiLastNotify = *(_WORD *)(v9 + 284);
      goto LABEL_15;
    }
LABEL_13:
    WindowDpiLastNotify = 96;
    goto LABEL_15;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) == 0 )
    goto LABEL_13;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  WindowDpiLastNotify = *(_WORD *)(CurrentProcessWin32Process + 284);
LABEL_15:
  if ( (*(_DWORD *)(a2 + 320) & 0x80000) != 0 )
    goto LABEL_19;
  v14 = PsGetCurrentProcessWin32Process(v9);
  if ( v14 )
    v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
  if ( (*(_DWORD *)(v14 + 812) & 0x100000) != 0 )
  {
LABEL_19:
    if ( *(_WORD *)(**a1 + 76) != WindowDpiLastNotify )
    {
      v15 = a1[2];
      if ( !v15 )
        v15 = (__int64 *)**a1;
      MNClearCachedPopupSizes(v15);
      *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
    }
  }
  v16 = a5;
  v17 = xxxMNCompute(a1, (struct tagWND *)a2, a2, a3, a4, a5, &v19);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) == 0 )
  {
    if ( v19 )
      v17 = xxxMNCompute(a1, (struct tagWND *)a2, a2, a3, a4, v16, &v19);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v17 + 1);
  if ( !v17 )
    return 0LL;
  return result;
}
