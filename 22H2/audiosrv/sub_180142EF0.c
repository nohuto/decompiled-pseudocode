/*
 * XREFs of sub_180142EF0 @ 0x180142EF0
 * Callers:
 *     sub_1800753D0 @ 0x1800753D0 (sub_1800753D0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_18014350C @ 0x18014350C (sub_18014350C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180142EF0(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *a1 = off_180156490;
  a1[1] = off_1801564E8;
  sub_18014350C();
  v4 = a1[4];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[3];
  if ( v5 )
    sub_1800ED08C(v5);
  a1[1] = &off_180147338;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
