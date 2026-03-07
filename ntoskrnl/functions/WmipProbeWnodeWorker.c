__int64 __fastcall WmipProbeWnodeWorker(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        char a8,
        char a9)
{
  unsigned int v9; // ecx

  if ( a3 )
  {
    if ( a3 < a2 )
      return 3221225473LL;
    if ( ((a3 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != a3 )
      return 3221225473LL;
    if ( a3 > (unsigned __int64)a6 - 2 )
      return 3221225473LL;
    v9 = *(unsigned __int16 *)(a3 + a1) + a3 + 2;
    if ( v9 < a3 || v9 > a6 || v9 > a7 && a8 )
      return 3221225473LL;
    if ( a4 )
    {
      if ( a4 < v9 )
        return 3221225473LL;
      goto LABEL_10;
    }
  }
  else if ( a4 )
  {
LABEL_10:
    if ( a4 < a2 )
      return 3221225473LL;
  }
  if ( ((a4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) == a4
    && (!a9 || !a4 || a5 <= a6 && a4 <= a6 - a5)
    && (!a8 || a7 >= a2 && a4 <= a7 && a4) )
  {
    return 0LL;
  }
  return 3221225473LL;
}
