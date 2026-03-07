void __fastcall BltLnkReadPat(
        unsigned __int8 *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // edx
  __int64 v9; // rax

  v8 = a6;
  switch ( a7 )
  {
    case 2u:
      v8 = 2 * a6;
      break;
    case 3u:
      v8 = 3 * a6;
      break;
    case 4u:
      v8 = 4 * a6;
      break;
  }
  for ( ; v8; --v8 )
  {
    v9 = 0LL;
    if ( a5 != a4 )
      v9 = a5;
    a5 = v9 + 1;
    *a1++ = a3[v9];
  }
}
