__int64 __fastcall SymCryptEcpointCreateEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // r15

  v4 = 0LL;
  if ( a2 && a4 )
  {
    v7 = a1 + 32;
    v8 = 0;
    v4 = a1;
    v9 = *(unsigned int *)(a3 + 36);
    while ( SymCryptModElementCreate() )
    {
      v7 += v9;
      if ( ++v8 >= a4 )
      {
        *(_BYTE *)v4 = 0;
        *(_QWORD *)(v4 + 8) = a3;
        return v4;
      }
    }
    return 0LL;
  }
  return v4;
}
