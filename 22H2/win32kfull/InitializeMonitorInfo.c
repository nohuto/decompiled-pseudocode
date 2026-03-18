/*
 * XREFs of InitializeMonitorInfo @ 0x1C00D516C
 * Callers:
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00D3F28 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00D0BA8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00F403C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ?_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z @ 0x1C01F2C34 (-_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall InitializeMonitorInfo(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  int v8; // r15d
  INT ScaledLogPixels; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int16 v12; // r13
  __m128i v13; // xmm0
  double v14; // xmm1_8
  struct tagTHREADINFO *v15; // rax
  int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rax
  double v19; // xmm1_8
  INT v20; // eax
  INT v21; // ecx
  int v22; // ecx
  struct tagWND *v23; // rcx
  __m128i v24; // [rsp+30h] [rbp-38h] BYREF

  v8 = *(unsigned __int16 *)(a3[5] + 60LL);
  *(_DWORD *)(a1 + 8) = v8;
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 12) = v8;
  v10 = a3[5];
  v11 = *(unsigned __int16 *)(v10 + 62);
  v12 = *(_WORD *)(v10 + 60);
  v24 = *(__m128i *)(v10 + 28);
  if ( (_WORD)ScaledLogPixels )
  {
    v18 = ExpandMonitorSpaceVertex(ScaledLogPixels, v11, v24.m128i_i64[0]);
    ScaleDPIRect(&v24, &v24, ScaledLogPixels, v12, v18, v24.m128i_i64[0]);
  }
  *(_QWORD *)(a1 + 16) = v24.m128i_i64[0];
  v13 = *(__m128i *)(a3[5] + 28LL);
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFFA;
  v24 = v13;
  *(_QWORD *)(a1 + 24) = v13.m128i_i64[0];
  if ( v8 != 96
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *((_QWORD *)PtiCurrentShared() + 57)
    && (*(_BYTE *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0
    && (a2 & 0x4000000F) == 0x40000000 )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
    v20 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
    v21 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v20;
    *(_DWORD *)(a1 + 20) = EngMulDiv(v21, ScaledLogPixels, 96);
  }
  *(_DWORD *)(a1 + 32) = (unsigned __int16)ScaledLogPixels;
  if ( (_WORD)ScaledLogPixels )
  {
    if ( (unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16LL), v11)
      && a4
      && (unsigned int)IsTopLevelWindow(a4) )
    {
      v22 = *(unsigned __int16 *)(a3[5] + 64LL);
      *(_DWORD *)(a1 + 36) |= 1u;
      *(_DWORD *)(a1 + 12) = v22;
      v19 = (double)*(unsigned __int16 *)(a3[5] + 64LL);
    }
    else
    {
      v19 = (double)v8;
    }
    v14 = v19 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 && (*(_DWORD *)(a4 + 320) & 0x80000) == 0 )
      *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 424LL) + 284LL);
    v14 = DOUBLE_1_0;
  }
  *(double *)a1 = v14;
  if ( a4 && IsChildWindowDpiBoundary((const struct tagWND *)a4) )
    *(_DWORD *)(a1 + 36) |= 4u;
  *(_QWORD *)(a1 + 48) = *a3;
  if ( !a4 )
    goto LABEL_16;
  v15 = *(struct tagTHREADINFO **)(a4 + 16);
  if ( !v15 )
    v15 = PtiCurrentShared();
  if ( (*((_QWORD *)v15 + 81) & 0x8400000000000000uLL) == 0x8000000000000000uLL
    && ((unsigned int)IsTopLevelWindow(a4) || (unsigned int)_IsModernAppTopLevelWindow(v23)) )
  {
    v16 = 8;
  }
  else
  {
LABEL_16:
    v16 = 0;
  }
  *(_DWORD *)(a1 + 36) = v16 | *(_DWORD *)(a1 + 36) & 0xFFFFFFF7;
  result = DrvGetWDDMAdapterInfo(a3[10], 0LL, a1 + 56, a1 + 64);
  if ( !(_DWORD)result )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
  }
  return result;
}
