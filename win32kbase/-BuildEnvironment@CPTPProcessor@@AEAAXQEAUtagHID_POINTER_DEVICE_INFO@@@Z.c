/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CEEC
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020DF74 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020FAF8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0015510 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  char *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _OWORD *v42; // rbp
  int v43; // r9d
  int v44; // r8d
  int v45; // edx
  int v46; // r8d
  bool v47; // sf
  int v48; // r9d
  int v49; // r8d
  int v50; // edx
  int v51; // r8d
  INT v52; // esi
  int v53; // esi
  INT v54; // eax
  INT v55; // r8d
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // eax
  _OWORD *v60; // rcx
  _BYTE v61[304]; // [rsp+20h] [rbp-138h] BYREF

  v2 = (char *)this + 552;
  memset((char *)this + 552, 0, 0x22CuLL);
  v9 = SGDGetUserSessionState(v6, v5, v7, v8);
  v10 = 2LL;
  v11 = v61;
  v12 = (_OWORD *)(v9 + 16504);
  v13 = 2LL;
  do
  {
    v14 = v12[1];
    *v11 = *v12;
    v15 = v12[2];
    v11[1] = v14;
    v16 = v12[3];
    v11[2] = v15;
    v17 = v12[4];
    v11[3] = v16;
    v18 = v12[5];
    v11[4] = v17;
    v19 = v12[6];
    v11[5] = v18;
    v20 = v12[7];
    v12 += 8;
    v11[6] = v19;
    v11 += 8;
    *(v11 - 1) = v20;
    --v13;
  }
  while ( v13 );
  v21 = *v12;
  v22 = (_OWORD *)((char *)this + 692);
  v23 = v12[1];
  v24 = *((_QWORD *)v12 + 4);
  *v11 = v21;
  v11[1] = v23;
  *((_QWORD *)v11 + 4) = v24;
  v25 = v61;
  do
  {
    v26 = v25[1];
    *v22 = *v25;
    v27 = v25[2];
    v22[1] = v26;
    v28 = v25[3];
    v22[2] = v27;
    v29 = v25[4];
    v22[3] = v28;
    v30 = v25[5];
    v22[4] = v29;
    v31 = v25[6];
    v22[5] = v30;
    v32 = v25[7];
    v25 += 8;
    v22[6] = v31;
    v22 += 8;
    *(v22 - 1) = v32;
    --v10;
  }
  while ( v10 );
  v33 = *v25;
  v34 = v25[1];
  v35 = *((_QWORD *)v25 + 4);
  *v22 = v33;
  v22[1] = v34;
  *((_QWORD *)v22 + 4) = v35;
  v36 = SGDGetUserSessionState(v22, v11, 0LL, 128LL);
  *(_QWORD *)&v33 = *(_QWORD *)(v36 + 16816);
  *(_OWORD *)((char *)this + 988) = *(_OWORD *)(v36 + 16800);
  *(_QWORD *)((char *)this + 1004) = v33;
  v41 = SGDGetUserSessionState(v38, v37, v39, v40);
  v42 = v2 + 16;
  *(_OWORD *)((char *)this + 1012) = *(_OWORD *)(v41 + 16376);
  *(_OWORD *)((char *)this + 1028) = *(_OWORD *)(v41 + 16392);
  *(_OWORD *)((char *)this + 1044) = *(_OWORD *)(v41 + 16408);
  *(_OWORD *)((char *)this + 1060) = *(_OWORD *)(v41 + 16424);
  *(_OWORD *)((char *)this + 1076) = *(_OWORD *)(v41 + 16440);
  *(_OWORD *)((char *)this + 1092) = *(_OWORD *)(v41 + 16456);
  *(_DWORD *)v2 = *((_DWORD *)a2 + 192);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 22) = *((_DWORD *)a2 + 238);
  *((_DWORD *)v2 + 3) = *((_DWORD *)gpsi + 497) != 0;
  *((union _LARGE_INTEGER *)v2 + 10) = gliQpcFreq;
  *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 67);
  *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 8) += *((_DWORD *)a2 + 68);
  v43 = *((_DWORD *)v2 + 9) + *((_DWORD *)a2 + 69);
  v44 = *((_DWORD *)v2 + 11);
  v45 = *((_DWORD *)v2 + 8);
  *((_DWORD *)v2 + 9) = v43;
  *((_DWORD *)v2 + 10) -= *((_DWORD *)a2 + 70);
  v46 = v44 - *((_DWORD *)a2 + 71);
  v47 = *((_DWORD *)v2 + 10) - v45 < 0;
  *((_DWORD *)v2 + 11) = v46;
  if ( v47 || v46 - v43 < 0 )
    *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 12) += *((_DWORD *)a2 + 72);
  v48 = *((_DWORD *)v2 + 13) + *((_DWORD *)a2 + 73);
  v49 = *((_DWORD *)v2 + 15);
  v50 = *((_DWORD *)v2 + 12);
  *((_DWORD *)v2 + 13) = v48;
  *((_DWORD *)v2 + 14) -= *((_DWORD *)a2 + 74);
  v51 = v49 - *((_DWORD *)a2 + 75);
  v47 = *((_DWORD *)v2 + 14) - v50 < 0;
  *((_DWORD *)v2 + 15) = v51;
  if ( v47 || v51 - v48 < 0 )
    *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 4) = *(_OWORD *)((char *)a2 + 140);
  v52 = *((_DWORD *)a2 + 37);
  v53 = v52 - EngMulDiv(v52, *((_DWORD *)a2 + 76), 100);
  *((_DWORD *)v2 + 16) = v53;
  v54 = EngMulDiv(*((_DWORD *)a2 + 38), 100 - *((_DWORD *)a2 + 77), 100);
  *((_DWORD *)v2 + 17) = v54;
  v55 = v54;
  v56 = *((_DWORD *)a2 + 37);
  v57 = v53;
  if ( v53 >= v56 )
    v57 = *((_DWORD *)a2 + 37);
  if ( v57 <= *((_DWORD *)a2 + 35) )
  {
    v53 = *((_DWORD *)a2 + 35);
  }
  else if ( v53 >= v56 )
  {
    v53 = *((_DWORD *)a2 + 37);
  }
  *((_DWORD *)v2 + 16) = v53;
  v58 = *((_DWORD *)a2 + 38) - ((*((_DWORD *)a2 + 90) & 8) == 0 ? 0x3E8 : 0);
  v59 = v58;
  if ( v55 < v58 )
    v59 = v55;
  if ( v59 <= *((_DWORD *)a2 + 36) )
  {
    v58 = *((_DWORD *)a2 + 36);
  }
  else if ( v55 < v58 )
  {
    v58 = v55;
  }
  *((_DWORD *)v2 + 17) = v58;
  *(_OWORD *)(v2 + 92) = *(_OWORD *)((char *)a2 + 328);
  *(_OWORD *)(v2 + 108) = *(_OWORD *)((char *)a2 + 344);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a2 + 312)) )
    v42 = v60;
  *(_OWORD *)(v2 + 124) = *v42;
}
