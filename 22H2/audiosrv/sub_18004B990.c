/*
 * XREFs of sub_18004B990 @ 0x18004B990
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18004B990(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1 - *a2;
  if ( *a1 == *a2 )
    v2 = a1[1] - a2[1];
  return v2 == 0;
}
