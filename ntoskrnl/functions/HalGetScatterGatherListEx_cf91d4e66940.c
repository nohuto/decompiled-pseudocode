__int64 __fastcall HalGetScatterGatherListEx(
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
        int a11,
        int a12,
        __int64 a13)
{
  if ( a3 && (a8 || (a7 & 1) != 0 && a13) )
    return HalpBuildScatterGatherList(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, 0);
  else
    return 3221225485LL;
}
