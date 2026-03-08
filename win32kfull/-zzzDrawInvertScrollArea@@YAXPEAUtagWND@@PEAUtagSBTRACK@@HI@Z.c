/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022C83C
 * Callers:
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C022E110 (xxxTrackBox.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C022BE5C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022BEFC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned __int16 v9; // ax
  int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  __int64 DCEx; // rax
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // r12d
  int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  HDC v24; // rbx
  unsigned int v25; // r9d
  unsigned __int16 v26; // ax
  unsigned int v27; // r8d
  HDC v28; // [rsp+30h] [rbp-48h]
  struct tagRECT v29; // [rsp+38h] [rbp-40h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v29 = (struct tagRECT)*((_OWORD *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v14 = *(unsigned int *)a2;
    v28 = (HDC)DCEx;
    if ( (v14 & 2) != 0 )
    {
      v15 = 0;
      v16 = 10;
    }
    else
    {
      v16 = 1;
      v15 = 11;
    }
    DpiForSystem = GetDpiForSystem(v14);
    DpiDependentMetric = GetDpiDependentMetric(v15, DpiForSystem);
    v20 = GetDpiForSystem(v19);
    v21 = GetDpiDependentMetric(v16, v20);
    v10 = 3;
    if ( DpiDependentMetric == v29.right - v29.left && v21 == v29.bottom - v29.top )
    {
      v22 = *(_DWORD *)a2;
      if ( a4 )
        v23 = ~(2 * (_BYTE)v22) & 4 | 0x32;
      else
        v23 = (v22 & 2) != 0 ? 46 : 58;
      v24 = v28;
      v25 = v23 + 1;
      if ( !a3 )
        v25 = v23;
      BitBltSysBmp((__int64)v28, v29.left, v29.top, v25, 1);
    }
    else
    {
      v24 = v28;
      DrawFrameControl(v28, &v29, 3, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v24);
    if ( a4 )
      v26 = 1544;
    else
      v26 = 1537;
    SetOrClrWF(a3 != 0, (__int64 *)a1, v26, 1);
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    v4 = a4 != 0 ? 5 : 1;
    v12 = (v11 & 4) == 0;
  }
  else
  {
    InvertScrollHilite(a1, (const struct tagRECT *)a2);
    if ( a4 == 2 )
      v9 = 1538;
    else
      v9 = 1540;
    SetOrClrWF(a3 != 0, (__int64 *)a1, v9, 1);
    v10 = 3;
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    if ( a4 != 2 )
      v4 = 4;
    v12 = (v11 & 4) == 0;
  }
  if ( v12 )
    v27 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v27 = -4;
  xxxWindowEvent(0x800Au, a1, v27, v4, v10);
}
