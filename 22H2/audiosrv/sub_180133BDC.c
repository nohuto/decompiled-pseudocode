/*
 * XREFs of sub_180133BDC @ 0x180133BDC
 * Callers:
 *     sub_180133E9B @ 0x180133E9B (sub_180133E9B.c)
 *     sub_1801340B0 @ 0x1801340B0 (sub_1801340B0.c)
 *     sub_18013455C @ 0x18013455C (sub_18013455C.c)
 *     sub_180134A80 @ 0x180134A80 (sub_180134A80.c)
 *     sub_1801363FC @ 0x1801363FC (sub_1801363FC.c)
 *     sub_180136D4C @ 0x180136D4C (sub_180136D4C.c)
 *     sub_180137A1C @ 0x180137A1C (sub_180137A1C.c)
 * Callees:
 *     unknown_libname_300 @ 0x1800E39E8 (unknown_libname_300.c)
 */

__int64 *__fastcall sub_180133BDC(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = unknown_libname_300(v3);
      v3 += 4;
    }
    while ( v3 != a2 );
  }
  return result;
}
