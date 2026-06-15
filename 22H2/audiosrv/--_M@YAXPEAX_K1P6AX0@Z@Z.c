/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_18007AD3A @ 0x18007AD3A (sub_18007AD3A.c)
 *     sub_18007ADBD @ 0x18007ADBD (sub_18007ADBD.c)
 *     sub_18007ADF8 @ 0x18007ADF8 (sub_18007ADF8.c)
 *     sub_18007AE33 @ 0x18007AE33 (sub_18007AE33.c)
 *     sub_18007AE6E @ 0x18007AE6E (sub_18007AE6E.c)
 *     sub_18007AEA9 @ 0x18007AEA9 (sub_18007AEA9.c)
 *     sub_18007AEE4 @ 0x18007AEE4 (sub_18007AEE4.c)
 *     sub_18007BACA @ 0x18007BACA (sub_18007BACA.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     sub_18007CFB0 @ 0x18007CFB0 (sub_18007CFB0.c)
 *     sub_1800C4EF8 @ 0x1800C4EF8 (sub_1800C4EF8.c)
 *     sub_1800D0D94 @ 0x1800D0D94 (sub_1800D0D94.c)
 *     sub_1800E74C8 @ 0x1800E74C8 (sub_1800E74C8.c)
 *     sub_18010E960 @ 0x18010E960 (sub_18010E960.c)
 *     sub_180118DBC @ 0x180118DBC (sub_180118DBC.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180069CC4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
