/*
 * XREFs of NtUserfnINOUTLPSIZE @ 0x1C01E2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSIZE(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = 0LL;
  PtiCurrentShared(a1);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_QWORD *)MmUserProbeAddress;
  v13[0] = *v10;
  v11 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          a2,
          a3,
          v13,
          a5);
  v13[1] = v11;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_QWORD *)MmUserProbeAddress;
  *a4 = v13[0];
  return v11;
}
