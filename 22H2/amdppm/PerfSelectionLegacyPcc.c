/*
 * XREFs of PerfSelectionLegacyPcc @ 0x1C000E700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionLegacyPcc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int *a8,
        _QWORD *a9)
{
  __int64 v9; // r10

  v9 = qword_1C00138E8;
  if ( a2 >= a3 )
    a3 = a2;
  if ( a3 > a4 )
    a3 = a4;
  if ( a9 )
    *a9 = 100 - a3;
  if ( a8 )
    *a8 = a3 * *(_DWORD *)(v9 + 28) / 0x64;
  return a3;
}
