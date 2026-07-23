/*
 * XREFs of RtlFindRange @ 0x140760520
 * Callers:
 *     ArbFindSuitableRange @ 0x1407B9500 (ArbFindSuitableRange.c)
 *     IopPortFindSuitableRange @ 0x1407D0DA0 (IopPortFindSuitableRange.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1408BCBBC (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     RtlpIsRangeAvailable @ 0x14076073C (RtlpIsRangeAvailable.c)
 *     RtlGetLastRange @ 0x140760930 (RtlGetLastRange.c)
 */

__int64 __fastcall RtlFindRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r14d
  char v15; // r13
  char v16; // r15
  unsigned __int64 v17; // r12
  int v18; // r9d
  unsigned __int64 v20; // rbx
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int128 v22; // [rsp+60h] [rbp-38h]

  v10 = a5;
  v21 = 0LL;
  v13 = a3 - a4 + 1 - (a3 - a4 + 1) % a5;
  v22 = 0LL;
  if ( a2 > a3 )
    return 3221225485LL;
  v14 = a4 - 1;
  if ( a3 - a2 < a4 - 1 || a2 + a5 < a2 || v13 < a2 || !a4 || !a5 )
    return 3221225485LL;
  v15 = a6 & 1;
  v16 = a6 & 2;
  v17 = a3 - (a3 - a4 + 1) % a5;
  RtlGetLastRange(a1, &v21, &a5);
  do
  {
    LOBYTE(v18) = a7;
    if ( (unsigned __int8)RtlpIsRangeAvailable((unsigned int)&v21, v13, v17, v18, v15, v16, 0, a8, a9) )
    {
      *a10 = v13;
      return 0LL;
    }
    v20 = *(_QWORD *)v22 - a4;
    if ( v20 > *(_QWORD *)v22 )
      break;
    v13 = v20 - v20 % v10;
    LODWORD(v17) = v14 + v13;
  }
  while ( v13 >= a2 );
  return 3221225473LL;
}
