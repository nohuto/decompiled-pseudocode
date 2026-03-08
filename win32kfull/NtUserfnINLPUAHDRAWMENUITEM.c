/*
 * XREFs of NtUserfnINLPUAHDRAWMENUITEM @ 0x1C01E2950
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPUAHDRAWMENUITEM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rcx
  _OWORD v12[9]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v12, 0, sizeof(v12));
  PtiCurrentShared(v10);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v12[0] = *a4;
  v12[1] = a4[1];
  v12[2] = a4[2];
  v12[3] = a4[3];
  v12[4] = a4[4];
  v12[5] = a4[5];
  v12[6] = a4[6];
  v12[7] = a4[7];
  v12[8] = a4[8];
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v12,
           a5);
}
