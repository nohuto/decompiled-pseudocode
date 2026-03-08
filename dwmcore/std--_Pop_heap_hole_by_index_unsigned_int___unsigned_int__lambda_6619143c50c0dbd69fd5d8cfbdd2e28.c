/*
 * XREFs of std::_Pop_heap_hole_by_index_unsigned_int___unsigned_int__lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18023F4E0
 * Callers:
 *     std::_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18023F86C (std--_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_unsigned_int___unsigned_int__lambda_6619143c50c0dbd69fd5d8cfbdd2e280___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 i; // r11

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; v6 = i )
  {
    i = 2 * i
      + (*(float *)(*(_QWORD *)(a5 + 1064) + 4LL * *(unsigned int *)(a1 + 8 * i + 8)) <= *(float *)(*(_QWORD *)(a5 + 1064)
                                                                                                  + 4LL * *(unsigned int *)(a1 + 8 * i + 4)))
      + 1LL;
    *(_DWORD *)(a1 + 4 * v6) = *(_DWORD *)(a1 + 4 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4 * v6) = *(_DWORD *)(a1 + 4 * a3 - 4);
    LODWORD(v6) = a3 - 1;
  }
  return std::_Push_heap_by_index_unsigned_int___unsigned_int__lambda_6619143c50c0dbd69fd5d8cfbdd2e280___(
           a1,
           v6,
           a2,
           a4,
           a5);
}
