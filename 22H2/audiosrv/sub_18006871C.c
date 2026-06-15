/*
 * XREFs of sub_18006871C @ 0x18006871C
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 *     sub_180122780 @ 0x180122780 (sub_180122780.c)
 *     sub_180122B70 @ 0x180122B70 (sub_180122B70.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 */

__int64 *__fastcall sub_18006871C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    sub_180047458(&v5);
    v5 = *a1;
    *a1 = v2;
    sub_1800461B8(&v5);
  }
  return a1;
}
