/*
 * XREFs of sub_1800E0550 @ 0x1800E0550
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0550(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  sub_1800462E4(&v9, a1);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    sub_18005E8F8((__int64)"AudioServerSetAmbHeadTracking", 4678, v6);
  EtwEventActivityIdControl(4LL, v10);
  return v7;
}
