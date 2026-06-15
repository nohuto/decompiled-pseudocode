/*
 * XREFs of sub_18005A334 @ 0x18005A334
 * Callers:
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_18011EACC @ 0x18011EACC (sub_18011EACC.c)
 *     sub_180122FC8 @ 0x180122FC8 (sub_180122FC8.c)
 */

void __fastcall sub_18005A334(__int64 a1, __int64 a2)
{
  int i; // edi
  unsigned int v5; // edi
  int j; // esi
  __int64 *v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // eax

  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    for ( j = 0; j < *(_DWORD *)(a2 + 8); ++j )
    {
      v7 = *(__int64 **)sub_180023320(a1 + 32, i);
      v8 = (_QWORD *)sub_180023320(a2, j);
      v9 = sub_180022EE0(v7, v8);
      if ( v9 != -1 )
        sub_18011EACC(v7, v9);
    }
  }
  while ( 1 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 40) <= 0 )
      break;
    while ( *(_DWORD *)(*(_QWORD *)sub_180023320(a1 + 32, v5) + 8LL) )
    {
      if ( (signed int)++v5 >= *(_DWORD *)(a1 + 40) )
        return;
    }
    sub_180122FC8(a1 + 32, v5);
  }
}
