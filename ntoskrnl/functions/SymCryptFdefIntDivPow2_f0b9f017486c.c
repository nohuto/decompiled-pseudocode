unsigned __int64 __fastcall SymCryptFdefIntDivPow2(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r9
  char v5; // di
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // r14
  unsigned int *v10; // r11
  unsigned __int64 v11; // r8

  result = (unsigned int)(16 * *(_DWORD *)(a3 + 4));
  v4 = result;
  v5 = a2 & 0x1F;
  v6 = a2 >> 5;
  if ( a2 >> 5 >= result )
    return SymCryptWipe(a3 + 32, 4 * result);
  v8 = 0LL;
  if ( result != v6 )
  {
    v9 = a3 - (4 * v6 + 4) - a1;
    v10 = (unsigned int *)(a1 + 36 + 4 * v6);
    do
    {
      v11 = *(v10 - 1);
      result = v8 + v6 + 1;
      if ( result < v4 )
      {
        result = (unsigned __int64)*v10 << 32;
        v11 |= result;
      }
      ++v8;
      *(unsigned int *)((char *)v10++ + v9) = v11 >> v5;
    }
    while ( v8 < v4 - v6 );
  }
  if ( v8 < v4 )
  {
    result = a3 + 32 + 4 * v8;
    do
    {
      *(_DWORD *)result = 0;
      ++v8;
      result += 4LL;
    }
    while ( v8 < v4 );
  }
  return result;
}
