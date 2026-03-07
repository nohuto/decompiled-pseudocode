__int64 __fastcall MiFindEntryInImportList(unsigned __int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx

  if ( a1 == -2LL )
    return 0LL;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0xFFFFFFFFFFFFFFFEuLL) != a2 )
      return 0LL;
  }
  else
  {
    v4 = 0;
    if ( !*(_QWORD *)a1 )
      return 0LL;
    v5 = 0LL;
    while ( *(_QWORD *)(a1 + 8 * v5 + 8) != a2 )
    {
      v5 = ++v4;
      if ( (unsigned __int64)v4 >= *(_QWORD *)a1 )
        return 0LL;
    }
  }
  return 1LL;
}
