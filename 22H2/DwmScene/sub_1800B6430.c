/*
 * XREFs of sub_1800B6430 @ 0x1800B6430
 * Callers:
 *     sub_1800B7168 @ 0x1800B7168 (sub_1800B7168.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B6430(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  result = operator new(0x30uLL);
  result[4] = 0LL;
  result[5] = 0LL;
  *((_OWORD *)result + 1) = *(_OWORD *)a3;
  *((_OWORD *)result + 2) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  *result = a2;
  result[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v6 = result;
  return result;
}
