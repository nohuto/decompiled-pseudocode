/*
 * XREFs of sub_1800FEBC0 @ 0x1800FEBC0
 * Callers:
 *     sub_1800F9BE8 @ 0x1800F9BE8 (sub_1800F9BE8.c)
 *     sub_1801001B8 @ 0x1801001B8 (sub_1801001B8.c)
 *     sub_180100608 @ 0x180100608 (sub_180100608.c)
 *     sub_180103700 @ 0x180103700 (sub_180103700.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800FEBC0(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 5);
  if ( !v1 && a1 )
  {
    *(_QWORD *)a1 = off_1801557B0;
    sub_18006A148((void *)a1);
  }
  return v1;
}
