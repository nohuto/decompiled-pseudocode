__int64 __fastcall std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        char *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  signed __int64 v5; // rax
  char *v7; // rsi
  char *i; // rdi
  char *v9; // r14
  __int64 v10; // r9
  __int64 result; // rax
  __int64 j; // r14
  __int64 *v13; // rsi
  char *v14; // [rsp+30h] [rbp-28h] BYREF
  char *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2 - a1;
  v7 = a2;
  for ( i = a1; ; v5 = v7 - i )
  {
    result = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( result <= 256 )
      return (__int64)std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(i, v7);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
      (unsigned __int64 *)&v14,
      (unsigned __int64)i,
      (unsigned __int64)v7);
    v9 = v15;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v14 - i) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((v7 - v15) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v15, v7, a3, v10);
      v7 = v14;
    }
    else
    {
      std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(i, v14, a3, v10);
      i = v9;
    }
  }
  for ( j = (v7 - i) >> 4;
        j > 0;
        result = std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___(
                   (__int64)i,
                   j,
                   (v7 - i) >> 3,
                   &v16) )
  {
    --j;
    v16 = *(_QWORD *)&i[8 * j];
  }
  if ( (v7 - i) >> 3 >= 2 )
  {
    v13 = (__int64 *)(v7 - 8);
    do
    {
      v16 = *v13;
      *v13 = *(_QWORD *)i;
      std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___(
        (__int64)i,
        0LL,
        ((char *)v13-- - i) >> 3,
        &v16);
      result = ((unsigned __int64)v13 + 8LL - (_QWORD)i) & 0xFFFFFFFFFFFFFFF8uLL;
    }
    while ( result >= 16 );
  }
  return result;
}
