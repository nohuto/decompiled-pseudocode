/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F38D4
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01F5240 (xxxSwitchWndProc.c)
 * Callees:
 *     DrawEdge @ 0x1C00451E8 (DrawEdge.c)
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C00FFC48 (_GetClientRect.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0169284 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F2BE0 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3450 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rbx
  __int64 v3; // rdx
  HDC DCEx; // rsi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 DPIServerInfo; // rbp
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  LONG v12; // eax
  int v13; // edx
  LONG v14; // ecx
  LONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct tagSwitchWndInfo *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct tagSwitchWndInfo *v21; // rbx
  int v22; // [rsp+20h] [rbp-58h]
  RECT v23; // [rsp+50h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v2 = Getpswi(a1);
    if ( v2 )
    {
      DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_6;
      if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_6:
        if ( (_GetAsyncKeyState(18LL, v3, v5) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v2 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 4816LL));
      DPIServerInfo = GetDPIServerInfo(v6);
      v9 = *(unsigned int *)(DPIServerInfo + 20);
      v10 = 2 * *(_DWORD *)(DPIServerInfo + 16);
      *((_DWORD *)v2 + 23) += v10;
      *((_DWORD *)v2 + 25) -= v10;
      *((_DWORD *)v2 + 26) -= v9;
      *((_DWORD *)v2 + 24) += v9;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL, v9, v8) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v11 = *(int *)(DPIServerInfo + 16) >> 1;
      v12 = *((_DWORD *)v2 + 23) - v11;
      v13 = *(int *)(DPIServerInfo + 20) >> 1;
      v23.right = *((_DWORD *)v2 + 25) + v11;
      v14 = v13 + *((_DWORD *)v2 + 26);
      v23.left = v12;
      v15 = *((_DWORD *)v2 + 24) - v13;
      v23.bottom = v14;
      v23.top = v15;
      DrawEdge(DCEx, &v23, 10, 15);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v22, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v18 = Getpswi(a1);
          v21 = v18;
          if ( v18
            && (!*((_DWORD *)v18 + 27) || (_GetKeyState(18LL) & 0x8000u) != 0LL)
            && (*((_DWORD *)v21 + 27) || (_GetAsyncKeyState(18LL, v19, v20) & 0x8000u) != 0LL) )
          {
            xxxDrawSwitchWndHilite(v21, DCEx, *((_DWORD *)v21 + 17), *((_DWORD *)v21 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL, v16, v17) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
