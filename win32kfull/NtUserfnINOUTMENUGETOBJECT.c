/*
 * XREFs of NtUserfnINOUTMENUGETOBJECT @ 0x1C01E3060
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTMENUGETOBJECT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6)
{
  __int128 *v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  __int128 v13; // [rsp+58h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  PtiCurrentShared(a1);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (__int128 *)MmUserProbeAddress;
  v12 = *v10;
  v13 = v10[1];
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *a4 = v12;
  a4[1] = v13;
  return result;
}
