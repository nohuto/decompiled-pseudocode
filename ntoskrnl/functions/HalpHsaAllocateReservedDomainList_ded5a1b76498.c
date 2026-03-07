__int64 __fastcall HalpHsaAllocateReservedDomainList(__int64 a1, int a2, unsigned int a3)
{
  unsigned int **v4; // rdi
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  unsigned int v9; // ecx

  v4 = (unsigned int **)(a1 + 216);
  LODWORD(result) = ExtEnvAllocateMemory(a1, 16 * a3 + 8, (_QWORD *)(a1 + 216));
  v7 = 0;
  if ( (int)result >= 0 )
  {
    **v4 = a3;
    if ( a3 )
    {
      v8 = 0LL;
      do
      {
        v9 = v7 + a2;
        ++v7;
        v8 += 4LL;
        (*v4)[v8 - 2] = v9;
      }
      while ( v7 < a3 );
    }
  }
  return (unsigned int)result;
}
