/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180
 * Callers:
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0242A00 (xxxTrackBox.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C024078C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C024082C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned __int16 v9; // ax
  int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  __int64 DCEx; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  HDC v26; // rbx
  unsigned int v27; // r9d
  unsigned __int16 v28; // ax
  unsigned int v29; // r8d
  HDC v30; // [rsp+30h] [rbp-48h]
  struct tagRECT v31; // [rsp+38h] [rbp-40h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v31 = (struct tagRECT)*((_OWORD *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v15 = *(unsigned int *)a2;
    v30 = (HDC)DCEx;
    if ( (v15 & 2) != 0 )
    {
      v16 = 0;
      v17 = 10;
    }
    else
    {
      v17 = 1;
      v16 = 11;
    }
    DpiForSystem = GetDpiForSystem(v15, v14);
    DpiDependentMetric = GetDpiDependentMetric(v16, DpiForSystem);
    v22 = GetDpiForSystem(v21, v20);
    v23 = GetDpiDependentMetric(v17, v22);
    v10 = 3;
    if ( DpiDependentMetric == v31.right - v31.left && v23 == v31.bottom - v31.top )
    {
      v24 = *(_DWORD *)a2;
      if ( a4 )
        v25 = ~(2 * (_BYTE)v24) & 4 | 0x32;
      else
        v25 = (v24 & 2) != 0 ? 46 : 58;
      v26 = v30;
      v27 = v25 + 1;
      if ( !a3 )
        v27 = v25;
      BitBltSysBmp((__int64)v30, (unsigned int)v31.left, v31.top, v27, 1);
    }
    else
    {
      v26 = v30;
      DrawFrameControl(v30, &v31, 3, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v26);
    if ( a4 )
      v28 = 1544;
    else
      v28 = 1537;
    SetOrClrWF(a3 != 0, a1, v28, 1);
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
    SetOrClrWF(a3 != 0, a1, v9, 1);
    v10 = 3;
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    if ( a4 != 2 )
      v4 = 4;
    v12 = (v11 & 4) == 0;
  }
  if ( v12 )
    v29 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v29 = -4;
  xxxWindowEvent(0x800Au, a1, v29, v4, v10);
}
