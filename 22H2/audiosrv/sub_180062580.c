/*
 * XREFs of sub_180062580 @ 0x180062580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180062580(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = off_180148E38;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
