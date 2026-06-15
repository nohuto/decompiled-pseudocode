/*
 * XREFs of sub_1800CFC78 @ 0x1800CFC78
 * Callers:
 *     sub_1800CDA14 @ 0x1800CDA14 (sub_1800CDA14.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 * Callees:
 *     sub_180006430 @ 0x180006430 (sub_180006430.c)
 *     sub_18002BDA0 @ 0x18002BDA0 (sub_18002BDA0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 */

__int64 __fastcall sub_1800CFC78(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rax
  __int64 i; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v5 = (_QWORD *)*((_QWORD *)v2 + i);
      v3 = v2;
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = (_QWORD *)v5[11];
          sub_180006430(a1, v6);
        }
        while ( v5 );
        v2 = *(void **)a1;
        v3 = *(void **)a1;
      }
    }
  }
  sub_180033A70(v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_1800CF858(a1, 0LL);
    sub_18002BDA0(a1, v7, 0);
  }
  result = sub_18005248C(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
