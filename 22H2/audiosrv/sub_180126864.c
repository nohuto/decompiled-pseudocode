/*
 * XREFs of sub_180126864 @ 0x180126864
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 *     sub_1801269B0 @ 0x1801269B0 (sub_1801269B0.c)
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 */

__int64 *__fastcall sub_180126864(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = qword_18019F7E8;
  if ( *a1 != qword_18019F7E8 )
  {
    v5 = qword_18019F7E8;
    sub_180047458(&v5);
    v5 = *a1;
    *a1 = v2;
    sub_180047278(&v5);
  }
  return a1;
}
