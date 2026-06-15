/*
 * XREFs of sub_180044248 @ 0x180044248
 * Callers:
 *     sub_180044130 @ 0x180044130 (sub_180044130.c)
 *     sub_1800F10B0 @ 0x1800F10B0 (sub_1800F10B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180044248(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v2 >= 0x3FFFFFFF;
}
