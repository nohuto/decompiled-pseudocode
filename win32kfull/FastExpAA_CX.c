/*
 * XREFs of FastExpAA_CX @ 0x1C02630E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int16 *v7; // rsi
  _BYTE *v8; // r11
  __int64 v9; // rbx
  __int64 v10; // r8
  __int16 v11; // r14
  __int64 result; // rax
  __int16 v13; // r12
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v17; // ecx
  int v18; // r15d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // r9d
  int v26; // r11d
  _BYTE *v27; // r10
  int v28; // ebx
  int v29; // eax
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // r12d
  int v35; // r13d
  _BYTE *v36; // r10
  int v37; // eax
  int v38; // ecx
  unsigned int v39; // ecx
  int v40; // ebx
  int v41; // r9d
  int v42; // r8d
  int v43; // edx
  __int16 v44; // [rsp+0h] [rbp-58h]
  __int16 v45; // [rsp+3h] [rbp-55h]
  __int16 v46; // [rsp+6h] [rbp-52h]
  __int16 v47; // [rsp+10h] [rbp-48h]
  __int16 v48; // [rsp+12h] [rbp-46h]
  __int64 v49; // [rsp+18h] [rbp-40h]
  __int64 v50; // [rsp+28h] [rbp-30h]
  unsigned __int64 v51; // [rsp+48h] [rbp-10h]
  char v52; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v53; // [rsp+A8h] [rbp+50h]
  _BYTE *v54; // [rsp+B0h] [rbp+58h]
  _BYTE *v55; // [rsp+B0h] [rbp+58h]
  _BYTE *v56; // [rsp+B8h] [rbp+60h]

  v56 = a4;
  v5 = *(_QWORD *)(a1 + 96);
  v7 = *(unsigned __int16 **)(a1 + 88);
  v8 = a4;
  v9 = a5;
  v51 = v5;
  v10 = a2 + *(unsigned __int8 *)(a1 + 80) + 2LL * *(unsigned __int8 *)(a1 + 80);
  v11 = *(_WORD *)(v10 - 3);
  result = -(__int64)a5;
  LOBYTE(a4) = *(_BYTE *)(v10 - 1);
  v13 = *(_WORD *)v10;
  LOBYTE(v14) = *(_BYTE *)(v10 + 2);
  v15 = v10 + 3;
  v16 = v8 - a3;
  v49 = v16;
  while ( (unsigned __int64)v7 < v5 )
  {
    v17 = *v7;
    v44 = v11;
    result = v16 / v9;
    ++v7;
    v18 = (unsigned __int8)a4;
    LODWORD(a4) = (unsigned __int8)v14;
    v14 = *(unsigned __int8 *)(v15 + 2);
    v11 = v13;
    if ( v17 > (unsigned int)(v16 / v9) )
      v17 = v16 / v9;
    v47 = v13;
    v45 = v13;
    v13 = *(_WORD *)v15;
    v15 += 3LL;
    v52 = (char)a4;
    v48 = v13;
    v46 = v13;
    v53 = v14;
    v50 = v15;
    v19 = v17 - 1;
    if ( !v19 )
    {
      a3[2] = (unsigned int)(v18 + v14 + 2 * ((_DWORD)a4 + 2 * (v18 + (_DWORD)a4 + v14 + 4 * ((_DWORD)a4 + 1)))) >> 5;
      a3[1] = (HIBYTE(v44)
             + HIBYTE(v13)
             + 2 * (HIBYTE(v45) + 8 + 2 * (HIBYTE(v44) + HIBYTE(v45) + HIBYTE(v13) + 4 * (unsigned int)HIBYTE(v45)))) >> 5;
      result = (unsigned __int8)v45
             + 2
             * ((unsigned __int8)v44
              + (unsigned __int8)v45
              + (unsigned __int8)v13
              + 4 * ((unsigned int)(unsigned __int8)v45 + 1));
      v33 = (unsigned __int8)v44 + (unsigned __int8)v13 + 2 * result;
LABEL_15:
      v39 = v33 >> 5;
      goto LABEL_16;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v41 = 3 * (_DWORD)a4;
      v16 -= a5;
      a3[2] = (unsigned int)(v41 + v18 + 2) >> 2;
      v42 = 3 * HIBYTE(v45);
      v43 = 3 * (unsigned __int8)v45;
      result = HIBYTE(v13);
      a3[1] = (v42 + (unsigned int)HIBYTE(v44) + 2) >> 2;
      *a3 = (v43 + (unsigned int)(unsigned __int8)v44 + 2) >> 2;
      a3 += v9;
      a3[2] = (unsigned int)(v41 + v14 + 2) >> 2;
      a3[1] = ((unsigned int)HIBYTE(v13) + v42 + 2) >> 2;
      v39 = (v43 + (unsigned int)(unsigned __int8)v13 + 2) >> 2;
LABEL_16:
      LOBYTE(a4) = v52;
      goto LABEL_17;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v40 = 2 * (unsigned __int8)v45;
      a3[2] = (unsigned int)(v18 + (_DWORD)a4 + 2 * (2 * (_DWORD)a4 + v18 + 2)) >> 3;
      v14 = 2 * HIBYTE(v45);
      a3[1] = (HIBYTE(v44) + HIBYTE(v45) + 2 * (v14 + (unsigned int)HIBYTE(v44) + 2)) >> 3;
      *a3 = ((unsigned __int8)v44 + (unsigned __int8)v45 + 2 * (v40 + (unsigned int)(unsigned __int8)v44 + 2)) >> 3;
      v55 = &a3[a5];
      v55[2] = (v53 + 14 * (int)a4 + v18 + 8) >> 4;
      v55[1] = (HIBYTE(v13) + 14 * HIBYTE(v45) + HIBYTE(v44) + 8) >> 4;
      *v55 = ((unsigned __int8)v13 + 14 * (unsigned __int8)v45 + (unsigned __int8)v44 + 8) >> 4;
      v16 = v49 - 2LL * a5;
      a3 = &v55[a5];
      a3[2] = ((unsigned int)a4 + v53 + 2 * (2 * (_DWORD)a4 + v53 + 2)) >> 3;
      result = v40 + (unsigned int)(unsigned __int8)v13;
      a3[1] = (HIBYTE(v45) + HIBYTE(v13) + 2 * (v14 + (unsigned int)HIBYTE(v13) + 2)) >> 3;
      v9 = a5;
      LOBYTE(v14) = v53;
      v11 = v47;
      v39 = ((unsigned __int8)v45 + 4 + (unsigned int)(unsigned __int8)v13 + 2 * (_DWORD)result) >> 3;
      goto LABEL_16;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v34 = 2 * (unsigned __int8)v45;
      a3[2] = (unsigned int)(v18 + (_DWORD)a4 + 2 * (v18 + 2 * (_DWORD)a4 + 2)) >> 3;
      v35 = 2 * HIBYTE(v45);
      a3[1] = (HIBYTE(v44) + HIBYTE(v45) + 2 * (v35 + (unsigned int)HIBYTE(v44) + 2)) >> 3;
      *a3 = ((unsigned __int8)v44 + (unsigned __int8)v45 + 2 * (v34 + (unsigned int)(unsigned __int8)v44 + 2)) >> 3;
      v36 = &a3[v9];
      v36[2] = (unsigned int)(4 * (_DWORD)a4 + v18 + 8 + v14 + 2 * (4 * (_DWORD)a4 + v18)) >> 4;
      v36[1] = (HIBYTE(v44) + 4 * HIBYTE(v45) + 8 + HIBYTE(v46) + 2 * (HIBYTE(v44) + 4 * (unsigned int)HIBYTE(v45))) >> 4;
      *v36 = ((unsigned __int8)v44
            + 4 * (unsigned __int8)v45
            + 8
            + (unsigned __int8)v46
            + 2 * ((unsigned __int8)v44 + 4 * (unsigned int)(unsigned __int8)v45)) >> 4;
      v54 = &v36[a5];
      v54[2] = (unsigned int)(4 * (_DWORD)a4 + v14 + 8 + v18 + 2 * (4 * (_DWORD)a4 + v14)) >> 4;
      v54[1] = (HIBYTE(v46) + 4 * HIBYTE(v45) + 8 + HIBYTE(v44) + 2 * (HIBYTE(v46) + 4 * (unsigned int)HIBYTE(v45))) >> 4;
      *v54 = ((unsigned __int8)v46
            + 4 * (unsigned __int8)v45
            + 8
            + (unsigned __int8)v44
            + 2 * ((unsigned __int8)v46 + 4 * (unsigned int)(unsigned __int8)v45)) >> 4;
      a3 = &v54[a5];
      v11 = v47;
      a3[2] = ((unsigned __int8)a4 + v14 + 2 * (v14 + 2 * (unsigned int)(unsigned __int8)a4 + 2)) >> 3;
      v9 = a5;
      v37 = v34 + (unsigned __int8)v46 + 2;
      a3[1] = (HIBYTE(v45) + HIBYTE(v46) + 2 * (v35 + (unsigned int)HIBYTE(v46) + 2)) >> 3;
      v13 = v48;
      v38 = (unsigned __int8)v46 + 2 * v37;
      result = (unsigned __int8)v45;
      v16 = v49 - 2LL * a5 - a5;
      v39 = ((unsigned int)(unsigned __int8)v45 + v38) >> 3;
LABEL_17:
      v15 = v50;
      *a3 = v39;
      goto LABEL_18;
    }
    if ( v22 == 1 )
    {
      v23 = (int)a4;
      v24 = 19 * (_DWORD)a4;
      v25 = (unsigned __int8)v11;
      v26 = 25 * HIBYTE(v45);
      a3[2] = (unsigned int)(13 * v18 + 16 + v24) >> 5;
      a3[1] = (13 * HIBYTE(v44) + 16 + 19 * (unsigned int)HIBYTE(v45)) >> 5;
      *a3 = (13 * (unsigned __int8)v44 + 16 + 19 * (unsigned int)(unsigned __int8)v11) >> 5;
      v27 = &a3[v9];
      v28 = 25 * v23;
      v27[2] = (unsigned int)(v14 + 25 * v23 + 2 * (v18 + 2 * v18 + 8)) >> 5;
      v27[1] = (v26 + 6 * HIBYTE(v44) + (unsigned int)HIBYTE(v13) + 16) >> 5;
      *v27 = ((unsigned __int8)v13 + 6 * (unsigned __int8)v44 + 25 * (unsigned int)(unsigned __int8)v11 + 16) >> 5;
      v29 = 13 * v23;
      v30 = &v27[a5];
      v30[2] = (unsigned int)(v18 + v14 + 2 * (v18 + v14 + v29 + 8)) >> 5;
      v30[1] = (HIBYTE(v44) + HIBYTE(v13) + 2 * (HIBYTE(v44) + HIBYTE(v13) + 13 * (unsigned int)HIBYTE(v45) + 8)) >> 5;
      *v30 = ((unsigned __int8)v44
            + (unsigned __int8)v13
            + 2 * ((unsigned __int8)v44 + (unsigned __int8)v13 + 13 * (unsigned int)(unsigned __int8)v11 + 8)) >> 5;
      v31 = &v30[a5];
      v32 = v28 + 2 * (v14 + 2 * (v14 + 4));
      v9 = a5;
      v31[2] = (unsigned int)(v18 + v32) >> 5;
      v31[1] = (v26 + 6 * HIBYTE(v13) + (unsigned int)HIBYTE(v44) + 16) >> 5;
      a3 = &v31[a5];
      *v31 = ((unsigned __int8)v44 + 6 * (unsigned __int8)v13 + 25 * (unsigned int)(unsigned __int8)v11 + 16) >> 5;
      v16 = v49 - 4LL * a5;
      v11 = v47;
      a3[2] = (unsigned int)(13 * v14 + v24 + 16) >> 5;
      result = 13 * (unsigned int)(unsigned __int8)v13;
      a3[1] = (13 * HIBYTE(v13) + 19 * (unsigned int)HIBYTE(v45) + 16) >> 5;
      v33 = result + 19 * v25 + 16;
      goto LABEL_15;
    }
LABEL_18:
    v16 -= a5;
    a3 += v9;
    v5 = v51;
    v49 = v16;
    if ( a3 == v56 )
      return result;
  }
  return result;
}
