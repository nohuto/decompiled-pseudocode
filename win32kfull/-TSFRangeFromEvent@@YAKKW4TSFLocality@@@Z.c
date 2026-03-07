__int64 __fastcall TSFRangeFromEvent(int a1, int a2)
{
  int v3; // ecx

  if ( !a2 )
  {
    switch ( a1 )
    {
      case 2147483392:
      case 2147483393:
        return 1024LL;
      case -2147483648:
      case -2147483647:
        return 256LL;
      case -2147483646:
      case -2147483645:
        return 512LL;
      case -2147483644:
      case -2147483643:
        return 4096LL;
    }
    return 0LL;
  }
  v3 = a1 - 2147483408;
  if ( !v3 )
    return 1LL;
  if ( (unsigned int)(v3 - 1) >= 2 )
    return 0LL;
  return 2LL;
}
