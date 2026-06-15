/*
 * XREFs of sub_1800D5160 @ 0x1800D5160
 * Callers:
 *     sub_1800D8F60 @ 0x1800D8F60 (sub_1800D8F60.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

void ***__fastcall sub_1800D5160(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void ***result; // rax
  void *v5; // rcx

  v2 = ***(void ****)a1;
  if ( v2 )
  {
    sub_180033A70(v2);
    ***(_QWORD ***)a1 = 0LL;
  }
  v3 = ***(void ****)(a1 + 8);
  if ( v3 )
  {
    sub_180033A70(v3);
    ***(_QWORD ***)(a1 + 8) = 0LL;
  }
  result = *(void ****)(a1 + 16);
  if ( *result )
  {
    v5 = **result;
    if ( v5 )
    {
      sub_180033A70(v5);
      result = *(void ****)(a1 + 16);
      **result = 0LL;
    }
  }
  return result;
}
