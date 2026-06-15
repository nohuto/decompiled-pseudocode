/*
 * XREFs of sub_18010B4E4 @ 0x18010B4E4
 * Callers:
 *     sub_180106E0C @ 0x180106E0C (sub_180106E0C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010B1AC @ 0x18010B1AC (sub_18010B1AC.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_18010B4E4(__int64 *a1)
{
  bool v2; // di
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0LL;
  sub_1800CB144(&v4);
  if ( (int)sub_18010B1AC(a1, &v4) >= 0 )
    v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) == 1;
  sub_18000F708(&v4);
  return v2;
}
