/*
 * XREFs of std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180255C44
 * Callers:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180255EC0 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 * Callees:
 *     std::_Guess_median_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180255A88 (std--_Guess_median_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  unsigned __int64 v13; // r8
  _QWORD *v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // rax
  bool v17; // zf
  _QWORD *v18; // rcx
  unsigned int v19; // r10d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 *result; // rax

  v6 = a2 + 8 * ((__int64)(a3 - a2) >> 4);
  std::_Guess_median_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a2, v6, a3 - 8);
  v7 = v6 + 8;
  if ( a2 < v6 )
  {
    v8 = *(_QWORD *)v6;
    do
    {
      v9 = v6 - 8;
      v10 = *(_QWORD *)(v6 - 8);
      v11 = *(_DWORD *)(v10 + 264);
      if ( v11 < *(_DWORD *)(v8 + 264) )
        break;
      if ( v11 > *(_DWORD *)(v8 + 264) )
        break;
      v6 -= 8LL;
      v8 = v10;
    }
    while ( a2 < v9 );
  }
  if ( v7 < a3 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)v6 + 264LL);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)v7 + 264LL) < v12 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)v7 + 264LL) > v12 )
        break;
      v7 += 8LL;
    }
    while ( v7 < a3 );
  }
  v13 = v7;
  v14 = (_QWORD *)v6;
  while ( 1 )
  {
    while ( v13 < a3 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)v6 + 264LL);
      if ( v15 < *(_DWORD *)(*(_QWORD *)v13 + 264LL) )
        goto LABEL_17;
      if ( v15 > *(_DWORD *)(*(_QWORD *)v13 + 264LL) )
        break;
      if ( v7 != v13 )
      {
        v16 = *(_QWORD *)v7;
        *(_QWORD *)v7 = *(_QWORD *)v13;
        *(_QWORD *)v13 = v16;
      }
      v7 += 8LL;
LABEL_17:
      v13 += 8LL;
    }
    v17 = v14 == (_QWORD *)a2;
    if ( (unsigned __int64)v14 > a2 )
    {
      v18 = v14 - 1;
      do
      {
        v19 = *(_DWORD *)(*v18 + 264LL);
        if ( v19 >= *(_DWORD *)(*(_QWORD *)v6 + 264LL) )
        {
          if ( v19 > *(_DWORD *)(*(_QWORD *)v6 + 264LL) )
            break;
          v6 -= 8LL;
          if ( (_QWORD *)v6 != v18 )
          {
            v20 = *(_QWORD *)v6;
            *(_QWORD *)v6 = *v18;
            *v18 = v20;
          }
        }
        --v14;
        --v18;
      }
      while ( a2 < (unsigned __int64)v14 );
      v17 = v14 == (_QWORD *)a2;
    }
    if ( v17 )
      break;
    --v14;
    if ( v13 != a3 )
    {
      v25 = *(_QWORD *)v13;
      *(_QWORD *)v13 = *v14;
      *v14 = v25;
      goto LABEL_17;
    }
    v6 -= 8LL;
    if ( v14 != (_QWORD *)v6 )
    {
      v23 = *v14;
      *v14 = *(_QWORD *)v6;
      *(_QWORD *)v6 = v23;
    }
    v24 = *(_QWORD *)v6;
    v7 -= 8LL;
    *(_QWORD *)v6 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v24;
  }
  if ( v13 != a3 )
  {
    if ( v7 != v13 )
    {
      v21 = *(_QWORD *)v6;
      *(_QWORD *)v6 = *(_QWORD *)v7;
      *(_QWORD *)v7 = v21;
    }
    v22 = *(_QWORD *)v6;
    v7 += 8LL;
    *(_QWORD *)v6 = *(_QWORD *)v13;
    v6 += 8LL;
    *(_QWORD *)v13 = v22;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
