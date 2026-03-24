/*
 * XREFs of std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___ @ 0x1801DD454
 * Callers:
 *     std::_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DCEDC (std--_Make_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 *     std::_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DD67C (std--_Sort_heap_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  int v6; // r15d
  __int64 v7; // r11

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  while ( 1 )
  {
    v7 = a2;
    if ( a2 >= v5 )
      break;
    a2 = 2 * a2
       + (*(float *)(*(_QWORD *)(a5 + 976) + 4LL * *(_QWORD *)(a1 + 16 * a2 + 8)) <= *(float *)(*(_QWORD *)(a5 + 976)
                                                                                              + 4LL
                                                                                              * *(_QWORD *)(a1 + 16 * a2 + 16)))
       + 1LL;
    *(_QWORD *)(a1 + 8 * v7) = *(_QWORD *)(a1 + 8 * a2);
  }
  if ( a2 == v5 && (a3 & 1) == 0 )
  {
    LODWORD(v7) = a3 - 1;
    *(_QWORD *)(a1 + 8 * a2) = *(_QWORD *)(a1 + 8 * a3 - 8);
  }
  return std::_Push_heap_by_index_unsigned___int64___unsigned___int64__lambda_448b3feef23c663190309d6322577307___(
           a1,
           v7,
           v6,
           a4,
           a5);
}
