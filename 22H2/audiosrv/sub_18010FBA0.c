/*
 * XREFs of sub_18010FBA0 @ 0x18010FBA0
 * Callers:
 *     sub_180074C20 @ 0x180074C20 (sub_180074C20.c)
 *     sub_180074C30 @ 0x180074C30 (sub_180074C30.c)
 *     sub_180074C40 @ 0x180074C40 (sub_180074C40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010FBA0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64 *, __int64, __int64 *, __int64 *); // rax
  __int64 v9; // rax

  v3 = 0;
  v4 = a3;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v5 = *a2 - 0x421DB527140C61E5LL;
  if ( *a2 == 0x421DB527140C61E5LL )
    v5 = a2[1] + 0x28FE28005686BC63LL;
  if ( !v5 )
  {
    *a3 = (__int64)a1;
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *, __int64 *))(*a1 + 8))(a1, a2, a3, a1);
    return v3;
  }
  v6 = *a2 - 0x4694D0E5E1FD1A76LL;
  if ( *a2 == 0x4694D0E5E1FD1A76LL )
    v6 = a2[1] + 0x7F3F5987CE39575CLL;
  if ( !v6 )
  {
    v7 = (__int64)(a1 + 1);
    *a3 = (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL);
    v8 = *(void (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(*a1 + 8);
LABEL_15:
    v8(a1, v7, a3, a1);
    return v3;
  }
  v9 = *a2 - 0x4950D91A12F0AC85LL;
  if ( *a2 == 0x4950D91A12F0AC85LL )
    v9 = a2[1] + 0xB4828A1C7185A6ALL;
  if ( !v9 )
  {
    a3 = a1 + 2;
    v7 = (unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL);
    *v4 = v7;
    v8 = *(void (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(*a1 + 8);
    goto LABEL_15;
  }
  return sub_1800CA2A0((__int64)(a1 + 3), a2, a3);
}
