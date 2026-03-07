__int64 __fastcall std::vector<CDepthSortedVisualCollection>::emplace_back<CDepthSortedVisualCollection>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 == a1[2] )
    return std::vector<CDepthSortedVisualCollection>::_Emplace_reallocate<CDepthSortedVisualCollection>(
             a1,
             a1[1],
             (__int64 *)a2);
  v5 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(v2 + 8) = v6;
  *(_QWORD *)v2 = v5;
  *(_QWORD *)(v2 + 16) = v7;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = v8;
  *(_QWORD *)(v2 + 32) = v9;
  *(_QWORD *)(v2 + 48) = v10;
  result = a1[1];
  a1[1] = result + 56;
  return result;
}
