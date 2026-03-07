__int64 __fastcall QdcSdcTranslateStatusDefault(int a1)
{
  bool v2; // zf

  if ( a1 < 0 )
  {
    if ( a1 > -1073741582 )
    {
      if ( a1 == -1073741581
        || a1 == -1073741580
        || a1 == -1073741579
        || a1 == -1073741578
        || a1 == -1073741577
        || a1 == -1073741576
        || a1 == -1073741575 )
      {
        return (unsigned int)a1;
      }
      v2 = a1 == -1073741574;
    }
    else
    {
      if ( a1 == -1073741582
        || a1 == -1073741811
        || a1 == -1073741790
        || a1 == -1073741801
        || a1 == -1073741776
        || a1 == -1073741637
        || a1 == -1073741585
        || a1 == -1073741584 )
      {
        return (unsigned int)a1;
      }
      v2 = a1 == -1073741583;
    }
    if ( !v2 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)a1;
}
