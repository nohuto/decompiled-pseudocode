/*
 * XREFs of ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CADAC
 * Callers:
 *     xxxSwitchWndProc @ 0x1C01CC6D0 (xxxSwitchWndProc.c)
 * Callees:
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     DrawEdge @ 0x1C0088404 (DrawEdge.c)
 *     _GetClientRect @ 0x1C01016A4 (_GetClientRect.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C012E4C8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CA108 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CA94C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall xxxPaintSwitchWindow(struct tagWND *a1)
{
  struct tagSwitchWndInfo *v2; // rbx
  HDC DCEx; // rsi
  __int64 v4; // rcx
  __int64 DPIServerInfo; // rbp
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
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
      DPIServerInfo = GetDPIServerInfo(v4);
      v6 = *(_DWORD *)(DPIServerInfo + 16);
      v7 = *(_DWORD *)(DPIServerInfo + 20);
      *((_DWORD *)v2 + 24) += v7;
      v8 = *((_DWORD *)v2 + 26) - v7;
      *((_DWORD *)v2 + 23) += 2 * v6;
      *((_DWORD *)v2 + 25) -= 2 * v6;
      *((_DWORD *)v2 + 26) = v8;
      *((_DWORD *)v2 + 24) = v8 - *(_DWORD *)(DPIServerInfo + 20);
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
