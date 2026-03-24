/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A532C
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A5F78 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A7CF4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     EngMulDiv @ 0x1C0070E10 (EngMulDiv.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  char *v2; // rdi
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  bool v13; // sf
  int v14; // r9d
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  INT v18; // ebx
  int v19; // ebx
  INT v20; // eax
  int v21; // r8d
  int v22; // ecx

  v2 = (char *)this + 448;
  memset((char *)this + 448, 0, 0x1FCuLL);
  v5 = 2LL;
  v6 = (_OWORD *)((char *)this + 540);
  v7 = &gTPThresholds;
  do
  {
    *v6 = *v7;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    v6[5] = v7[5];
    v6[6] = v7[6];
    v6 += 8;
    v8 = v7[7];
    v7 += 8;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *v6 = *v7;
  v6[1] = v7[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)v7 + 4);
  *(_OWORD *)((char *)this + 836) = gTouchPadParameters;
  *(_QWORD *)((char *)this + 852) = *(_QWORD *)&qword_1C024FFD0;
  *(_OWORD *)((char *)this + 860) = gAapState;
  *(_OWORD *)((char *)this + 876) = xmmword_1C0258DE0;
  *(_OWORD *)((char *)this + 892) = xmmword_1C0258DF0;
  *(_OWORD *)((char *)this + 908) = xmmword_1C0258E00;
  *(_OWORD *)((char *)this + 924) = xmmword_1C0258E10;
  *(_OWORD *)((char *)this + 940) = xmmword_1C0258E20;
  *(_DWORD *)v2 = *((_DWORD *)a2 + 180);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 22) = *((_DWORD *)a2 + 226);
  *((_DWORD *)v2 + 3) = *((_DWORD *)gpsi + 497) != 0;
  *((union _LARGE_INTEGER *)v2 + 10) = gliQpcFreq;
  *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 67);
  *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 8) += *((_DWORD *)a2 + 68);
  v9 = *((_DWORD *)v2 + 9) + *((_DWORD *)a2 + 69);
  v10 = *((_DWORD *)v2 + 11);
  v11 = *((_DWORD *)v2 + 8);
  *((_DWORD *)v2 + 9) = v9;
  *((_DWORD *)v2 + 10) -= *((_DWORD *)a2 + 70);
  v12 = v10 - *((_DWORD *)a2 + 71);
  v13 = *((_DWORD *)v2 + 10) - v11 < 0;
  *((_DWORD *)v2 + 11) = v12;
  if ( v13 || v12 - v9 < 0 )
    *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 12) += *((_DWORD *)a2 + 72);
  v14 = *((_DWORD *)v2 + 13) + *((_DWORD *)a2 + 73);
  v15 = *((_DWORD *)v2 + 15);
  v16 = *((_DWORD *)v2 + 12);
  *((_DWORD *)v2 + 13) = v14;
  *((_DWORD *)v2 + 14) -= *((_DWORD *)a2 + 74);
  v17 = v15 - *((_DWORD *)a2 + 75);
  v13 = *((_DWORD *)v2 + 14) - v16 < 0;
  *((_DWORD *)v2 + 15) = v17;
  if ( v13 || v17 - v14 < 0 )
    *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 4) = *(_OWORD *)((char *)a2 + 140);
  v18 = *((_DWORD *)a2 + 37);
  v19 = v18 - EngMulDiv(v18, *((_DWORD *)a2 + 76), 100);
  *((_DWORD *)v2 + 16) = v19;
  v20 = EngMulDiv(*((_DWORD *)a2 + 38), 100 - *((_DWORD *)a2 + 77), 100);
  *((_DWORD *)v2 + 17) = v20;
  v21 = v20;
  if ( v19 >= *((_DWORD *)a2 + 37) )
    v19 = *((_DWORD *)a2 + 37);
  if ( v19 <= *((_DWORD *)a2 + 35) )
    v19 = *((_DWORD *)a2 + 35);
  *((_DWORD *)v2 + 16) = v19;
  v22 = *((_DWORD *)a2 + 36);
  if ( v20 >= *((_DWORD *)a2 + 38) - 1000 )
    v21 = *((_DWORD *)a2 + 38) - 1000;
  if ( v21 > v22 )
    v22 = v21;
  *((_DWORD *)v2 + 17) = v22;
}
