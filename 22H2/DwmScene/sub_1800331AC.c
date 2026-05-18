/*
 * XREFs of sub_1800331AC @ 0x1800331AC
 * Callers:
 *     sub_180028D60 @ 0x180028D60 (sub_180028D60.c)
 *     sub_18003E810 @ 0x18003E810 (sub_18003E810.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800331AC(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[4]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  memset(v3, 0, sizeof(v3));
  return (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v1 + 264LL))(v1, 8LL, v3);
}
