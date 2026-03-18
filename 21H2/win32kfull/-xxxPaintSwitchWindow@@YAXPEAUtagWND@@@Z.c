/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01EE0D4
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01EF940 (xxxSwitchWndProc.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     DrawEdge @ 0x1C00C17C0 (DrawEdge.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     _GetClientRect @ 0x1C00F2600 (_GetClientRect.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015A5CC (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rbx
  HDC DCEx; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rbp
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  LONG v10; // eax
  int v11; // edx
  LONG v12; // ecx
  LONG v13; // eax
  struct tagSwitchWndInfo *v14; // rax
  struct tagSwitchWndInfo *v15; // rbx
  int v16; // [rsp+20h] [rbp-58h]
  RECT v17; // [rsp+50h] [rbp-28h] BYREF

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
        if ( (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      GetClientRect((__int64)a1, (__int64)v2 + 92);
      FillRect(DCEx, (LPCRECT)((char *)v2 + 92), *(HBRUSH *)(gpsi + 4816LL));
      DPIServerInfo = GetDPIServerInfo(v5, v4);
      v7 = *(_DWORD *)(DPIServerInfo + 20);
      v8 = 2 * *(_DWORD *)(DPIServerInfo + 16);
      *((_DWORD *)v2 + 23) += v8;
      *((_DWORD *)v2 + 25) -= v8;
      *((_DWORD *)v2 + 26) -= v7;
      *((_DWORD *)v2 + 24) += v7;
      *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 26) - *(_DWORD *)(DPIServerInfo + 20);
      if ( !*((_DWORD *)v2 + 27) )
        goto LABEL_10;
      if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
        goto LABEL_21;
      if ( !*((_DWORD *)v2 + 27) )
      {
LABEL_10:
        if ( (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
      }
      v9 = *(int *)(DPIServerInfo + 16) >> 1;
      v10 = *((_DWORD *)v2 + 23) - v9;
      v11 = *(int *)(DPIServerInfo + 20) >> 1;
      v17.right = *((_DWORD *)v2 + 25) + v9;
      v12 = v11 + *((_DWORD *)v2 + 26);
      v17.left = v10;
      v13 = *((_DWORD *)v2 + 24) - v11;
      v17.bottom = v12;
      v17.top = v13;
      DrawEdge(DCEx, &v17, 10, 15);
      if ( *((_DWORD *)v2 + 27) )
      {
        if ( (_GetKeyState(18LL) & 0x8000u) == 0LL )
          goto LABEL_21;
        if ( *((_DWORD *)v2 + 27) )
        {
LABEL_15:
          xxxPaintIconsInSwitchWindow(a1, v2, DCEx, *((_DWORD *)v2 + 13), v16, *((_DWORD *)v2 + 11), 0, 0, 0LL);
          v14 = Getpswi(a1);
          v15 = v14;
          if ( v14
            && (!*((_DWORD *)v14 + 27) || (_GetKeyState(18LL) & 0x8000u) != 0LL)
            && (*((_DWORD *)v15 + 27) || (_GetAsyncKeyState(18LL) & 0x8000u) != 0LL) )
          {
            xxxDrawSwitchWndHilite(v15, DCEx, *((_DWORD *)v15 + 17), *((_DWORD *)v15 + 18), 1);
          }
          goto LABEL_21;
        }
      }
      if ( (_GetAsyncKeyState(18LL) & 0x8000u) != 0LL )
        goto LABEL_15;
LABEL_21:
      _ReleaseDC(DCEx);
    }
  }
}
