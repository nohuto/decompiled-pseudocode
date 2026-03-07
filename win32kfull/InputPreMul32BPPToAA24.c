_BYTE *__fastcall InputPreMul32BPPToAA24(char *a1, _BYTE *a2)
{
  __int64 v4; // rax
  _BYTE *v5; // r12
  _BYTE *v6; // r11
  __int64 v7; // r15
  unsigned __int8 *v8; // r9
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned __int8 *v17; // rbp
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  char v22; // cl
  int v23; // eax
  int v24; // eax
  __int64 v26; // [rsp+20h] [rbp-28h]

  v4 = SGDGetSessionState(a1);
  v5 = a2;
  v6 = &a2[*((int *)a1 + 14)];
  v7 = *(_QWORD *)(v4 + 48);
  v8 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v26 = *((_QWORD *)a1 + 8);
  if ( (*a1 & 4) != 0 )
  {
    v9 = *((_QWORD *)a1 + 1);
    do
    {
      v10 = *(_DWORD *)(v7 + 4LL * v8[3] + 80);
      v11 = *(_DWORD *)(v9 + 4 * ((unsigned __int64)(v10 * (unsigned int)v8[1] + 0x800000) >> 24) + 1024)
          + *(_DWORD *)(v9 + 4 * ((unsigned __int64)(v10 * (unsigned int)v8[2] + 0x800000) >> 24) + 2048);
      v12 = *v8;
      v8 += 4;
      *a2++ = (unsigned __int16)(*(_WORD *)(v9 + 4 * ((unsigned __int64)(unsigned int)(v10 * v12 + 0x800000) >> 24))
                               + v11) >> 8;
    }
    while ( a2 < v6 );
  }
  else if ( (v26 & 4) != 0 )
  {
    do
    {
      v13 = *(_DWORD *)(v7 + 4LL * v8[3] + 80);
      v14 = *v8;
      v8 += 4;
      *a2 = (unsigned int)(v13 * v14 + 0x800000) >> 24;
      a2[1] = (v13 * (unsigned int)*(v8 - 3) + 0x800000) >> 24;
      a2[2] = (v13 * (unsigned int)*(v8 - 2) + 0x800000) >> 24;
      a2 += 3;
    }
    while ( a2 < v6 );
  }
  else if ( (v26 & 8) != 0 )
  {
    do
    {
      v15 = *(_DWORD *)(v7 + 4LL * v8[3] + 80);
      v16 = *v8;
      v8 += 4;
      a2[2] = (unsigned int)(v15 * v16 + 0x800000) >> 24;
      a2[1] = (v15 * (unsigned int)*(v8 - 3) + 0x800000) >> 24;
      *a2 = (v15 * (unsigned int)*(v8 - 2) + 0x800000) >> 24;
      a2 += 3;
    }
    while ( a2 < v6 );
  }
  else
  {
    v17 = &v8[BYTE4(v26)];
    do
    {
      v18 = v17[BYTE3(v26) - (unsigned __int64)BYTE4(v26)];
      v19 = v17[BYTE2(v26) - (unsigned __int64)BYTE4(v26)];
      v20 = *(_DWORD *)(v7 + 4LL * v17[3LL - BYTE4(v26)] + 80);
      v21 = *v17;
      v17 += 4;
      *a2 = (unsigned int)(v20 * v21 + 0x800000) >> 24;
      a2[1] = (unsigned int)(v20 * v18 + 0x800000) >> 24;
      a2[2] = (unsigned int)(v20 * v19 + 0x800000) >> 24;
      a2 += 3;
    }
    while ( a2 < v6 );
  }
  v22 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v23 = *((_DWORD *)a1 + 13);
    if ( v23 && (v24 = v23 - 1, (*((_DWORD *)a1 + 13) = v24) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v22 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v22 & 0xFD;
    }
  }
  return v5;
}
