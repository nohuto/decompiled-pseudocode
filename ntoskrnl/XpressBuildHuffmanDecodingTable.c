/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1402B53E0
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x1402B4E70 (RtlDecompressBufferXpressHuff.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405B1224 (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(__m128i *a1, __int64 a2)
{
  __int16 v2; // bp
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r11
  __int16 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int16 v11; // si
  __int16 v12; // di
  __m128i v13; // xmm0
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int16 *v17; // r10
  __int16 v18; // dx
  __int16 v19; // r8
  unsigned __int64 v20; // r9
  bool v21; // zf
  __int64 v22; // rcx
  __int16 v23; // ax
  unsigned __int64 v24; // r9
  bool v25; // zf
  __int16 *v26; // rcx
  int v27; // r10d
  unsigned __int16 *v28; // r11
  __int64 v29; // rdx
  __int64 i; // r8
  int v31; // ecx
  unsigned __int64 v32; // rdi
  __int64 v34; // rcx
  __int16 *v35; // rax
  __int64 v36; // rcx
  __int16 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int16 *v40; // rax
  __int16 *v41; // rcx
  __int64 v42; // rcx
  __int16 *v43; // rax
  __int64 v44; // rcx
  __int16 *v45; // rax
  __int64 v46; // rcx
  __int16 *v47; // rax
  __int64 v48; // rdx
  __int16 *j; // rax
  __m128i *v50; // rdi
  __int64 k; // rcx

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x2000200u), 0);
  a1[64] = v13;
  a1[65] = v13;
  do
  {
    v14 = *(_BYTE *)(a2 + v6) & 0xF;
    if ( (*(_BYTE *)(a2 + v6) & 0xF) != 0 )
    {
      a1->m128i_i16[2 * v7] = a1[64].m128i_i16[v14];
      v9 = v10;
      a1[64].m128i_i16[v14] = 2 * v8;
      v12 = v11;
    }
    v15 = (unsigned __int64)*(unsigned __int8 *)(a2 + v6) >> 4;
    if ( v15 )
    {
      a1->m128i_i16[2 * v9 + 1] = a1[64].m128i_i16[v15];
      a1[64].m128i_i16[v15] = 2 * v12 + 1;
    }
    v6 = ++v5;
    v7 = v5;
    v8 = v5;
    v9 = v5;
    v10 = v5;
    v12 = v5;
    v11 = v5;
  }
  while ( v5 < 0x100 );
  v16 = 1024LL;
  v17 = &a1[65].m128i_u16[7];
  v18 = -1024;
  v19 = -1023;
  v20 = 15LL;
  while ( 1 )
  {
    v21 = v19 == v18;
    if ( v19 < v18 )
    {
      v41 = &a1[194].m128i_i16[v16];
      v16 -= (unsigned __int16)(((unsigned __int16)(v18 - v19 - 1) >> 1) + 1);
      do
      {
        *v41-- = v19;
        v19 += 2;
        v21 = v19 == v18;
      }
      while ( v19 < v18 );
    }
    if ( v21 )
      return 3221226050LL;
    v22 = *v17;
    v19 = v18 + 1;
    if ( v22 != 512 )
    {
      v38 = (__int64)a1[194].m128i_i64 + 2 * v16;
      do
      {
        v38 -= 2LL;
        --v16;
        *(_WORD *)(v38 + 2) = v20 + 16 * v22;
        v22 = a1->m128i_u16[v22];
      }
      while ( v22 != 512 );
    }
    --v20;
    v23 = -(__int16)v16;
    --v17;
    v18 = -(__int16)v16;
    if ( v20 <= 0xA )
    {
      v24 = 1023LL;
      v25 = v19 == v23;
      if ( v19 < v23 )
      {
        v26 = &a1[193].m128i_i16[7];
        v24 = 1023LL - (unsigned __int16)(((unsigned __int16)(v23 - v19 - 1) >> 1) + 1);
        do
        {
          *v26-- = v19;
          v19 += 2;
          v25 = v19 == v18;
        }
        while ( v19 < v18 );
      }
      if ( !v25 )
      {
        v27 = 0;
        v28 = &a1[65].m128i_u16[2];
        v29 = 10LL;
        do
        {
          for ( i = *v28; i != 512; --v24 )
          {
            v2 = v29 + 16 * i;
            if ( v27 )
              return 3221226050LL;
            v31 = 10 - v29;
            if ( (v24 + 1) << (10 - (unsigned __int8)v29) > 0x400 )
              return 3221226050LL;
            v32 = v24 << v31;
            switch ( v31 )
            {
              case 0:
                goto LABEL_23;
              case 1:
                goto LABEL_22;
              case 2:
                goto LABEL_21;
              case 3:
                a1[66].m128i_i16[v32 + 7] = v2;
                a1[66].m128i_i16[v32 + 6] = v2;
                a1[66].m128i_i16[v32 + 5] = v2;
                a1[66].m128i_i16[v32 + 4] = v2;
LABEL_21:
                a1[66].m128i_i16[v32 + 3] = v2;
                a1[66].m128i_i16[v32 + 2] = v2;
LABEL_22:
                a1[66].m128i_i16[v32 + 1] = v2;
LABEL_23:
                a1[66].m128i_i16[v32] = v2;
                break;
              case 4:
                v34 = 4LL;
                v35 = &a1[66].m128i_i16[v32 + 1];
                do
                {
                  *(v35 - 1) = v2;
                  *v35 = v2;
                  v35[1] = v2;
                  v35[2] = v2;
                  v35 += 4;
                  --v34;
                }
                while ( v34 );
                break;
              case 5:
                v36 = 8LL;
                v37 = &a1[66].m128i_i16[v32 + 1];
                do
                {
                  *(v37 - 1) = v2;
                  *v37 = v2;
                  v37[1] = v2;
                  v37[2] = v2;
                  v37 += 4;
                  --v36;
                }
                while ( v36 );
                break;
              case 6:
                v39 = 16LL;
                v40 = &a1[66].m128i_i16[v32 + 1];
                do
                {
                  *(v40 - 1) = v2;
                  *v40 = v2;
                  v40[1] = v2;
                  v40[2] = v2;
                  v40 += 4;
                  --v39;
                }
                while ( v39 );
                break;
              case 7:
                v42 = 32LL;
                v43 = &a1[66].m128i_i16[v32 + 1];
                do
                {
                  *(v43 - 1) = v2;
                  *v43 = v2;
                  v43[1] = v2;
                  v43[2] = v2;
                  v43 += 4;
                  --v42;
                }
                while ( v42 );
                break;
              case 8:
                v44 = 64LL;
                v45 = &a1[66].m128i_i16[v32 + 1];
                do
                {
                  *(v45 - 1) = v2;
                  *v45 = v2;
                  v45[1] = v2;
                  v45[2] = v2;
                  v45 += 4;
                  --v44;
                }
                while ( v44 );
                break;
              case 9:
                v46 = 128LL;
                v47 = &a1[66].m128i_i16[v32 + 1];
                do
                {
                  *(v47 - 1) = v2;
                  *v47 = v2;
                  v47[1] = v2;
                  v47[2] = v2;
                  v47 += 4;
                  --v46;
                }
                while ( v46 );
                break;
              default:
                __fastfail(0x25u);
            }
            if ( !v24 )
              v27 = 1;
            i = a1->m128i_u16[i];
          }
          v24 >>= 1;
          --v28;
          --v29;
        }
        while ( v29 );
        if ( v27 )
          return 0LL;
        v48 = 2LL;
        for ( j = &a1[64].m128i_i16[2]; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v48 > 0xF )
          {
            if ( a1[64].m128i_i16[1] == 512 )
              return 3221226050LL;
            v50 = a1 + 66;
            for ( k = 512LL; k; --k )
            {
              v50->m128i_i16[0] = v2;
              v50 = (__m128i *)((char *)v50 + 2);
            }
            return 0LL;
          }
        }
      }
      return 3221226050LL;
    }
  }
}
