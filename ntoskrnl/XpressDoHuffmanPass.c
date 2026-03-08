/*
 * XREFs of XpressDoHuffmanPass @ 0x14036EBD0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x14036E3C0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1405B03C4 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, char *a4, int a5)
{
  __int128 *v7; // rcx
  __int64 v8; // rdx
  char *v11; // rax
  __int128 v12; // xmm0
  char *v13; // r12
  char *v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // r8
  char *v17; // r14
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  bool v21; // sf
  __int64 v22; // rcx
  unsigned __int16 v23; // dx
  unsigned __int16 *v24; // r11
  unsigned __int64 v25; // rcx
  __int64 v26; // r11
  char *v27; // r10
  __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int16 v30; // si
  unsigned __int64 v31; // r9
  __int16 v32; // r8
  unsigned __int16 v33; // bx
  unsigned __int8 v34; // r11
  char v35; // cl
  unsigned __int16 v36; // dx
  char v37; // cl
  unsigned __int64 v38; // rcx
  unsigned __int16 v39; // dx
  __int16 v40; // r10

  v7 = (__int128 *)(a1 + 31264);
  v8 = 2LL;
  v11 = a4;
  do
  {
    v11 += 128;
    v12 = *v7;
    v7 += 8;
    *((_OWORD *)v11 - 8) = v12;
    *((_OWORD *)v11 - 7) = *(v7 - 7);
    *((_OWORD *)v11 - 6) = *(v7 - 6);
    *((_OWORD *)v11 - 5) = *(v7 - 5);
    *((_OWORD *)v11 - 4) = *(v7 - 4);
    *((_OWORD *)v11 - 3) = *(v7 - 3);
    *((_OWORD *)v11 - 2) = *(v7 - 2);
    *((_OWORD *)v11 - 1) = *(v7 - 1);
    --v8;
  }
  while ( v8 );
  v13 = a4 + 256;
  v14 = a4 + 258;
  v15 = 16LL;
  v16 = 0;
  v17 = a4 + 260;
LABEL_4:
  v18 = *(_DWORD *)a2;
  a2 += 4;
  v19 = 2 * v18 + 1;
  if ( v18 >= 0 )
  {
LABEL_8:
    v22 = *a2++;
    v23 = *(_WORD *)(a1 + 4 * v22 + 2);
    v24 = (unsigned __int16 *)(a1 + 4 * v22);
    v25 = *v24;
    if ( v15 < v25 )
    {
      *(_WORD *)v13 = (v16 << v15) | (v23 >> (v25 - v15));
      v13 = v14;
      v16 = v24[1];
      v14 = v17;
      v17 += 2;
      v15 += 16LL - (unsigned int)v25;
    }
    else
    {
      v15 -= v25;
      v16 = v23 | (v16 << v25);
    }
    goto LABEL_7;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v26 = *a2;
    v27 = (char *)(a2 + 1);
    v28 = a1 + 4 * v26;
    v29 = *(unsigned __int16 *)(v28 + 1024);
    v30 = *(_WORD *)(v28 + 1026);
    if ( v15 < v29 )
    {
      *(_WORD *)v13 = (v16 << v15) | (v30 >> (v29 - v15));
      v13 = v14;
      v32 = *(_WORD *)(v28 + 1026);
      v14 = v17;
      v17 += 2;
      v31 = 16 - v29 + v15;
    }
    else
    {
      v31 = v15 - v29;
      v32 = v30 | (v16 << v29);
    }
    if ( (v26 & 0xF) == 0xF )
    {
      v35 = *v27++;
      *v17++ = v35;
      if ( v35 == -1 )
      {
        v36 = *(_WORD *)v27;
        *v17 = *(_WORD *)v27;
        v37 = v27[1];
        v27 += 2;
        v17[1] = v37;
        v17 += 2;
        if ( !v36 )
        {
          *v17 = *v27;
          v17[1] = v27[1];
          v17[2] = v27[2];
          v17[3] = v27[3];
          v17 += 4;
          v27 += 4;
        }
      }
    }
    v33 = *(_WORD *)v27;
    v34 = (unsigned __int8)v26 >> 4;
    if ( v31 < v34 )
    {
      *(_WORD *)v13 = (v32 << v31) | (v33 >> (v34 - v31));
      v13 = v14;
      v16 = *(_WORD *)v27;
      v14 = v17;
      v17 += 2;
      v15 = 16LL - v34 + v31;
    }
    else
    {
      v15 = v31 - v34;
      v16 = v33 | (v32 << v34);
    }
    a2 = (unsigned __int8 *)(v27 + 2);
LABEL_7:
    v20 = 2 * v19;
    v21 = v19 < 0;
    v19 *= 2;
    if ( !v21 )
      goto LABEL_8;
    if ( !v20 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v38 = *(unsigned __int16 *)(a1 + 1024);
    v39 = *(_WORD *)(a1 + 1026);
    v40 = *(_WORD *)(a1 + 1024);
    if ( v15 >= v38 )
    {
      LOBYTE(v15) = v15 - v40;
      v16 = v39 | (v16 << v38);
    }
    else
    {
      *(_WORD *)v13 = (v16 << v15) | (v39 >> (v38 - v15));
      v13 = v14;
      v16 = *(_WORD *)(a1 + 1026);
      v14 = v17;
      v17 += 2;
      LOBYTE(v15) = 16 - v40 + v15;
    }
  }
  *(_WORD *)v13 = v16 << v15;
  *(_WORD *)v14 = 0;
  return v17;
}
