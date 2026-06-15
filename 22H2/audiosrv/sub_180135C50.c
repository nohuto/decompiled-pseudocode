/*
 * XREFs of sub_180135C50 @ 0x180135C50
 * Callers:
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180135C50(__int64 a1, __int64 a2)
{
  bool v2; // bl
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
  {
    v5 = 0LL;
    v2 = (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 40LL))(v3, a2, &v5) >= 0;
    sub_18000F708(&v5);
  }
  return v2;
}
