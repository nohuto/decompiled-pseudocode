/*
 * XREFs of sub_1800DAB54 @ 0x1800DAB54
 * Callers:
 *     sub_1800DF480 @ 0x1800DF480 (sub_1800DF480.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 **__fastcall sub_1800DAB54(__int64 **a1, __int64 **a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      sub_18000F708(v4 + 2);
      sub_18000F708(v4 + 1);
      sub_18000F708(v4);
      sub_18006A148(v4);
    }
  }
  return a1;
}
