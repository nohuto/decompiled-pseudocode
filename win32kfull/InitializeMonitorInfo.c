__int64 __fastcall InitializeMonitorInfo(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  int v8; // r15d
  INT ScaledLogPixels; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int16 v12; // r13
  __int128 v13; // xmm0
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
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF

  v8 = *(unsigned __int16 *)(a3[5] + 60LL);
  *(_DWORD *)(a1 + 8) = v8;
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 12) = v8;
  v10 = a3[5];
  v11 = *(unsigned __int16 *)(v10 + 62);
  v12 = *(_WORD *)(v10 + 60);
  v24 = *(_OWORD *)(v10 + 28);
  if ( (_WORD)ScaledLogPixels )
  {
    v18 = ExpandMonitorSpaceVertex((unsigned __int16)ScaledLogPixels, v11, v24);
    ScaleDPIRect((unsigned int)&v24, (unsigned int)&v24, (unsigned __int16)ScaledLogPixels, v12, v18, v24);
  }
  *(_QWORD *)(a1 + 16) = v24;
  v13 = *(_OWORD *)(a3[5] + 28LL);
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFFA;
  v24 = v13;
  *(_QWORD *)(a1 + 24) = v13;
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
