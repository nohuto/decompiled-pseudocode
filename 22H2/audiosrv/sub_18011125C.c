/*
 * XREFs of sub_18011125C @ 0x18011125C
 * Callers:
 *     sub_180111290 @ 0x180111290 (sub_180111290.c)
 *     sub_1801131E0 @ 0x1801131E0 (sub_1801131E0.c)
 *     sub_1801149D0 @ 0x1801149D0 (sub_1801149D0.c)
 *     sub_180114F70 @ 0x180114F70 (sub_180114F70.c)
 * Callees:
 *     sub_1801122FC @ 0x1801122FC (sub_1801122FC.c)
 */

__int64 __fastcall sub_18011125C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1801122FC(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
