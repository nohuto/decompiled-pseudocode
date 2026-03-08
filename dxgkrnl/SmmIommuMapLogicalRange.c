/*
 * XREFs of SmmIommuMapLogicalRange @ 0x1C006E36C
 * Callers:
 *     SmmMapIommu @ 0x1C002A438 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 SmmIommuMapLogicalRange(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v5; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+28h] BYREF

  va_start(va, a3);
  v4[0] = 2LL;
  v4[1] = a3 + 48;
  v4[2] = (unsigned __int64)*(unsigned int *)(a3 + 40) >> 12;
  v5 = 0LL;
  if ( dword_1C013BBF8 == 2 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_1C013BC38)(
             a1,
             3LL,
             v4,
             (__int64 *)va,
             0LL,
             0LL,
             &v5);
  if ( dword_1C013BBF8 == 3 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_1C013BC38)(
             a1,
             3LL,
             v4,
             (__int64 *)va,
             0LL,
             0LL,
             &v5);
  return qword_1C013BC38();
}
