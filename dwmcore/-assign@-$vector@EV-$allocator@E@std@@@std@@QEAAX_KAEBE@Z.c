/*
 * XREFs of ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180250D6C
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x180250CA4 (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned char>::assign(void **a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  char *v3; // rbx
  size_t v5; // rdi
  size_t v6; // rbp
  int v8; // edx
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  v6 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( a2 <= v6 )
  {
    v8 = *a3;
  }
  else
  {
    if ( a2 <= (_BYTE *)a1[2] - v3 )
    {
      memset_0(*a1, *a3, v6);
    }
    else
    {
      std::vector<unsigned char>::_Clear_and_reserve_geometric((__int64 *)a1, a2);
      v6 = 0LL;
    }
    v3 = (char *)a1[1];
    v5 -= v6;
    v8 = *a3;
  }
  memset_0(v3, v8, v5);
  result = &v3[v5];
  a1[1] = &v3[v5];
  return result;
}
