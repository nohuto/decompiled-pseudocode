/*
 * XREFs of sub_180068850 @ 0x180068850
 * Callers:
 *     sub_18005EA64 @ 0x18005EA64 (sub_18005EA64.c)
 *     sub_180068840 @ 0x180068840 (sub_180068840.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068850(__int64 a1, __int64 a2)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, a1 + 16);
  if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a1 + 24), v3 < 0) )
    sub_18005E8F8((__int64)"CMeterControlBase::Initialize", 164, v3);
  return (unsigned int)v3;
}
