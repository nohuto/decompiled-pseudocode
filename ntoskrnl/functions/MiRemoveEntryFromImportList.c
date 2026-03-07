__int64 __fastcall MiRemoveEntryFromImportList(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edx
  __int64 v5; // rax

  if ( ((unsigned __int8)a1 & 1) != 0 )
    return -2LL;
  v4 = 0;
  if ( !*a1 )
    return 0LL;
  v5 = 0LL;
  while ( a1[v5 + 1] != a2 )
  {
    v5 = ++v4;
    if ( (unsigned __int64)v4 >= *a1 )
      return 0LL;
  }
  a1[v5 + 1] = 0LL;
  return (__int64)MiCompressImportList(a1, 0);
}
