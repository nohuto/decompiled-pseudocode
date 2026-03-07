__int64 __fastcall std::_Push_heap_by_index_unsigned_int___unsigned_int__lambda_0efddb4682a0a9979159d382dc3b8512___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
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
      v7 = *(unsigned int *)(a1 + 4 * v6);
      if ( *(float *)(*(_QWORD *)(a5 + 1064) + 4LL * *a4) <= *(float *)(*(_QWORD *)(a5 + 1064) + 4 * v7) )
        break;
      *(_DWORD *)(a1 + 4 * v5) = v7;
      v5 = (v5 - 1) >> 1;
    }
    while ( a3 < v6 );
  }
  result = *a4;
  *(_DWORD *)(a1 + 4 * v5) = result;
  return result;
}
