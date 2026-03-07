char __fastcall DbgkpTriageDumpCheckPresentHashTable(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4)
{
  __int64 v4; // rcx
  __int64 i; // r10
  __int64 v6; // rax

  if ( a4 )
    *a4 = -1LL;
  v4 = *(_QWORD *)(a1 + 32);
  for ( i = (a2 >> 4) - 3571 * ((unsigned __int64)(((a2 >> 4) * (unsigned __int128)0x92D1795E69F4AC57uLL) >> 64) >> 11);
        ;
        i = (i + 1) & -(__int64)((unsigned __int64)(i + 1) < 0xDF3) )
  {
    if ( !*(_QWORD *)(v4 + 8 * i) )
    {
      if ( a4 )
        *a4 = i;
      return 0;
    }
    v6 = *(_QWORD *)(v4 + 8 * i);
    if ( *(_QWORD *)v6 == a2 && (!a3 || *(_DWORD *)(v6 + 12) == a3) )
      break;
  }
  if ( a4 )
    *a4 = i;
  return 1;
}
