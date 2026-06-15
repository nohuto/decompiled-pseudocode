/*
 * XREFs of sub_1800CDFA4 @ 0x1800CDFA4
 * Callers:
 *     sub_1800CE248 @ 0x1800CE248 (sub_1800CE248.c)
 *     sub_1800CFE30 @ 0x1800CFE30 (sub_1800CFE30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800CDFA4(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 40LL))(*a1);
  return v3 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
}
