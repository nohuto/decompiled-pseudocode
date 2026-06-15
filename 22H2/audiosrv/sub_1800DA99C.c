/*
 * XREFs of sub_1800DA99C @ 0x1800DA99C
 * Callers:
 *     sub_1800DDD90 @ 0x1800DDD90 (sub_1800DDD90.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

void ***__fastcall sub_1800DA99C(__int64 a1)
{
  void ***result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    sub_180033A70(***(void ****)a1);
    result = *(void ****)a1;
    ***(_QWORD ***)a1 = 0LL;
  }
  return result;
}
