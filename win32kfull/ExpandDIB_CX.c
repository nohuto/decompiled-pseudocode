__int64 __fastcall ExpandDIB_CX(__int128 *a1, __int16 *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int v8; // r11d
  __int64 v9; // rcx
  __int16 v10; // r9
  char v11; // di
  __int64 v12; // r10
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // r9d
  __int128 v16; // xmm0
  int v17; // edi
  __int16 v18; // ax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  _BYTE *v23; // rax
  __int64 v24; // r9
  __int16 v25; // r11
  _BYTE *v26; // rcx
  __int64 *v27; // rdi
  _BYTE *v28; // r13
  __int64 v29; // rax
  unsigned __int16 v30; // r11
  __int128 v31; // xmm0
  int v32; // edx
  __int16 v33; // ax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // edx
  int v38; // r8d
  int v39; // r9d
  int v40; // r14d
  int v41; // r15d
  int v42; // r12d
  __int64 v43; // [rsp+0h] [rbp-100h]
  __int128 v44; // [rsp+10h] [rbp-F0h]
  __int128 v45; // [rsp+30h] [rbp-D0h]
  _BYTE v46[24]; // [rsp+100h] [rbp+0h] BYREF

  v44 = *a1;
  v45 = a1[2];
  result = 0LL;
  memset(v46, 0, sizeof(v46));
  if ( !a2 )
    return result;
  v8 = 1;
  v9 = (__int64)&a2[(int)v44 + 3] + (int)v44;
  *(_WORD *)(v9 - 6) = *(_WORD *)(v9 - 9);
  *(_BYTE *)(v9 - 4) = *(_BYTE *)(v9 - 7);
  *(_WORD *)(v9 - 3) = *(_WORD *)(v9 - 6);
  *(_BYTE *)(v9 - 1) = *(_BYTE *)(v9 - 4);
  *(_WORD *)v9 = *(_WORD *)(v9 - 3);
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 - 1);
  v10 = *a2;
  v11 = *((_BYTE *)a2 + 2);
  *(_WORD *)&v46[15] = *a2;
  v46[17] = v11;
  v12 = (__int64)&a2[BYTE8(v44) & 1] + (BYTE8(v44) & 1);
  *(_WORD *)&v46[18] = *(_WORD *)v12;
  v46[20] = *(_BYTE *)(v12 + 2);
  v13 = WORD6(v44) >> 4;
  v14 = BYTE12(v44) & 0xF;
  if ( !v14 && v13 )
  {
    *(_WORD *)&v46[18] = v10;
    --v13;
    v15 = 3;
    v46[20] = v11;
    goto LABEL_6;
  }
  v12 += 3LL;
  v15 = 4 - v14;
  v8 = BYTE12(v44) & 0xF;
  if ( v14 )
  {
    do
    {
LABEL_6:
      --v8;
      v16 = *(_OWORD *)&v46[3];
      v17 = *(unsigned __int8 *)(v12 + 2);
      *(_WORD *)&v46[16] = *(_WORD *)&v46[19];
      v18 = *(_WORD *)v12;
      v12 += 3LL;
      *(_WORD *)&v46[18] = v18;
      v46[20] = v17;
      *(_OWORD *)v46 = v16;
      if ( (BYTE8(v44) & 4) != 0 )
      {
        *(_WORD *)&v46[9] = *(_WORD *)&v46[15];
        v46[11] = v46[17];
      }
      else
      {
        v19 = (6 * v46[15] - v46[18] - v46[12]) >> 2;
        if ( (v19 & 0xFF00) != 0 )
          LOBYTE(v19) = ~HIBYTE(v19);
        v46[9] = v19;
        v20 = (6 * v46[16] - v46[19] - v46[13]) >> 2;
        if ( (v20 & 0xFF00) != 0 )
          LOBYTE(v20) = ~HIBYTE(v20);
        v46[10] = v20;
        v21 = (6 * v46[17] - v17 - v46[14]) >> 2;
        if ( (v21 & 0xFF00) != 0 )
          LOBYTE(v21) = ~HIBYTE(v21);
        v46[11] = v21;
      }
    }
    while ( v8 );
  }
  v22 = v15;
  v23 = &v46[v15];
  v24 = v15 - 1;
  v25 = *(_WORD *)&v23[2 * v22];
  *(_WORD *)&v46[21] = v25;
  v46[23] = v23[2 * v22 + 2];
  if ( v13 )
  {
    while ( 1 )
    {
      v26 = &v46[(unsigned int)v24];
      *(_WORD *)&v26[2 * v24] = v25;
      v26[2 * v24 + 2] = v46[23];
      v24 = (unsigned int)(v24 - 1);
      if ( !--v13 )
        break;
      v25 = *(_WORD *)&v46[21];
    }
  }
  v27 = (__int64 *)*((_QWORD *)&v45 + 1);
  v28 = (_BYTE *)(a5 + a4);
  do
  {
    v29 = *v27++;
    v43 = v29;
    v30 = v29;
    if ( (v29 & 0x8000u) != 0LL )
    {
      v31 = *(_OWORD *)&v46[3];
      v32 = *(unsigned __int8 *)(v12 + 2);
      *(_WORD *)&v46[16] = *(_WORD *)&v46[19];
      v33 = *(_WORD *)v12;
      v12 += 3LL;
      *(_OWORD *)v46 = v31;
      *(_WORD *)&v46[18] = v33;
      v46[20] = v32;
      if ( (BYTE8(v44) & 4) != 0 )
      {
        *(_WORD *)&v46[9] = *(_WORD *)&v46[15];
        v46[11] = v46[17];
      }
      else
      {
        v34 = (6 * v46[15] - v46[18] - v46[12]) >> 2;
        if ( (v34 & 0xFF00) != 0 )
          LOBYTE(v34) = ~HIBYTE(v34);
        v46[9] = v34;
        v35 = (6 * v46[16] - v46[19] - v46[13]) >> 2;
        if ( (v35 & 0xFF00) != 0 )
          LOBYTE(v35) = ~HIBYTE(v35);
        v46[10] = v35;
        v36 = (6 * v46[17] - v32 - v46[14]) >> 2;
        if ( (v36 & 0xFF00) != 0 )
          LOBYTE(v36) = ~HIBYTE(v36);
        v46[11] = v36;
      }
      v30 &= 0x3FFFu;
    }
    v37 = HIWORD(v43) * v46[11];
    v38 = HIWORD(v43) * v46[10];
    v39 = HIWORD(v43) * v46[9];
    if ( WORD2(v43) )
    {
      v40 = v37 + WORD2(v43) * v46[8];
      v41 = v38 + WORD2(v43) * v46[7];
      v37 = v40;
      v42 = v39 + WORD2(v43) * v46[6];
      v38 = v41;
      v39 = v42;
      if ( WORD1(v43) )
      {
        v37 = v40 + WORD1(v43) * v46[5];
        v38 = v41 + WORD1(v43) * v46[4];
        v39 = v42 + WORD1(v43) * v46[3];
        if ( v30 )
        {
          v37 += v30 * v46[2];
          v38 += v30 * v46[1];
          v39 += v30 * v46[0];
        }
      }
    }
    a3[2] = (unsigned int)(v37 + 4096) >> 13;
    a3[1] = (unsigned int)(v38 + 4096) >> 13;
    result = (unsigned int)(v39 + 4096) >> 13;
    *a3 = result;
    a3 += a5;
  }
  while ( a3 != v28 );
  return result;
}
