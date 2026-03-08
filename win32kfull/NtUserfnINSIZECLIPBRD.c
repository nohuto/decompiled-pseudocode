/*
 * XREFs of NtUserfnINSIZECLIPBRD @ 0x1C01E34D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSIZECLIPBRD(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF

  v11 = 0LL;
  PtiCurrentShared(a1);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v11 = *a4;
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           &v11,
           a5);
}
