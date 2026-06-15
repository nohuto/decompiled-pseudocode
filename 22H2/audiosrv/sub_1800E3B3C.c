/*
 * XREFs of sub_1800E3B3C @ 0x1800E3B3C
 * Callers:
 *     sub_180074860 @ 0x180074860 (sub_180074860.c)
 * Callees:
 *     sub_18004F260 @ 0x18004F260 (sub_18004F260.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 */

_QWORD *__fastcall sub_1800E3B3C(_QWORD *a1, char a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rcx

  *a1 = off_1801554E0;
  v4 = a1 + 1;
  *v4 = off_180155350;
  a1[31] = off_180155330;
  a1[32] = off_180155300;
  sub_18004F260((__int64)v4);
  v5 = a1[73];
  if ( v5 )
  {
    a1[73] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_1800E349C((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
