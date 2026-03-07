__int64 __fastcall HalBuildScatterGatherListEx(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  if ( a3 && a11 && (a8 || (a7 & 1) != 0 && a15) )
    return HalpBuildScatterGatherList(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return 3221225485LL;
}
