/*
 * XREFs of sub_1800EA7C0 @ 0x1800EA7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800036C4 @ 0x1800036C4 (sub_1800036C4.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E9758 @ 0x1800E9758 (sub_1800E9758.c)
 */

__int64 *__fastcall sub_1800EA7C0(__int64 *a1, char a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx

  v4 = a1 + 7;
  sub_1800E9758((__int64)(a1 + 7), (__int64)(a1 + 7), *(_QWORD *)(a1[7] + 8));
  sub_1800472E0(*v4, 0x48uLL);
  v5 = a1[6];
  if ( v5 )
  {
    a1[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_1800036C4((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
