__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(__int64, _QWORD *); // rax

  if ( a2 == *(_QWORD **)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = RealPredecessor(a2);
  ++*(_DWORD *)(a1 + 64);
  DeleteNodeFromTree(a1, (__int64)a2);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 88);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v4(a1, a2);
}
