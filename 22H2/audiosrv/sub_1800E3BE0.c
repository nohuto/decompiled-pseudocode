/*
 * XREFs of sub_1800E3BE0 @ 0x1800E3BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3474 @ 0x1800E3474 (sub_1800E3474.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E3BE0(_QWORD *a1, char a2)
{
  __int64 v4; // rcx

  *a1 = &off_180155570;
  a1[1] = off_180155530;
  a1[2] = off_180155510;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&dwCreationFlags + 56LL))(*(_QWORD *)&dwCreationFlags);
  v4 = a1[5];
  if ( v4 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_1800E3474((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
