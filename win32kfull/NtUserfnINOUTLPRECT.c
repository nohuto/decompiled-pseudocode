/*
 * XREFs of NtUserfnINOUTLPRECT @ 0x1C00E4050
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPRECT(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 *v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF

  v12 = 0LL;
  PtiCurrentShared(a1);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (__int128 *)MmUserProbeAddress;
  v12 = *v10;
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *a4 = v12;
  return result;
}
