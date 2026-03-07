char __fastcall lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // r8

  v2 = 0LL;
  v3 = a2 & 0x7FFFFFFF;
  v5 = **(_DWORD **)a1;
  if ( v5 )
  {
    v6 = **(_QWORD **)(a1 + 16);
    while ( (*(_DWORD *)(v6 + 4 * v2) & 0x7FFFFFFF) != v3 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v5 )
        goto LABEL_5;
    }
    *(_DWORD *)(v6 + 4 * v2) |= a2 & 0x80000000;
  }
  else
  {
LABEL_5:
    v7 = **(_DWORD **)(a1 + 24);
    v8 = **(_DWORD **)(a1 + 32);
    if ( v7 >= v8 )
      return 0;
    v9 = **(_QWORD **)(a1 + 16);
    while ( (*(_DWORD *)(v9 + 4LL * v7) & 0x7FFFFFFF) != v3 )
    {
      if ( ++v7 >= v8 )
        return 0;
    }
    *(_DWORD *)(v9 + 4LL * v7) |= a2 & 0x80000000;
  }
  return 1;
}
