/*
 * XREFs of HalBuildScatterGatherListDmarThinEx @ 0x140511200
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherListDmarThin @ 0x140511900 (HalpBuildScatterGatherListDmarThin.c)
 */

__int64 __fastcall HalBuildScatterGatherListDmarThinEx(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PVOID P,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  int v16; // [rsp+48h] [rbp-30h]

  if ( a3 && P && (a8 || (a7 & 1) != 0 && a15) )
    return HalpBuildScatterGatherListDmarThin(a1, a2, a3, a4, a5, a6, a7, a8, a9, v16, P, a12, a15);
  else
    return 3221225485LL;
}
