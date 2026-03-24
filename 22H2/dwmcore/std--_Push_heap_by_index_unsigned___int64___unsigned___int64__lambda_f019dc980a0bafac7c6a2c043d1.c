/*
 * XREFs of std::_Push_heap_by_index_unsigned___int64___unsigned___int64__lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DD620
 * Callers:
 *     std::_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DD50C (std--_Pop_heap_hole_by_index_unsigned___int64___unsigned___int64__lambda_f019dc980a0bafac7c6a2c0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Push_heap_by_index_unsigned___int64___unsigned___int64__lambda_f019dc980a0bafac7c6a2c043d1eae89___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  __int64 result; // rax

  v5 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v6 = (v5 - 1) >> 1;
      v7 = *(_QWORD *)(a1 + 8 * v6);
      if ( *(float *)(*(_QWORD *)(a5 + 976) + 4 * v7) <= *(float *)(*(_QWORD *)(a5 + 976) + 4 * *a4) )
        break;
      *(_QWORD *)(a1 + 8 * v5) = v7;
      v5 = (v5 - 1) >> 1;
    }
    while ( a3 < v6 );
  }
  result = *a4;
  *(_QWORD *)(a1 + 8 * v5) = *a4;
  return result;
}
