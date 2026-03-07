__int64 __fastcall xwcschr(unsigned __int64 a1, __int16 a2)
{
  __int16 v2; // ax
  __int16 v3; // r8

  v2 = *(_WORD *)a1;
  if ( *(_WORD *)a1 )
  {
    v3 = *(_WORD *)a1;
    do
    {
      v2 = v3;
      if ( v3 == a2 )
        break;
      a1 += 2LL;
      v2 = *(_WORD *)a1;
      v3 = *(_WORD *)a1;
    }
    while ( *(_WORD *)a1 );
  }
  return a1 & -(__int64)(v2 != 0);
}
