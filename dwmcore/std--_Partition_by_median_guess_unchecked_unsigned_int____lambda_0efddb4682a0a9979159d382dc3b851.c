/*
 * XREFs of std::_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023F09C
 * Callers:
 *     std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023F708 (std--_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 * Callees:
 *     std::_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023ECCC (std--_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 */

unsigned int **__fastcall std::_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
        unsigned int **a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned int *v6; // rbx
  __int64 v7; // r9
  unsigned int *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rax
  float v11; // xmm1_4
  unsigned int *v12; // rcx
  __int64 v13; // r8
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int *v18; // r8
  unsigned int *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r11
  float v22; // xmm1_4
  float v23; // xmm0_4
  unsigned int v24; // eax
  bool v25; // zf
  unsigned int *v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rbp
  float v29; // xmm0_4
  float v30; // xmm1_4
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int **result; // rax

  v6 = (unsigned int *)(a2 + 4 * ((__int64)((__int64)a3 - a2) >> 3));
  std::_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
    a2,
    (__int64)v6,
    (__int64)(a3 - 1));
  v8 = v6 + 1;
  if ( a2 < (unsigned __int64)v6 )
  {
    v9 = *(_QWORD *)(v7 + 1064);
    v10 = *v6;
    do
    {
      v11 = *(float *)(v9 + 4 * v10);
      v12 = v6 - 1;
      v13 = *(v6 - 1);
      v14 = *(float *)(v9 + 4 * v13);
      if ( v11 > v14 )
        break;
      v10 = (unsigned int)v13;
      if ( v14 > v11 )
        break;
      --v6;
    }
    while ( a2 < (unsigned __int64)v12 );
  }
  if ( v8 < a3 )
  {
    v15 = *(_QWORD *)(v7 + 1064);
    v16 = *(float *)(v15 + 4LL * *v6);
    do
    {
      v17 = *(float *)(v15 + 4LL * *v8);
      if ( v16 > v17 )
        break;
      if ( v17 > v16 )
        break;
      ++v8;
    }
    while ( v8 < a3 );
  }
  v18 = v8;
  v19 = v6;
  while ( 1 )
  {
    while ( v18 < a3 )
    {
      v20 = *(_QWORD *)(v7 + 1064);
      v21 = *v18;
      v22 = *(float *)(v20 + 4 * v21);
      v23 = *(float *)(v20 + 4LL * *v6);
      if ( v22 > v23 )
        goto LABEL_17;
      if ( v23 > v22 )
        break;
      if ( v8 != v18 )
      {
        v24 = *v8;
        *v8 = v21;
        *v18 = v24;
      }
      ++v8;
LABEL_17:
      ++v18;
    }
    v25 = v19 == (unsigned int *)a2;
    if ( (unsigned __int64)v19 > a2 )
    {
      v26 = v19 - 1;
      do
      {
        v27 = *(_QWORD *)(v7 + 1064);
        v28 = *v26;
        v29 = *(float *)(v27 + 4 * v28);
        v30 = *(float *)(v27 + 4LL * *v6);
        if ( v30 <= v29 )
        {
          if ( v29 > v30 )
            break;
          if ( --v6 != v26 )
          {
            v31 = *v6;
            *v6 = v28;
            *v26 = v31;
          }
        }
        --v19;
        --v26;
      }
      while ( a2 < (unsigned __int64)v19 );
      v25 = v19 == (unsigned int *)a2;
    }
    if ( v25 )
      break;
    --v19;
    if ( v18 != a3 )
    {
      v36 = *v18;
      *v18 = *v19;
      *v19 = v36;
      goto LABEL_17;
    }
    if ( v19 != --v6 )
    {
      v34 = *v19;
      *v19 = *v6;
      *v6 = v34;
    }
    v35 = *v6;
    *v6 = *--v8;
    *v8 = v35;
  }
  if ( v18 != a3 )
  {
    if ( v8 != v18 )
    {
      v32 = *v6;
      *v6 = *v8;
      *v8 = v32;
    }
    v33 = *v6;
    ++v8;
    *v6++ = *v18;
    *v18 = v33;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
