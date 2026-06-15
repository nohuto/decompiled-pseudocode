/*
 * XREFs of sub_180120148 @ 0x180120148
 * Callers:
 *     sub_1801201F0 @ 0x1801201F0 (sub_1801201F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180120148(__int64 a1)
{
  *(_QWORD *)a1 = off_180155DD8;
  *(_QWORD *)(a1 + 8) = off_180155D88;
  *(_QWORD *)(a1 + 16) = off_180155D48;
  *(_QWORD *)(a1 + 24) = off_180155D28;
  *(_DWORD *)(a1 + 32) = -1073741823;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 16LL))(qword_18019E5D8);
  return sub_18012E4A0(a1);
}
