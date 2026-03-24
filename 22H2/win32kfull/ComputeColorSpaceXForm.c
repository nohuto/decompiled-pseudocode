/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C011ACE4
 * Callers:
 *     pDCIAdjClr @ 0x1C001C170 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C001C03C (MulFD6.c)
 *     DivFD6 @ 0x1C001CD3C (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C011B080 (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C011B23C (ComputeInverseMatrix3x3.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v4; // edi
  int v6; // r11d
  int v7; // r12d
  int v8; // r10d
  int v10; // r8d
  int v11; // r9d
  int v12; // ebx
  int v13; // eax
  int v14; // r14d
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // esi
  int v24; // edi
  int v25; // ebx
  int v26; // eax
  int v27; // esi
  int v28; // edi
  int v29; // r14d
  int v30; // r13d
  int v31; // esi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 result; // rax
  int v35; // ebx
  int v36; // [rsp+20h] [rbp-59h]
  int v37; // [rsp+20h] [rbp-59h]
  int v38; // [rsp+24h] [rbp-55h]
  int v39; // [rsp+24h] [rbp-55h]
  int v40; // [rsp+28h] [rbp-51h]
  int v41; // [rsp+2Ch] [rbp-4Dh]
  int v42; // [rsp+30h] [rbp-49h]
  int v43; // [rsp+30h] [rbp-49h]
  int v44; // [rsp+34h] [rbp-45h]
  int v45; // [rsp+38h] [rbp-41h]
  int v46; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v47; // [rsp+40h] [rbp-39h]
  int v48; // [rsp+44h] [rbp-35h]
  int v49; // [rsp+48h] [rbp-31h]
  int v50; // [rsp+4Ch] [rbp-2Dh]
  int v51; // [rsp+50h] [rbp-29h]
  unsigned __int64 v52; // [rsp+58h] [rbp-21h]
  __int128 v54; // [rsp+70h] [rbp-9h] BYREF
  __int128 v55; // [rsp+80h] [rbp+7h]
  int v56; // [rsp+90h] [rbp+17h]
  int v57; // [rsp+94h] [rbp+1Bh]

  v4 = *a2;
  v6 = a2[1];
  v7 = 0;
  v8 = a2[3];
  v10 = a2[2];
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[8];
  v42 = *a2;
  v38 = v6;
  v36 = v10;
  v41 = v8;
  v40 = v11;
  v44 = v12;
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
  *(_QWORD *)((char *)&v54 + 4) = __PAIR64__(v4, v13);
  v16 = v8 - v12;
  v47 = v15;
  v46 = v14;
  v17 = v12 - v6;
  LODWORD(v54) = 65539;
  v18 = v6 - v8;
  HIDWORD(v54) = v16;
  *(_QWORD *)&v55 = __PAIR64__(v17, v10);
  DWORD2(v55) = v11;
  HIDWORD(v55) = v6 - v8;
  v19 = MulDivFD6Pairs(&v54);
  DWORD1(v54) = MulFD6(v15, v19);
  LOWORD(v54) = 4;
  LODWORD(v55) = -v15;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v44, v36);
  DWORD1(v55) = v36 - v40;
  DWORD2(v54) = v14;
  v56 = -v40;
  v57 = v41;
  v20 = MulDivFD6Pairs(&v54);
  HIDWORD(v54) = v17;
  v21 = v20;
  DWORD1(v55) = v40 - v42;
  v56 = v40;
  DWORD2(v55) = -v42;
  v57 = v38;
  v22 = MulDivFD6Pairs(&v54);
  HIDWORD(v54) = v18;
  v23 = v22;
  DWORD1(v55) = v42 - v36;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v41, v42);
  v56 = -v36;
  v24 = v42;
  v25 = MulDivFD6Pairs(&v54);
  v48 = MulFD6(v42, v21);
  LODWORD(v54) = v48;
  v45 = MulFD6(v36, v23);
  DWORD1(v54) = v45;
  v43 = MulFD6(v40, v25);
  DWORD2(v54) = v43;
  v51 = MulFD6(v38, v21);
  HIDWORD(v54) = v51;
  *(_DWORD *)(a3 + 48) = v51;
  v49 = MulFD6(v41, v23);
  LODWORD(v55) = v49;
  *(_DWORD *)(a3 + 52) = v49;
  v50 = MulFD6(v44, v25);
  DWORD1(v55) = v50;
  *(_DWORD *)(a3 + 56) = v50;
  v39 = MulFD6(1000000 - v38 - v24, v21);
  DWORD2(v55) = v39;
  v37 = MulFD6(1000000 - v41 - v36, v23);
  HIDWORD(v55) = v37;
  v26 = MulFD6(1000000 - v44 - v40, v25);
  v27 = v48 + v43 + v45;
  v28 = v51 + v50 + v49;
  v56 = v26;
  v29 = v39 + v26 + v37;
  v52 = __PAIR64__(v28, v27);
  if ( a4 >= 0 )
  {
    v30 = v26;
  }
  else
  {
    *(_DWORD *)a3 = v48;
    *(_DWORD *)(a3 + 4) = v45;
    *(_DWORD *)(a3 + 8) = v43;
    *(_DWORD *)(a3 + 12) = v51;
    *(_DWORD *)(a3 + 16) = v49;
    *(_DWORD *)(a3 + 20) = v50;
    *(_DWORD *)(a3 + 24) = v39;
    *(_DWORD *)(a3 + 28) = v37;
    *(_DWORD *)(a3 + 32) = v26;
    ComputeInverseMatrix3x3(a3, &v54);
    v30 = v56;
  }
  *(_DWORD *)(a3 + 76) = v28;
  if ( v28 != 1000000 )
  {
    if ( v28 )
    {
      LODWORD(v52) = DivFD6(v27, v28);
      v27 = v52;
      v29 = DivFD6(v29, v28);
    }
    else
    {
      v29 = 0;
      LODWORD(v52) = 0;
      v27 = 0;
    }
    v28 = 1000000;
    HIDWORD(v52) = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v31 = 0;
  }
  else
  {
    v35 = v27 + 2 * (v28 + v29 + 4 * v28) + v28 + v29 + 4 * v28;
    v31 = DivFD6(4 * v27, v35);
    v7 = DivFD6(9 * v28, v35);
  }
  v32 = v54;
  v33 = v55;
  *(_DWORD *)(a3 + 68) = v46;
  result = v47;
  *(_OWORD *)a3 = v32;
  *(_DWORD *)(a3 + 60) = v31;
  *(_QWORD *)(a3 + 36) = v52;
  *(_OWORD *)(a3 + 16) = v33;
  *(_DWORD *)(a3 + 44) = v29;
  *(_DWORD *)(a3 + 32) = v30;
  *(_DWORD *)(a3 + 64) = v7;
  *(_DWORD *)(a3 + 72) = v47;
  return result;
}
