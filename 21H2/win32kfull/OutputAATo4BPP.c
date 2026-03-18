/*
 * XREFs of OutputAATo4BPP @ 0x1C0261940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo4BPP(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int16 *v10; // rbp
  int v12; // ecx
  char v14; // edi^2
  unsigned int v15; // r9d
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned __int8 *v18; // r14
  char v19; // r13d^2
  char v20; // esi^2
  char v21; // ebx^2
  char v22; // di
  char v23; // r11
  char v24; // r9
  char v25; // bl
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  bool v29; // zf
  int v30; // edx
  char v31; // si
  char v32; // r11
  unsigned int v34; // [rsp+0h] [rbp-68h]
  unsigned int v35; // [rsp+8h] [rbp-60h]
  __int128 v36; // [rsp+18h] [rbp-50h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  char v38; // [rsp+72h] [rbp+Ah]
  unsigned __int64 v39; // [rsp+80h] [rbp+18h]

  v39 = a3;
  v10 = a6;
  v12 = 0;
  v36 = *(_OWORD *)(a5 - 24);
  v37 = *(_QWORD *)(a5 - 8);
  v14 = BYTE6(v37);
  v15 = HIDWORD(v36);
  if ( BYTE1(a9) )
    v12 = 2003830647;
  v38 = BYTE2(v12);
  v16 = v37;
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v16 = v37;
      *a4 = *a4 & 0xF0 | (BYTE1(a9) != 0 ? 7 : 0) ^ (BYTE14(v36) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * a2[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * a2[2] + 2048) - (unsigned int)a6[2]) >> 16));
      v15 = HIDWORD(v36);
    }
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  LODWORD(v17) = *a1;
  v18 = a2 + 4;
  v19 = BYTE10(v36);
  v20 = BYTE6(v36);
  v21 = BYTE2(v36);
  if ( (v17 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v18 >= a3 )
        goto LABEL_15;
      LODWORD(v17) = v18[3] & 2;
      if ( (unsigned int)v17 | v18[7] & 1 )
        break;
LABEL_27:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v17) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v18 += 8;
    }
    v28 = (v17 | v18[7] & 1) - 1;
    if ( ((unsigned int)v17 | v18[7] & 1) == 1 )
    {
      v32 = BYTE1(v12) ^ (BYTE14(v36) & ((*(_DWORD *)(a5 + 4LL * v18[4]) - (unsigned int)*v10) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * v18[5] + 1024) - (unsigned int)v10[1]) >> 16) | v14 & ((*(_DWORD *)(a5 + 4LL * v18[6] + 2048) - (unsigned int)v10[2]) >> 16));
      LOBYTE(v17) = *a4 & 0xF0;
    }
    else
    {
      v17 = v18[2];
      v29 = v28 == 1;
      v30 = v10[2];
      if ( !v29 )
      {
        v31 = BYTE10(v36) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v17 + 2048) - v30) >> 16) | BYTE14(v36) & ((*(_DWORD *)(a5 + 4LL * v18[4]) - (unsigned int)v10[3]) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * v18[5] + 1024) - (unsigned int)v10[4]) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * v18[6] + 2048) - (unsigned int)v10[5]) >> 16);
        v14 = BYTE6(v37);
        v21 = BYTE2(v36);
        LODWORD(v17) = WORD1(v36);
        *a4 = v12 ^ (BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v10) >> 16) | BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v10[1]) >> 16) | v31);
        v20 = BYTE6(v36);
LABEL_26:
        a3 = v39;
        goto LABEL_27;
      }
      v32 = BYTE2(v12) ^ (v21 & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v10) >> 16) | v20 & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v10[1]) >> 16) | BYTE10(v36) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v17 + 2048) - v30) >> 16));
      LOBYTE(v17) = *a4 & 0xF;
    }
    *a4 = v17 | v32;
    goto LABEL_26;
  }
  if ( (unsigned __int64)v18 < a3 )
  {
    v34 = HIWORD(v15);
    v35 = HIWORD(v16);
    do
    {
      v22 = BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * v18[6] + 2048) - (unsigned int)v10[5]) >> 16);
      v23 = v35 & ((*(_DWORD *)(a5 + 4LL * v18[5] + 1024) - (unsigned int)v10[4]) >> 16);
      v24 = BYTE10(v36) & ((*(_DWORD *)(a5 + 4LL * v18[2] + 2048) - (unsigned int)v10[2]) >> 16);
      v25 = BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v10[1]) >> 16);
      v17 = *v18;
      v26 = *(_DWORD *)(a5 + 4LL * v18[4]) - v10[3];
      v27 = *v10;
      v10 += 6;
      *a4++ = (BYTE1(a9) != 0 ? 0x77 : 0) ^ (v25 | BYTE2(v36) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v17) - v27) >> 16) | v23 | v24 | v34 & BYTE2(v26) | v22);
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v17) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v18 += 8;
    }
    while ( (unsigned __int64)v18 < a3 );
    v19 = BYTE10(v36);
  }
LABEL_15:
  if ( BYTE3(a9) && v18[3] )
  {
    LOBYTE(v17) = *a4 & 0xF;
    *a4 = v17 | v38 ^ (BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v10) >> 16) | v20 & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v10[1]) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * v18[2] + 2048) - (unsigned int)v10[2]) >> 16));
  }
  return v17;
}
