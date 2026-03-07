__int64 __fastcall MiInsertDemotedPages(int a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v8; // rbx
  BOOL v9; // r12d
  int v11; // edi
  __int64 v12; // r15

  result = *(unsigned int *)(a2 + 16);
  v6 = a5;
  v8 = a2;
  v9 = (result & 0x3E0) != 0;
  v11 = 0;
  if ( a3 != a4 )
  {
    do
    {
      v12 = (unsigned int)(a3 + 1);
      if ( (_DWORD)v12 == a4 )
        v11 = 1;
      if ( a5 )
        v6 = v8 + 48 * MiLargePageSizes[v12] * (0xAAAAAAAAAAAAAAABuLL * ((a5 - v8) >> 4) / MiLargePageSizes[v12]);
      result = MiInsertLargePageChain(a1, v8, v9, v6, a3, v11);
      a3 = v12;
      if ( a5 )
        v8 = v6;
    }
    while ( (_DWORD)v12 != a4 );
  }
  return result;
}
