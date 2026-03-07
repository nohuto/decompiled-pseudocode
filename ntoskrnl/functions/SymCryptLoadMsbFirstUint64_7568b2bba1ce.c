__int64 __fastcall SymCryptLoadMsbFirstUint64(_BYTE *a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // r10
  __int64 v7; // rcx

  v3 = 0;
  v5 = 0LL;
  while ( a2 > 8 )
  {
    if ( *a1++ )
      return 32786;
    --a2;
  }
  for ( ; a2; --a2 )
  {
    v7 = (unsigned __int8)*a1++;
    v5 = v7 | (v5 << 8);
  }
  *a3 = v5;
  return v3;
}
