/*
 * XREFs of sub_180107514 @ 0x180107514
 * Callers:
 *     sub_1801062A0 @ 0x1801062A0 (sub_1801062A0.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180107EE4 @ 0x180107EE4 (sub_180107EE4.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_180107514(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *i; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_180064CCC((_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 52), 0x78uLL);
    if ( !v8 )
      sub_1800B8610(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = &v8[15 * (unsigned int)(v9 - 1) + 1]; --v9 >= 0; i -= 15 )
    {
      i[13] = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    sub_1800B8610(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 104);
  *(_QWORD *)v11 = *a2;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_OWORD *)(v11 + 24) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_QWORD *)(v11 + 48) = 0LL;
  *(_QWORD *)(v11 + 56) = 0LL;
  *(_QWORD *)(v11 + 64) = 0LL;
  *(_QWORD *)(v11 + 72) = 0LL;
  *(_QWORD *)(v11 + 80) = 0LL;
  *(_QWORD *)(v11 + 88) = 0LL;
  *(_BYTE *)(v11 + 96) = 0;
  *(_DWORD *)(v11 + 112) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 104) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = (unsigned int)sub_1800CF858(a1, v12);
    sub_180107EE4(a1, v13);
  }
  return v11;
}
