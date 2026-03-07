__int64 __fastcall FxCalculateTotalMultiSzStringSize(const wchar_t *MultiSz)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = 0LL;
  if ( !*MultiSz )
    goto LABEL_6;
  do
  {
    v2 = -1LL;
    do
      ++v2;
    while ( MultiSz[v2] );
    MultiSz += v2 + 1;
    v1 += 2 * v2 + 2;
  }
  while ( *MultiSz );
  if ( !v1 )
LABEL_6:
    v1 = 2LL;
  return v1 + 2;
}
