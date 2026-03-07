__int64 __fastcall std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; v6 = i )
  {
    i = 2 * i
      + 2LL
      - (*(_DWORD *)(*(_QWORD *)(a1 + 16 * i + 16) + 264LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16 * i + 8) + 264LL));
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)(a1 + 8 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)(a1 + 8 * a3 - 8);
    v6 = a3 - 1;
  }
  if ( a2 < v6 )
  {
    do
    {
      v9 = (v6 - 1) >> 1;
      v10 = *(_QWORD *)(a1 + 8 * v9);
      if ( *(_DWORD *)(v10 + 264) >= *(_DWORD *)(*a4 + 264) )
        break;
      *(_QWORD *)(a1 + 8 * v6) = v10;
      v6 = (v6 - 1) >> 1;
    }
    while ( a2 < v9 );
  }
  result = *a4;
  *(_QWORD *)(a1 + 8 * v6) = *a4;
  return result;
}
