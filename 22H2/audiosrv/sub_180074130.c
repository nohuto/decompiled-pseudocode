/*
 * XREFs of sub_180074130 @ 0x180074130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180074130(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = off_18014B1C8;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
