_OWORD *__fastcall GrayExpandDIB_CX(__int128 *a1, char *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char v16; // al
  char v17; // cl
  char *v18; // r10
  int v19; // edx
  int v20; // r9d
  unsigned int v21; // r8d
  int v22; // ebx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r8
  char v26; // cl
  __int64 *v27; // r9
  _BYTE *v28; // rsi
  __int64 v29; // rax
  unsigned __int16 v30; // r8
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  __int128 v34; // [rsp+10h] [rbp-F0h]
  __int64 *v35; // [rsp+38h] [rbp-C8h]
  _OWORD v36[7]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+100h] [rbp+0h]

  v34 = *a1;
  v6 = a1[2];
  v37 = 0LL;
  v35 = (__int64 *)*((_QWORD *)&v6 + 1);
  result = v36;
  v9 = a1 + 8;
  v10 = v9[1];
  v36[0] = *v9;
  v11 = v9[2];
  v36[1] = v10;
  v12 = v9[3];
  v36[2] = v11;
  v13 = v9[4];
  v36[3] = v12;
  v14 = v9[5];
  v36[4] = v13;
  v15 = v9[6];
  v36[5] = v14;
  v36[6] = v15;
  if ( !a2 )
    return result;
  v16 = a2[(int)v34 - 1];
  a2[(int)v34] = v16;
  a2[(int)v34 + 1] = v16;
  a2[(int)v34 + 2] = v16;
  v17 = *a2;
  v18 = &a2[BYTE8(v34) & 1];
  BYTE5(v37) = *a2;
  BYTE6(v37) = *v18;
  v19 = WORD6(v34) >> 4;
  v20 = BYTE12(v34) & 0xF;
  if ( !v20 && v19 )
  {
    BYTE6(v37) = v17;
    v20 = 1;
    --v19;
    v21 = 3;
    goto LABEL_6;
  }
  ++v18;
  v21 = 4 - v20;
  while ( v20 )
  {
LABEL_6:
    --v20;
    v22 = (unsigned __int8)*v18++;
    LODWORD(v37) = *(_DWORD *)((char *)&v37 + 1);
    WORD2(v37) = *(_WORD *)((char *)&v37 + 5);
    BYTE6(v37) = v22;
    if ( (BYTE8(v34) & 4) != 0 )
    {
      BYTE3(v37) = BYTE5(v37);
    }
    else
    {
      v23 = (6 * BYTE5(v37) - v22 - BYTE4(v37)) >> 2;
      if ( (v23 & 0xFF00) != 0 )
        LOBYTE(v23) = ~HIBYTE(v23);
      BYTE3(v37) = v23;
    }
  }
  v24 = v21;
  v25 = v21 - 1;
  v26 = *((_BYTE *)&v37 + v24);
  HIBYTE(v37) = v26;
  if ( v19 )
  {
    while ( 1 )
    {
      *((_BYTE *)&v37 + v25) = v26;
      v25 = (unsigned int)(v25 - 1);
      if ( !--v19 )
        break;
      v26 = HIBYTE(v37);
    }
  }
  v27 = v35;
  v28 = (_BYTE *)(a5 + a4);
  do
  {
    v29 = *v27++;
    v30 = v29;
    if ( (v29 & 0x8000u) != 0LL )
    {
      v31 = (unsigned __int8)*v18++;
      LODWORD(v37) = *(_DWORD *)((char *)&v37 + 1);
      WORD2(v37) = *(_WORD *)((char *)&v37 + 5);
      BYTE6(v37) = v31;
      if ( (BYTE8(v34) & 4) != 0 )
      {
        BYTE3(v37) = BYTE5(v37);
      }
      else
      {
        v32 = (6 * BYTE5(v37) - v31 - BYTE4(v37)) >> 2;
        if ( (v32 & 0xFF00) != 0 )
          LOBYTE(v32) = ~HIBYTE(v32);
        BYTE3(v37) = v32;
      }
      v30 = v29 & 0x3FFF;
    }
    v33 = BYTE3(v37) * HIWORD(v29);
    if ( WORD2(v29) )
    {
      v33 += WORD2(v29) * BYTE2(v37);
      if ( WORD1(v29) )
      {
        v33 += WORD1(v29) * BYTE1(v37);
        if ( v30 )
          v33 += v30 * (unsigned __int8)v37;
      }
    }
    result = (_OWORD *)((unsigned int)(v33 + 4096) >> 13);
    *a3 = (_BYTE)result;
    a3 += a5;
  }
  while ( a3 != v28 );
  return result;
}
