__int64 __fastcall xxxMoveSwitchWndHilite(struct tagWND *a1, struct tagSwitchWndInfo *a2, int a3)
{
  int v3; // r13d
  int v5; // r12d
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  HDC DCEx; // r14
  struct tagSwitchWndInfo *v15; // rax
  struct tagSwitchWndInfo *v16; // rcx
  __int64 v18; // rbx
  struct tagSwitchWndInfo *v19; // rax
  int v20; // [rsp+20h] [rbp-58h]

  v3 = 0;
  v5 = 0;
  if ( a2 != Getpswi(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1479);
  v8 = *((_DWORD *)a2 + 17);
  v9 = *((_DWORD *)a2 + 18);
  if ( a3 )
  {
    if ( v8 <= 0 )
    {
      if ( v9 <= 0 )
      {
        if ( *((_DWORD *)a2 + 12) )
        {
          v5 = 1;
          v8 = *((_DWORD *)a2 + 14);
          v10 = *((_DWORD *)a2 + 13) - v8;
          if ( v10 < 0 )
            v10 += *((_DWORD *)a2 + 10);
          *((_DWORD *)a2 + 13) = v10;
          goto LABEL_13;
        }
        v9 = *((_DWORD *)a2 + 15);
        v8 = *((_DWORD *)a2 + 16);
      }
      else
      {
        v8 = *((_DWORD *)a2 + 14);
      }
      --v9;
    }
LABEL_13:
    v11 = v8 - 1;
    goto LABEL_25;
  }
  if ( v9 == *((_DWORD *)a2 + 15) - 1 )
  {
    v12 = *((_DWORD *)a2 + 16);
    v13 = 1;
  }
  else
  {
    v12 = *((_DWORD *)a2 + 14);
    v13 = 0;
  }
  if ( v8 >= v12 - 1 )
  {
    if ( v13 )
    {
      if ( *((_DWORD *)a2 + 12) )
      {
        v5 = 1;
        *((_DWORD *)a2 + 13) = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), *((_DWORD *)a2 + 14), 1);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      ++v9;
    }
    v11 = 0;
  }
  else
  {
    v11 = v8 + 1;
  }
LABEL_25:
  LOBYTE(v3) = a3 == 0;
  *((_QWORD *)a2 + 4) = NextPrevPhwnd(a2, *((HWND **)a2 + 4), v3);
  DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
  xxxDrawSwitchWndHilite(a2, DCEx, *((_DWORD *)a2 + 17), *((_DWORD *)a2 + 18), 0);
  v15 = Getpswi(a1);
  v16 = v15;
  if ( v15 )
  {
    *((_DWORD *)v15 + 18) = v9;
    *((_DWORD *)v15 + 17) = v11;
    v18 = **((_QWORD **)v15 + 4);
    if ( !v5
      || (xxxPaintIconsInSwitchWindow(a1, v15, DCEx, *((_DWORD *)v15 + 13), v20, 0, 1, v3, 0LL),
          (v16 = Getpswi(a1)) != 0LL) )
    {
      xxxDrawSwitchWndHilite(v16, DCEx, v11, v9, 1);
      _ReleaseDC(DCEx);
      v19 = Getpswi(a1);
      if ( v19 )
        xxxWindowEvent(0x8005u, a1, -4, *((_DWORD *)v19 + 14) * v9 + v11 + 1, 1);
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
