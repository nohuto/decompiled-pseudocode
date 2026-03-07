__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  int v6; // r11d
  int v7; // r12d
  unsigned int v8; // r10d
  unsigned int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // r14d
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  int v25; // eax
  int v26; // esi
  int v27; // ebx
  int v28; // edi
  int v29; // r13d
  int v30; // edx
  int v31; // r8d
  int v32; // r14d
  int v33; // edi
  int v34; // ebx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 result; // rax
  int v38; // [rsp+20h] [rbp-59h]
  int v39; // [rsp+20h] [rbp-59h]
  int v40; // [rsp+24h] [rbp-55h]
  __int64 v41; // [rsp+28h] [rbp-51h]
  unsigned __int64 v42; // [rsp+30h] [rbp-49h]
  int v43; // [rsp+38h] [rbp-41h]
  int v44; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v45; // [rsp+40h] [rbp-39h]
  int v46; // [rsp+44h] [rbp-35h]
  int v47; // [rsp+48h] [rbp-31h]
  int v48; // [rsp+4Ch] [rbp-2Dh]
  int v49; // [rsp+50h] [rbp-29h]
  int v50; // [rsp+54h] [rbp-25h]
  unsigned __int64 v51; // [rsp+58h] [rbp-21h]
  __int128 v53; // [rsp+70h] [rbp-9h] BYREF
  __int128 v54; // [rsp+80h] [rbp+7h]
  int v55; // [rsp+90h] [rbp+17h]
  int v56; // [rsp+94h] [rbp+1Bh]

  v4 = *a2;
  v6 = a2[1];
  v7 = 0;
  v8 = a2[3];
  v10 = a2[2];
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[8];
  LODWORD(v41) = *a2;
  v38 = v6;
  v42 = __PAIR64__(v12, v10);
  HIDWORD(v41) = v8;
  v40 = v11;
  if ( a4 >= 0 )
  {
    if ( --a4 < 0 )
      a4 = 5;
    v14 = 100 * StdIlluminant[2 * a4];
    a2[6] = v14;
    v15 = 100 * StdIlluminant[2 * a4 + 1];
    a2[7] = v15;
  }
  else
  {
    v14 = a2[6];
    v15 = a2[7];
  }
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v4, v13);
  v16 = v8 - v12;
  v45 = v15;
  v44 = v14;
  v17 = v12 - v6;
  LODWORD(v53) = 65539;
  v18 = v6 - v8;
  HIDWORD(v53) = v16;
  *(_QWORD *)&v54 = __PAIR64__(v17, v10);
  DWORD2(v54) = v11;
  HIDWORD(v54) = v6 - v8;
  v19 = MulDivFD6Pairs((int *)&v53);
  DWORD1(v53) = MulFD6(v15, v19);
  LOWORD(v53) = 4;
  LODWORD(v54) = -v15;
  *((_QWORD *)&v54 + 1) = v42;
  DWORD1(v54) = v42 - v40;
  DWORD2(v53) = v14;
  v55 = -v40;
  v56 = HIDWORD(v41);
  v20 = MulDivFD6Pairs((int *)&v53);
  HIDWORD(v53) = v17;
  v21 = v20;
  DWORD1(v54) = v40 - v41;
  v55 = v40;
  DWORD2(v54) = -(int)v41;
  v56 = v38;
  v22 = MulDivFD6Pairs((int *)&v53);
  HIDWORD(v53) = v18;
  v23 = v22;
  DWORD1(v54) = v41 - v42;
  *((_QWORD *)&v54 + 1) = v41;
  v55 = -(int)v42;
  v24 = MulDivFD6Pairs((int *)&v53);
  v47 = MulFD6(v41, v21);
  LODWORD(v53) = v47;
  v43 = MulFD6(v42, v23);
  DWORD1(v53) = v43;
  v46 = MulFD6(v40, v24);
  DWORD2(v53) = v46;
  v50 = MulFD6(v38, v21);
  HIDWORD(v53) = v50;
  *(_DWORD *)(a3 + 48) = v50;
  v48 = MulFD6(SHIDWORD(v41), v23);
  LODWORD(v54) = v48;
  *(_DWORD *)(a3 + 52) = v48;
  v49 = MulFD6(SHIDWORD(v42), v24);
  DWORD1(v54) = v49;
  *(_DWORD *)(a3 + 56) = v49;
  LODWORD(v41) = MulFD6(1000000 - v38 - (int)v41, v21);
  DWORD2(v54) = v41;
  v39 = MulFD6(1000000 - HIDWORD(v41) - (int)v42, v23);
  HIDWORD(v54) = v39;
  v25 = MulFD6(1000000 - HIDWORD(v42) - v40, v24);
  v26 = v25 + v39 + v41;
  v27 = v50 + v49 + v48;
  v55 = v25;
  v28 = v47 + v46 + v43;
  v51 = __PAIR64__(v27, v28);
  if ( a4 >= 0 )
  {
    v29 = v25;
  }
  else
  {
    *(_DWORD *)a3 = v47;
    *(_DWORD *)(a3 + 4) = v43;
    *(_DWORD *)(a3 + 8) = v46;
    *(_DWORD *)(a3 + 12) = v50;
    *(_DWORD *)(a3 + 16) = v48;
    *(_DWORD *)(a3 + 20) = v49;
    *(_DWORD *)(a3 + 24) = v41;
    *(_DWORD *)(a3 + 28) = v39;
    *(_DWORD *)(a3 + 32) = v25;
    ComputeInverseMatrix3x3((__int128 *)a3, (__int64)&v53);
    v29 = v55;
  }
  *(_DWORD *)(a3 + 76) = v27;
  v30 = v26;
  v31 = v47 + v46 + v43;
  v32 = v50 + v49 + v48;
  if ( v27 != 1000000 )
  {
    if ( v27 )
    {
      LODWORD(v51) = DivFD6(v28, v27);
      v28 = v51;
      v26 = DivFD6(v26, v27);
      v30 = v26;
      v31 = v51;
    }
    else
    {
      v26 = 0;
      LODWORD(v51) = 0;
      v30 = 0;
      v28 = 0;
      v31 = 0;
    }
    HIDWORD(v51) = 1000000;
    v27 = 1000000;
    v32 = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v33 = 0;
  }
  else
  {
    v34 = v28 + 2 * (v30 + 4 * v27 + v27) + v30 + 4 * v27 + v27;
    v33 = DivFD6(4 * v31, v34);
    v7 = DivFD6(9 * v32, v34);
  }
  v35 = v53;
  v36 = v54;
  *(_DWORD *)(a3 + 68) = v44;
  result = v45;
  *(_OWORD *)a3 = v35;
  *(_DWORD *)(a3 + 60) = v33;
  *(_QWORD *)(a3 + 36) = v51;
  *(_OWORD *)(a3 + 16) = v36;
  *(_DWORD *)(a3 + 44) = v26;
  *(_DWORD *)(a3 + 32) = v29;
  *(_DWORD *)(a3 + 64) = v7;
  *(_DWORD *)(a3 + 72) = v45;
  return result;
}
