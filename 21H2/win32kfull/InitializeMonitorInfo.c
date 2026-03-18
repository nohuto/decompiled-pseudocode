/*
 * XREFs of InitializeMonitorInfo @ 0x1C0021474
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall InitializeMonitorInfo(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  int v8; // r15d
  INT ScaledLogPixels; // ebp
  double v10; // xmm1_8
  __int64 ThreadWin32Thread; // rax
  int v12; // ecx
  __int64 result; // rax
  double v14; // xmm1_8
  INT v15; // eax
  INT v16; // ecx
  int v17; // ecx
  int v18; // eax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(a3[5] + 60LL);
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  GetMonitorRectForDpi(v19, a3, (unsigned __int16)ScaledLogPixels);
  *(_QWORD *)(a1 + 16) = v19[0];
  GetMonitorRectForDpi(v19, a3, 0LL);
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFFA;
  *(_QWORD *)(a1 + 24) = v19[0];
  if ( v8 != 96
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
    && (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (a2 & 0xF) == 0
    && (a2 & 0x40000000) != 0 )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
    v15 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
    v16 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v15;
    *(_DWORD *)(a1 + 20) = EngMulDiv(v16, ScaledLogPixels, 96);
  }
  *(_DWORD *)(a1 + 32) = (unsigned __int16)ScaledLogPixels;
  if ( (_WORD)ScaledLogPixels )
  {
    if ( (unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16LL))
      && a4
      && (unsigned int)IsTopLevelWindow(a4) )
    {
      v17 = *(unsigned __int16 *)(a3[5] + 64LL);
      *(_DWORD *)(a1 + 36) |= 1u;
      *(_DWORD *)(a1 + 12) = v17;
      v14 = (double)*(unsigned __int16 *)(a3[5] + 64LL);
    }
    else
    {
      v14 = (double)v8;
    }
    v10 = v14 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 && (*(_DWORD *)(a4 + 320) & 0x80000) == 0 )
      *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 424LL) + 284LL);
    v10 = DOUBLE_1_0;
  }
  *(double *)a1 = v10;
  if ( a4 && IsChildWindowDpiBoundary((const struct tagWND *)a4) )
    *(_DWORD *)(a1 + 36) |= 4u;
  *(_QWORD *)(a1 + 48) = *a3;
  if ( !a4 )
    goto LABEL_14;
  ThreadWin32Thread = *(_QWORD *)(a4 + 16);
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(__int64 *)(ThreadWin32Thread + 648) >= 0 || (v18 = IsTopLevelWindow(a4), v12 = 8, !v18) )
LABEL_14:
    v12 = 0;
  *(_DWORD *)(a1 + 36) = v12 | *(_DWORD *)(a1 + 36) & 0xFFFFFFF7;
  result = DrvGetWDDMAdapterInfo(a3[10], 0LL, a1 + 56, a1 + 64);
  if ( !(_DWORD)result )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
  }
  return result;
}
