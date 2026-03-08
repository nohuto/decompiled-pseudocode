/*
 * XREFs of ComputeInputColorInfo @ 0x1C025E1C4
 * Callers:
 *     GetDstBFInfo @ 0x1C0253EF0 (GetDstBFInfo.c)
 *     SetupAAHeader @ 0x1C025E588 (SetupAAHeader.c)
 * Callees:
 *     <none>
 */

char __fastcall ComputeInputColorInfo(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int64 v6; // rax
  _BYTE *v7; // rbx
  int v8; // r9d
  _BYTE *v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r11
  __int64 v12; // rbp
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // r10
  __int64 (__fastcall *v19)(); // rax
  __int64 v20; // r8
  __int64 v21; // r11
  int v22; // r10d
  int v23; // edx
  int v24; // r9d
  char v25; // cl
  char v26; // r9
  char v27; // cl
  int v28; // ecx
  bool v29; // sf
  int v30; // edx
  __int64 v31; // rcx

  v6 = a3;
  v7 = (_BYTE *)(a5 + 64);
  if ( a1 )
  {
    v8 = *(unsigned __int16 *)(a5 + 2);
    if ( *(_WORD *)(a5 + 2) )
    {
      v9 = *(_BYTE **)(a5 + 80);
      v10 = BYTE1(SrcOrderTable[v6]);
      v11 = BYTE2(SrcOrderTable[v6]);
      v12 = HIBYTE(SrcOrderTable[v6]);
      if ( *(_BYTE *)(a5 + 65) == 1 )
      {
        v13 = (__int64 (__fastcall *)())Input1BPPToAA24;
        goto LABEL_11;
      }
      if ( *(_BYTE *)(a5 + 65) != 2 )
      {
        if ( *(_BYTE *)(a5 + 65) == 3 || *(unsigned __int8 *)(a5 + 65) == 254 )
        {
          v13 = Input8BPPToAA24;
          goto LABEL_11;
        }
        if ( *(unsigned __int8 *)(a5 + 65) != 255 )
          goto LABEL_12;
      }
      v13 = Input4BPPToAA24;
LABEL_11:
      *(_QWORD *)(a5 + 16) = v13;
LABEL_12:
      v14 = v11;
      v15 = a2;
      v16 = v10 - v14;
      v17 = (_BYTE *)(v14 + a1);
      v18 = v12 - v14;
      do
      {
        v9[2] = v17[v16];
        v9[1] = *v17;
        LOBYTE(v19) = v17[v18];
        v17 += v15;
        *v9 = (_BYTE)v19;
        v9 += 4;
        --v8;
      }
      while ( v8 );
      return (char)v19;
    }
  }
  *(_QWORD *)(a5 + 16) = InputAABFDATAToAA24;
  if ( (*a4 & 1) != 0 )
  {
    *v7 |= 1u;
    *(_BYTE *)(a5 + 66) = a4[21];
    *(_BYTE *)(a5 + 67) = a4[22];
    LOBYTE(v19) = a4[23];
    *(_BYTE *)(a5 + 68) = (_BYTE)v19;
  }
  else
  {
    v19 = (__int64 (__fastcall *)())(a4 + 8);
    v20 = v7 - a4;
    v21 = 3LL;
    do
    {
      v22 = *((unsigned __int8 *)v19 - 4);
      v19 = (__int64 (__fastcall *)())((char *)v19 - 1);
      LOBYTE(v23) = 0;
      v24 = *(unsigned __int8 *)v19;
      if ( (unsigned __int8)v24 < 8u )
      {
        v28 = 8 - v24;
        v26 = -1 << (8 - v24);
        v29 = v22 - v28 < 0;
        v30 = v22 - v28;
        v27 = v22 - v28;
        if ( v29 )
        {
          v23 = -v30;
          v27 = 0;
        }
        else
        {
          LOBYTE(v23) = 0;
        }
      }
      else
      {
        v25 = v24 - 8;
        v26 = -1;
        v27 = v22 + v25;
      }
      *((_BYTE *)v19 + v20 - 3) = v26;
      *((_BYTE *)v19 + v20) = v23;
      *((_BYTE *)v19 + v20 + 3) = v27;
      --v21;
    }
    while ( v21 );
  }
  switch ( a4[1] )
  {
    case 4:
LABEL_28:
      *(_BYTE *)(a5 + 75) = 2;
      return (char)v19;
    case 5:
      if ( a4[20] == 4 )
        *v7 |= 2u;
      *(_BYTE *)(a5 + 75) = 3;
      break;
    case 6:
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
        v31 = *(_QWORD *)(SGDGetSessionState((unsigned int)(unsigned __int8)a4[1] - 6) + 48);
        LOBYTE(v19) = a4[20];
        if ( (_BYTE)v19 )
        {
          if ( (_BYTE)v19 == 4 )
            *v7 |= 4u;
        }
        else
        {
          *v7 |= 8u;
        }
        if ( !*(_DWORD *)(v31 + 80) )
        {
          v19 = InputPreMul32BPPToAA24;
          *(_QWORD *)(a5 + 16) = InputPreMul32BPPToAA24;
        }
      }
      *(_BYTE *)(a5 + 75) = 4;
      break;
    default:
      if ( (unsigned int)(unsigned __int8)a4[1] - 252 > 1 )
        return (char)v19;
      goto LABEL_28;
  }
  return (char)v19;
}
