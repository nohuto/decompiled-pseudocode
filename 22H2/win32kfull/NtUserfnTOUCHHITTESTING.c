/*
 * XREFs of NtUserfnTOUCHHITTESTING @ 0x1C0206750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnTOUCHHITTESTING(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a4 + 3 < a4 || (unsigned __int64)(a4 + 3) > MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v6 = a4[1];
  v7 = a4[2];
  v9 = *a4;
  v10 = v6;
  v11 = v7;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v9,
           a5);
}
