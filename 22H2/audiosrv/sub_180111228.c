/*
 * XREFs of sub_180111228 @ 0x180111228
 * Callers:
 *     sub_180111C9C @ 0x180111C9C (sub_180111C9C.c)
 *     sub_180113900 @ 0x180113900 (sub_180113900.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 * Callees:
 *     sub_180112258 @ 0x180112258 (sub_180112258.c)
 */

__int64 __fastcall sub_180111228(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180112258(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
