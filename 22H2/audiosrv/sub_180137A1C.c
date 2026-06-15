/*
 * XREFs of sub_180137A1C @ 0x180137A1C
 * Callers:
 *     sub_180133D60 @ 0x180133D60 (sub_180133D60.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 */

__int64 __fastcall sub_180137A1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    sub_180133BDC(v6, *(__int64 **)(a1 + 8));
    result = sub_1800472E0(*(_QWORD *)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
