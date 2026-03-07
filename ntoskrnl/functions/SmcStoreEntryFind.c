_DWORD *__fastcall SmcStoreEntryFind(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // r9
  unsigned __int64 v4; // rcx

  v3 = (_DWORD *)(a1 + 168);
  v4 = a1 + 552;
  while ( (unsigned __int64)v3 < v4 )
  {
    if ( *v3 != -1 && *v3 == a2 && (v3[1] & 3) == a3 )
      return v3;
    v3 += 6;
  }
  return 0LL;
}
