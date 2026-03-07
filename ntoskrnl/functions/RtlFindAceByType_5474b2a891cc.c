unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v3; // r9
  unsigned int v4; // r10d

  if ( !a1 )
    return 0LL;
  v3 = (unsigned __int8 *)(a1 + 8);
  v4 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v3 == a2 )
      return v3;
LABEL_6:
    ++v4;
    v3 += *((unsigned __int16 *)v3 + 1);
    if ( v4 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v4 < *a3 || *v3 != a2 )
    goto LABEL_6;
  *a3 = v4;
  return v3;
}
