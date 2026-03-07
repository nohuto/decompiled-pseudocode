__int64 __fastcall std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(a1, v4, (__int64 *)a2);
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(v4 + 8) = v6;
  *(_QWORD *)v4 = v5;
  *(_QWORD *)(v4 + 16) = v7;
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(v4 + 32) = *(_DWORD *)(a2 + 32);
  result = a1[1];
  a1[1] = result + 40;
  return result;
}
