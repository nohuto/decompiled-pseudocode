__int64 __fastcall MiRevertRelocations(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  int v9; // esi

  result = *(_QWORD *)(a2 + 96);
  v4 = a2 + 128;
  v5 = 0;
  while ( v4 )
  {
    v9 = a3 - v5;
    if ( *(_DWORD *)(v4 + 44) - (*(_DWORD *)(v4 + 52) & 0x3FFFFFFFu) <= a3 - v5 )
      v9 = *(_DWORD *)(v4 + 44) - (*(_DWORD *)(v4 + 52) & 0x3FFFFFFF);
    if ( v9 )
    {
      do
      {
        result = MiPerformFixups(a1 + (v5++ << 12), a2, 0LL, 41);
        if ( v5 >= a3 )
          return result;
      }
      while ( --v9 );
    }
    result = *(_DWORD *)(v4 + 52) & 0x3FFFFFFF;
    v5 += result;
    if ( v5 >= a3 )
      return result;
    v4 = *(_QWORD *)(v4 + 16);
  }
  return result;
}
