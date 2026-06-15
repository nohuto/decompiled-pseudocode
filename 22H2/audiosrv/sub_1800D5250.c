/*
 * XREFs of sub_1800D5250 @ 0x1800D5250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800D4FEC @ 0x1800D4FEC (sub_1800D4FEC.c)
 */

__int64 __fastcall sub_1800D5250(__int64 a1, char a2)
{
  *(_QWORD *)a1 = off_1801552A8;
  sub_18006A148(*(void **)(a1 + 152));
  sub_18006A148(*(void **)(a1 + 160));
  *(_QWORD *)a1 = off_1801464C0;
  sub_1800D4FEC((_QWORD *)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148((void *)a1);
  return a1;
}
