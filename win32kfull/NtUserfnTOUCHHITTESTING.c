/*
 * XREFs of NtUserfnTOUCHHITTESTING @ 0x1C01E4340
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnTOUCHHITTESTING(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v13; // [rsp+38h] [rbp-60h] BYREF
  __int128 v14; // [rsp+48h] [rbp-50h]
  __int128 v15; // [rsp+58h] [rbp-40h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PtiCurrentShared(a1);
  if ( a4 + 3 < a4 || (unsigned __int64)(a4 + 3) > MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v10 = a4[1];
  v11 = a4[2];
  v13 = *a4;
  v14 = v10;
  v15 = v11;
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           &v13,
           a5);
}
