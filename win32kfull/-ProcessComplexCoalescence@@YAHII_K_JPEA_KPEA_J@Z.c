_BOOL8 __fastcall ProcessComplexCoalescence(
        int a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  int v6; // ecx
  __int64 v8; // rcx

  v6 = a1 - 2;
  if ( !v6 )
  {
    if ( a3 == *a5 )
      return a4 != *a6;
    return 1LL;
  }
  if ( v6 == 1 )
  {
    v8 = *a5;
    if ( a2 == 536 )
    {
      if ( v8 == a3 && (a3 & 0x8000) == 0 && *a6 == a4 )
        return 0LL;
    }
    else if ( !v8 && !a3 )
    {
      *a5 = 0LL;
      goto LABEL_7;
    }
    return 1LL;
  }
  *a5 = a3;
LABEL_7:
  *a6 = a4;
  return 0LL;
}
