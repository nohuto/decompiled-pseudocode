__int64 __fastcall MiAddNonSecuredPagesToDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = 48 * a2 - 0x220000000000LL;
  if ( a3 )
  {
    v9 = a2 + 1;
    do
    {
      if ( (unsigned int)MiIsPageSecured(v8) )
      {
        if ( v6 )
        {
          result = (*a1)(a1, v4, v6, 258LL);
          v7 = result;
          if ( (int)result < 0 )
            return result;
        }
        v4 = v9;
        v6 = 0LL;
      }
      else
      {
        ++v6;
      }
      v8 += 48LL;
      ++v9;
      --v3;
    }
    while ( v3 );
    if ( v6 )
      return (unsigned int)(*a1)(a1, v4, v6, 258LL);
  }
  return v7;
}
