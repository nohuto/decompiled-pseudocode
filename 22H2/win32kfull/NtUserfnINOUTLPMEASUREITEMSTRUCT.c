/*
 * XREFs of NtUserfnINOUTLPMEASUREITEMSTRUCT @ 0x1C015C550
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPMEASUREITEMSTRUCT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int128 v7; // xmm1
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-30h] BYREF
  __int128 v10; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *a4 = *a4;
  v7 = a4[1];
  a4[1] = v7;
  v9 = *a4;
  v10 = v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  a4[1] = v10;
  return result;
}
