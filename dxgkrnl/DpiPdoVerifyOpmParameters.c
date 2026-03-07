__int64 __fastcall DpiPdoVerifyOpmParameters(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( !a2 )
    goto LABEL_2;
  if ( a3 < a6 )
    goto LABEL_4;
  if ( a7 && !a4 )
  {
LABEL_2:
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    return 3221225485LL;
  }
  if ( a5 >= a7 )
    return 0LL;
LABEL_4:
  WdLogSingleEntry2(2LL, a1, -1073741789LL);
  return 3221225507LL;
}
