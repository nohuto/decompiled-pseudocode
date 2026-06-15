/*
 * XREFs of sub_1800E5D60 @ 0x1800E5D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E5D60(__int64 a1, __int64 a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2);
  return sub_1800E6938(a1, v3 != 0 ? 1 : -1);
}
