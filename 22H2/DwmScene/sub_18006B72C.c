/*
 * XREFs of sub_18006B72C @ 0x18006B72C
 * Callers:
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 * Callees:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006B72C(_BYTE *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  result = sub_1800615B4((__int64)(a1 + 24), (__int64)&v3);
  if ( !a1[3977] )
  {
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  if ( BYTE8(v3) )
    return sub_180061A34(v3);
  return result;
}
