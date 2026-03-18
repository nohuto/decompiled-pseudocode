/*
 * XREFs of ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01EDA7C
 * Callers:
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015A5CC (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01ED814 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01ED850 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v6; // r12d
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  BOOL v13; // r13d
  HDC DCEx; // r14
  struct tagSwitchWndInfo *v15; // rax
  struct tagSwitchWndInfo *v16; // rcx
  __int64 v18; // rbx
  struct tagSwitchWndInfo *v19; // rax
  int v20; // [rsp+20h] [rbp-58h]

  v6 = 0;
  if ( a2 != Getpswi(a1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v7 = *((_DWORD *)a2 + 17);
  v8 = *((_DWORD *)a2 + 18);
  if ( a3 )
  {
    if ( v7 <= 0 )
    {
      if ( v8 <= 0 )
      {
        if ( *((_DWORD *)a2 + 12) )
        {
          v6 = 1;
          v7 = *((_DWORD *)a2 + 14);
          v9 = *((_DWORD *)a2 + 13) - v7;
          if ( v9 < 0 )
            v9 += *((_DWORD *)a2 + 10);
          *((_DWORD *)a2 + 13) = v9;
          goto LABEL_13;
        }
        v8 = *((_DWORD *)a2 + 15);
        v7 = *((_DWORD *)a2 + 16);
      }
      else
      {
        v7 = *((_DWORD *)a2 + 14);
      }
      --v8;
    }
LABEL_13:
    v10 = v7 - 1;
    goto LABEL_24;
  }
  if ( v8 == *((_DWORD *)a2 + 15) - 1 )
  {
    v11 = *((_DWORD *)a2 + 16);
    v12 = 1;
  }
  else
  {
    v11 = *((_DWORD *)a2 + 14);
    v12 = 0;
  }
  if ( v7 >= v11 - 1 )
  {
    if ( v12 )
    {
      if ( *((_DWORD *)a2 + 12) )
      {
        v6 = 1;
        *((_DWORD *)a2 + 13) = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), *((_DWORD *)a2 + 14), 1);
        v10 = 0;
      }
      else
      {
        v10 = 0;
        v8 = 0;
      }
    }
    else
    {
      v10 = 0;
      ++v8;
    }
  }
  else
  {
    v10 = v7 + 1;
  }
LABEL_24:
  v13 = a3 == 0;
  *((_QWORD *)a2 + 4) = NextPrevPhwnd(a2, *((HWND **)a2 + 4), v13);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  xxxDrawSwitchWndHilite(a2, DCEx, *((_DWORD *)a2 + 17), *((_DWORD *)a2 + 18), 0);
  v15 = Getpswi(a1);
  v16 = v15;
  if ( v15 )
  {
    *((_DWORD *)v15 + 18) = v8;
    *((_DWORD *)v15 + 17) = v10;
    v18 = **((_QWORD **)v15 + 4);
    if ( !v6
      || (xxxPaintIconsInSwitchWindow(a1, v15, DCEx, *((_DWORD *)v15 + 13), v20, 0, 1, v13, 0LL),
          (v16 = Getpswi(a1)) != 0LL) )
    {
      xxxDrawSwitchWndHilite(v16, DCEx, v10, v8, 1);
      _ReleaseDC(DCEx);
      v19 = Getpswi(a1);
      if ( v19 )
        xxxWindowEvent(0x8005u, a1, -4, v10 + v8 * *((_DWORD *)v19 + 14) + 1, 1);
    }
    else
    {
      _ReleaseDC(DCEx);
    }
    return v18;
  }
  else
  {
    _ReleaseDC(DCEx);
    return 0LL;
  }
}
