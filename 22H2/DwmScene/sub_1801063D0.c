/*
 * XREFs of sub_1801063D0 @ 0x1801063D0
 * Callers:
 *     sub_180105EAC @ 0x180105EAC (sub_180105EAC.c)
 *     sub_180106004 @ 0x180106004 (sub_180106004.c)
 *     sub_1801060C8 @ 0x1801060C8 (sub_1801060C8.c)
 * Callees:
 *     sub_1800B3A6C @ 0x1800B3A6C (sub_1800B3A6C.c)
 */

char __fastcall sub_1801063D0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v5; // bl

  v4 = *a2;
  v5 = sub_1800B3A6C(*a3);
  if ( sub_1800B3A6C(v4) == v5 )
    return 0;
  else
    return sub_1800B3A6C(*a2);
}
