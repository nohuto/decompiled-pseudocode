/*
 * XREFs of NtUserfnINSIZECLIPBRD @ 0x1C0202DB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSIZECLIPBRD(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF

  v11 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v11 = *a4;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v11,
           a5);
}
