/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x14036EEC0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x14036E3C0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1405B03C4 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char *v2; // r14
  char *v3; // rbx
  _DWORD *v4; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rbp
  _WORD *v8; // rcx
  __int64 v9; // rdx
  char *v10; // r8
  int v11; // eax
  __int64 v12; // r11
  unsigned __int16 *v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  char *v16; // rcx
  __int64 v17; // rdx
  char *v18; // rcx
  char *v19; // rdx
  char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r10
  __int64 v28; // r11
  __int64 j; // rsi
  __int64 v30; // rbx
  _BYTE *v31; // r9
  unsigned __int64 v32; // rdx
  unsigned __int8 *v33; // rcx
  unsigned int *v34; // r8
  unsigned __int64 v35; // rbx
  __int64 v37; // rax
  __int64 v38; // r8
  char v39; // dl
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // rax

  memset(a1 + 3331, 0, 0x404uLL);
  v2 = (char *)(a1 + 256);
  v3 = (char *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v4 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v6 = (unsigned int)*v4;
    if ( *v4 )
    {
      *(_QWORD *)v3 = v6;
      ++*((_WORD *)a1 + (unsigned __int8)v6 + 13325);
      ++*((_WORD *)a1 + (v6 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = i;
      v3 += 24;
    }
    ++v4;
  }
  memset(a1 + 3908, 0, 0x100uLL);
  v7 = a1 + 259;
  if ( v3 <= (char *)a1 + 2072 )
  {
    if ( v3 == v2 )
      return 0LL;
    v38 = a1[258];
    v39 = 16;
    if ( (v38 & 1) == 0 )
      v39 = 1;
    *((_BYTE *)a1 + (a1[258] >> 1) + 31264) = v39;
    *((_DWORD *)a1 + v38) = 1;
    return *(_QWORD *)v2;
  }
  v8 = (_WORD *)a1 + 13325;
  v9 = 255LL;
  do
  {
    *v8 += *(v8 - 1);
    v8[257] += v8[256];
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (char *)(a1 + 256);
  if ( v2 < v3 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v10 + 13324) + 13838) = *((_WORD *)v10 + 8);
      v11 = *(_DWORD *)v10;
      v10 += 24;
      ++*((_WORD *)a1 + (unsigned __int8)v11 + 13324);
    }
    while ( v10 < v3 );
  }
  v12 = (v3 - (char *)a1 - 2048) / 24;
  if ( v12 )
  {
    v13 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v14 = *v13++;
      v15 = *((unsigned int *)a1 + v14 + 7304);
      v16 = (char *)a1 + 2 * (v15 >> 8);
      v17 = *((unsigned __int16 *)v16 + 13581);
      *((_WORD *)v16 + 13581) = v17 + 1;
      a1[3 * v17 + 258] = v14;
      a1[3 * v17 + 256] = v15;
      --v12;
    }
    while ( v12 );
  }
  while ( 2 )
  {
    *((_QWORD *)v3 + 1) = v2;
    v18 = (char *)(a1 + 262);
    *((_QWORD *)v3 + 2) = v7;
    v19 = v3;
    v20 = v3;
    *(_QWORD *)v3 = *v7 + *(_QWORD *)v2;
    while ( v18 != v3 || v20 != v19 )
    {
      v19 += 24;
      if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
      {
        *((_QWORD *)v19 + 1) = v20;
        v21 = *(_QWORD *)v20;
        v20 += 24;
      }
      else
      {
        *((_QWORD *)v19 + 1) = v18;
        v21 = *(_QWORD *)v18;
        v18 += 24;
      }
      *(_QWORD *)v19 = v21;
      if ( v18 == v3 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
      {
        *((_QWORD *)v19 + 2) = v20;
        *(_QWORD *)v19 += *(_QWORD *)v20;
        v20 += 24;
      }
      else
      {
        *((_QWORD *)v19 + 2) = v18;
        *(_QWORD *)v19 += *(_QWORD *)v18;
        v18 += 24;
      }
    }
    v22 = 0LL;
    v23 = 0LL;
    while ( *((_QWORD *)v19 + 1) )
    {
      a1[2 * v23 + 3332] = ++v22;
      a1[2 * v23 + 3331] = *((_QWORD *)v19 + 1);
      v25 = 1LL;
      v19 = (char *)*((_QWORD *)v19 + 2);
LABEL_30:
      v23 += v25;
    }
    v24 = *((_QWORD *)v19 + 2);
    *((_QWORD *)v19 + 1) = v22;
    *((_BYTE *)a1 + v24 + 28704) = v22;
    if ( v23 )
    {
      v19 = (char *)a1[2 * v23 + 3329];
      v22 = a1[2 * v23 + 3330];
      v25 = -1LL;
      goto LABEL_30;
    }
    v26 = a1[257];
    if ( v26 > 0xF )
    {
      v40 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v41 = *v40 + 1;
          v40[1] = 0LL;
          *v40 = v41 >> 1;
          v40 += 3;
        }
        while ( v40 < (unsigned __int64 *)v3 );
      }
      continue;
    }
    break;
  }
  v27 = *((_QWORD *)v3 - 2);
  v28 = 0LL;
  for ( j = 0LL; v27 <= v26; j += v35 )
  {
    v30 = 0LL;
    v31 = a1 + 3908;
    v32 = 0LL;
    v33 = (unsigned __int8 *)(a1 + 3588);
    v34 = (unsigned int *)(a1 + 3652);
    do
    {
      if ( *v33 == v27 )
      {
        v37 = *v34;
        *v31 |= v27;
        v30 += v37;
        WORD1(a1[v32]) = v28++;
        LOWORD(a1[v32]) = v27;
      }
      if ( v33[1] == v27 )
      {
        v30 += v34[1];
        *v31 |= 16 * (_BYTE)v27;
        HIWORD(a1[v32]) = v28++;
        WORD2(a1[v32]) = v27;
      }
      ++v31;
      ++v32;
      v33 += 2;
      v34 += 2;
    }
    while ( v32 < 256 );
    v35 = v27 * v30;
    v28 *= 2LL;
    ++v27;
  }
  return j;
}
