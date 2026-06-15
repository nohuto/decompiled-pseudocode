/*
 * XREFs of sub_180064A70 @ 0x180064A70
 * Callers:
 *     sub_1800649E8 @ 0x1800649E8 (sub_1800649E8.c)
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 * Callees:
 *     sub_180064AA4 @ 0x180064AA4 (sub_180064AA4.c)
 */

__int64 __fastcall sub_180064A70(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180064AA4(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
