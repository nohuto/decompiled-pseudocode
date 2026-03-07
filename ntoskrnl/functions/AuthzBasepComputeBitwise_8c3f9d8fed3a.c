__int64 __fastcall AuthzBasepComputeBitwise(char a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 **v3; // rdx
  __int64 *v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-18h]
  __int64 v8; // [rsp+8h] [rbp-10h]

  v2 = 0LL;
  v7 = -1LL;
  v3 = (__int64 **)(a2 + 32);
  v8 = -1LL;
  do
  {
    if ( *((_DWORD *)v3 - 5) == 1 )
      v5 = *v3;
    else
      v5 = (__int64 *)(*(v3 - 2))[6];
    v3 += 5;
    *(&v7 + v2++) = *v5;
  }
  while ( v2 < 2 );
  if ( a1 == -93 )
    return v7 & v8;
  else
    return -1LL;
}
