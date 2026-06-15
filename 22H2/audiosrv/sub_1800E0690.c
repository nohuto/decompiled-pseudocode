/*
 * XREFs of sub_1800E0690 @ 0x1800E0690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0690(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-58h] BYREF

  sub_1800462E4(&v7, a1);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 152LL))(a1, a2);
  v5 = v4;
  if ( v4 < 0 )
    sub_18005E8F8((__int64)"AudioServerSetAmbRotation", 4745, v4);
  EtwEventActivityIdControl(4LL, v8);
  return v5;
}
