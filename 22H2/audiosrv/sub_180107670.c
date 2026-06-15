/*
 * XREFs of sub_180107670 @ 0x180107670
 * Callers:
 *     sub_18010630C @ 0x18010630C (sub_18010630C.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180108014 @ 0x180108014 (sub_180108014.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_180107670(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *i; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_180064CCC((_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 52), 0x38uLL);
    if ( !v8 )
      sub_1800B8610(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = &v8[7 * (unsigned int)(v9 - 1) + 1]; --v9 >= 0; i -= 7 )
    {
      i[5] = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    sub_1800B8610(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 40);
  *(_QWORD *)v11 = *a2;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_BYTE *)(v11 + 16) = 1;
  *(_DWORD *)(v11 + 20) = 0;
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_DWORD *)(v11 + 48) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 40) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = (unsigned int)sub_1800CF858(a1, v12);
    sub_180108014(a1, v13);
  }
  return v11;
}
