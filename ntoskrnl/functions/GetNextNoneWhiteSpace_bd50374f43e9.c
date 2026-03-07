__int64 __fastcall GetNextNoneWhiteSpace(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v3 = (unsigned int)*a2;
  v5 = 0;
  if ( *(_WORD *)(a1 + 2 * v3) )
  {
    v6 = 0LL;
    do
    {
      if ( !iswspace(*(_WORD *)(a1 + 2 * (v6 + (unsigned int)v3))) )
        break;
      v6 = ++v5;
      LODWORD(v3) = *a2;
    }
    while ( *(_WORD *)(a1 + 2 * (v5 + (unsigned __int64)(unsigned int)*a2)) );
  }
  if ( !*(_WORD *)(a1 + 2LL * v5) )
    return 1336LL;
  *a2 += v5;
  return 0LL;
}
