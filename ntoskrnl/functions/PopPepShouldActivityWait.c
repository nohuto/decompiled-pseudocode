char __fastcall PopPepShouldActivityWait(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 *v6; // r9
  __int64 *v7; // r9
  char v8; // dl
  _DWORD **v9; // r10
  _DWORD *i; // r9

  v6 = qword_140004FF8;
  if ( !a5 )
    v6 = qword_140004FE0;
  v7 = &v6[17 * a2];
  if ( a3 > a4 )
    return 0;
  v8 = 1;
  v9 = (_DWORD **)(a1 + 8LL * a3);
  for ( i = (_DWORD *)v7 + a3; !*i || (*i & **v9) == 0; ++i )
  {
    ++a3;
    ++v9;
    if ( a3 > a4 )
      return 0;
  }
  return v8;
}
