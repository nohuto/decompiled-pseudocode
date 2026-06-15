/*
 * XREFs of sub_180128E30 @ 0x180128E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180128D30 @ 0x180128D30 (sub_180128D30.c)
 */

_QWORD *__fastcall sub_180128E30(_QWORD *a1, char a2)
{
  sub_180128D30(a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
