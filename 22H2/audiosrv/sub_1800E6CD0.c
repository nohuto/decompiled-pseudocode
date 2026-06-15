/*
 * XREFs of sub_1800E6CD0 @ 0x1800E6CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

int __fastcall sub_1800E6CD0(__int64 *a1, char a2)
{
  int result; // eax

  result = sub_1800461B8(a1 + 1);
  if ( a2 )
    return sub_18006A148(a1);
  return result;
}
