__int64 __fastcall CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rsi
  int v4; // ecx
  LPVOID v5; // rax
  LPVOID v6; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( a2 + 1 > v4 )
    return 0LL;
  if ( a2 + 1 != v4 )
  {
    memmove_0((void *)(*(_QWORD *)a1 + 4LL * a2), (const void *)(*(_QWORD *)a1 + 4 * (a2 + 1LL)), 4LL * (v4 - a2 - 1));
    memmove_0(
      (void *)(*(_QWORD *)(a1 + 8) + 8 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 8 * (v2 + 1)),
      8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
  }
  v5 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v5 )
    *(_QWORD *)a1 = v5;
  v6 = DefaultHeap::Realloc(*(void **)(a1 + 8), 8LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v6 )
    *(_QWORD *)(a1 + 8) = v6;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
