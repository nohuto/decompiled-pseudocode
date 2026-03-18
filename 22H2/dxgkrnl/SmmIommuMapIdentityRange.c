/*
 * XREFs of SmmIommuMapIdentityRange @ 0x1C002B3E0
 * Callers:
 *     SmmMapIommu @ 0x1C002B438 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SmmIommuMapIdentityRange(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0140C38)(a1, 3LL);
}
