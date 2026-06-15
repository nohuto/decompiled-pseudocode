/*
 * XREFs of sub_1800E34F4 @ 0x1800E34F4
 * Callers:
 *     sub_1800E40C0 @ 0x1800E40C0 (sub_1800E40C0.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 */

__int64 *__fastcall sub_1800E34F4(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    sub_180047458(&v5);
    v5 = *a1;
    *a1 = a2;
    sub_1800461B8(&v5);
  }
  return a1;
}
